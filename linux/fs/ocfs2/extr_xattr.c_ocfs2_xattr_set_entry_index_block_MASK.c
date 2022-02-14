
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_set_ctxt {int dummy; } ;
struct ocfs2_xattr_search {int not_found; int xattr_bh; int bucket; } ;
struct ocfs2_xattr_info {int xi_name; int xi_name_index; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int ,int ,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_2 (struct inode*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int ,int ,int ,struct ocfs2_xattr_search*) ;
 int FUNC_5 (struct inode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2,
          struct ocfs2_xattr_info *VAR_3,
          struct ocfs2_xattr_search *VAR_4,
          struct ocfs2_xattr_set_ctxt *VAR_5)
{
 int VAR_6;

 FUNC_6(VAR_3->xi_name);

 VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_6)
  goto out;
 if (VAR_6 != -VAR_1) {
  FUNC_0(VAR_6);
  goto out;
 }
 VAR_6 = FUNC_2(VAR_2,
       VAR_4->bucket,
       VAR_3->xi_name);
 if (VAR_6) {
  FUNC_0(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_1(VAR_2,
      VAR_4->xattr_bh,
      VAR_4->bucket,
      VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_6);
  goto out;
 }
 FUNC_3(VAR_4->bucket);
 VAR_6 = FUNC_4(VAR_2, VAR_4->xattr_bh,
        VAR_3->xi_name_index,
        VAR_3->xi_name, VAR_4);
 if (VAR_6 && VAR_6 != -VAR_0)
  goto out;
 VAR_4->not_found = VAR_6;


 VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 && (VAR_6 != -VAR_1))
  FUNC_0(VAR_6);

out:
 return VAR_6;
}
