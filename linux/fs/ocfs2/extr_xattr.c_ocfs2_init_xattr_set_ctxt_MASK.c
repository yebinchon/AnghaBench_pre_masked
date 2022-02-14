
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_set_ctxt {int * meta_ac; int data_ac; int dealloc; } ;
struct ocfs2_xattr_search {int dummy; } ;
struct ocfs2_xattr_info {int xi_name; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_sb; } ;


 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_xattr_set_ctxt*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct ocfs2_dinode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_search*,int*,int*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ocfs2_super*,int,int *) ;
 int FUNC_7 (struct ocfs2_super*,int,int **) ;
 int FUNC_8 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_0,
         struct ocfs2_dinode *VAR_1,
         struct ocfs2_xattr_info *VAR_2,
         struct ocfs2_xattr_search *VAR_3,
         struct ocfs2_xattr_search *VAR_4,
         struct ocfs2_xattr_set_ctxt *VAR_5,
         int VAR_6,
         int *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct ocfs2_super *VAR_11 = FUNC_0(VAR_0->i_sb);

 FUNC_1(VAR_5, 0, sizeof(struct ocfs2_xattr_set_ctxt));

 FUNC_5(&VAR_5->dealloc);

 VAR_10 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
     &VAR_8, &VAR_9, VAR_7);
 if (VAR_10) {
  FUNC_2(VAR_10);
  return VAR_10;
 }

 VAR_9 += VAR_6;
 FUNC_8(VAR_2->xi_name, VAR_9,
     VAR_8, *VAR_7);

 if (VAR_9) {
  VAR_10 = FUNC_7(VAR_11, VAR_9,
       &VAR_5->meta_ac);
  if (VAR_10) {
   FUNC_2(VAR_10);
   goto out;
  }
 }

 if (VAR_8) {
  VAR_10 = FUNC_6(VAR_11, VAR_8, &VAR_5->data_ac);
  if (VAR_10)
   FUNC_2(VAR_10);
 }
out:
 if (VAR_10) {
  if (VAR_5->meta_ac) {
   FUNC_4(VAR_5->meta_ac);
   VAR_5->meta_ac = ((void*)0);
  }




 }

 return VAR_10;
}
