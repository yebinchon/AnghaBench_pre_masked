
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_alloc_context {int * ac_inode; int ac_max_block; int ac_bits_wanted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ocfs2_alloc_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ocfs2_super*,int ) ;
 int FUNC_6 (struct ocfs2_alloc_context*) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct ocfs2_super*,struct ocfs2_alloc_context*) ;
 int FUNC_10 (struct ocfs2_super*,int ,struct ocfs2_alloc_context*) ;
 int FUNC_11 (struct ocfs2_super*,int ) ;

__attribute__((used)) static int FUNC_12(struct ocfs2_super *VAR_4,
          u32 VAR_5, u64 VAR_6,
          int VAR_7,
          struct ocfs2_alloc_context **VAR_8)
{
 int VAR_9, VAR_10 = 0;
 int VAR_11 = 0;

 *VAR_8 = FUNC_3(sizeof(struct ocfs2_alloc_context), VAR_3);
 if (!(*VAR_8)) {
  VAR_9 = -VAR_1;
  FUNC_4(VAR_9);
  goto bail;
 }

 (*VAR_8)->ac_bits_wanted = VAR_5;
 (*VAR_8)->ac_max_block = VAR_6;

 VAR_9 = -VAR_2;
 if (!(VAR_7 & VAR_0) &&
     FUNC_5(VAR_4, VAR_5)) {
  VAR_9 = FUNC_10(VAR_4,
       VAR_5,
       *VAR_8);
  if ((VAR_9 < 0) && (VAR_9 != -VAR_2)) {
   FUNC_4(VAR_9);
   goto bail;
  }
 }

 if (VAR_9 == -VAR_2) {
retry:
  VAR_9 = FUNC_9(VAR_4, *VAR_8);

  if (VAR_9 == -VAR_2 && !VAR_11) {
   VAR_11 = 1;
   FUNC_8((*VAR_8)->ac_inode, 1);
   FUNC_1((*VAR_8)->ac_inode);

   VAR_10 = FUNC_11(VAR_4, VAR_5);
   if (VAR_10 == 1) {
    FUNC_2((*VAR_8)->ac_inode);
    (*VAR_8)->ac_inode = ((void*)0);
    goto retry;
   }

   if (VAR_10 < 0)
    FUNC_4(VAR_10);

   FUNC_0((*VAR_8)->ac_inode);
   VAR_10 = FUNC_7((*VAR_8)->ac_inode, ((void*)0), 1);
   if (VAR_10 < 0) {
    FUNC_4(VAR_10);
    FUNC_1((*VAR_8)->ac_inode);
    FUNC_2((*VAR_8)->ac_inode);
    (*VAR_8)->ac_inode = ((void*)0);
    goto bail;
   }
  }
  if (VAR_9 < 0) {
   if (VAR_9 != -VAR_2)
    FUNC_4(VAR_9);
   goto bail;
  }
 }

 VAR_9 = 0;
bail:
 if ((VAR_9 < 0) && *VAR_8) {
  FUNC_6(*VAR_8);
  *VAR_8 = ((void*)0);
 }

 if (VAR_9)
  FUNC_4(VAR_9);
 return VAR_9;
}
