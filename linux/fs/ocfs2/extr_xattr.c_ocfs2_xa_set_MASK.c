
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_xattr_set_ctxt {int handle; } ;
struct ocfs2_xattr_info {int xi_value; int xi_name_len; int xi_name; } ;
struct ocfs2_xa_loc {int xl_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct ocfs2_xa_loc*,int ) ;
 int FUNC_2 (int ,struct ocfs2_xa_loc*) ;
 int FUNC_3 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*,int ,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_4 (struct ocfs2_xa_loc*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_5 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ocfs2_xa_loc *VAR_2,
   struct ocfs2_xattr_info *VAR_3,
   struct ocfs2_xattr_set_ctxt *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = FUNC_6(VAR_2->xl_inode, VAR_3->xi_name,
           VAR_3->xi_name_len);

 VAR_5 = FUNC_1(VAR_4->handle, VAR_2,
          VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_5);
  goto out;
 }
 if (!VAR_3->xi_value) {
  VAR_5 = FUNC_4(VAR_2, VAR_4);
  goto out_dirty;
 }

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_6, VAR_4);
 if (VAR_5) {
  if (VAR_5 != -VAR_0)
   FUNC_0(VAR_5);
  goto out_dirty;
 }

 VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  FUNC_0(VAR_5);

out_dirty:
 FUNC_2(VAR_4->handle, VAR_2);

out:
 return VAR_5;
}
