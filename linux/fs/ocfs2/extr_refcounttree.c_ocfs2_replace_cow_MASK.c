
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_cow_context {scalar_t__ cow_start; scalar_t__ cow_len; int (* get_clusters ) (struct ocfs2_cow_context*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;int dealloc; struct inode* inode; } ;
struct inode {int i_sb; int i_ino; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct ocfs2_cow_context*,scalar_t__,scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_7 (struct ocfs2_super*) ;
 int FUNC_8 (struct ocfs2_super*,int *) ;
 int FUNC_9 (struct ocfs2_super*,int) ;
 int FUNC_10 (struct ocfs2_cow_context*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;

__attribute__((used)) static int FUNC_11(struct ocfs2_cow_context *VAR_1)
{
 int VAR_2 = 0;
 struct inode *VAR_3 = VAR_1->inode;
 u32 VAR_4 = VAR_1->cow_start, VAR_5 = VAR_1->cow_len;
 u32 VAR_6, VAR_7;
 unsigned int VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_1(VAR_3->i_sb);

 if (!FUNC_7(VAR_9)) {
  return FUNC_4(VAR_3->i_sb, "Inode %lu want to use refcount tree, but the feature bit is not set in the super block\n",
       VAR_3->i_ino);
 }

 FUNC_5(&VAR_1->dealloc);

 while (VAR_5) {
  VAR_2 = VAR_1->get_clusters(VAR_1, VAR_4, &VAR_6,
         &VAR_7, &VAR_8);
  if (VAR_2) {
   FUNC_2(VAR_2);
   break;
  }

  FUNC_0(!(VAR_8 & VAR_0));

  if (VAR_5 < VAR_7)
   VAR_7 = VAR_5;

  VAR_2 = FUNC_6(VAR_3->i_sb, VAR_1,
         VAR_4, VAR_6,
         VAR_7, VAR_8);
  if (VAR_2) {
   FUNC_2(VAR_2);
   break;
  }

  VAR_5 -= VAR_7;
  VAR_4 += VAR_7;
 }

 if (FUNC_3(&VAR_1->dealloc)) {
  FUNC_9(VAR_9, 1);
  FUNC_8(VAR_9, &VAR_1->dealloc);
 }

 return VAR_2;
}
