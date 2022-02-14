
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_xattr_value_buf {int dummy; } ;
struct ocfs2_xattr_set_ctxt {int handle; } ;
struct ocfs2_xa_loc {int xl_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_xa_loc*,struct ocfs2_xattr_value_buf*) ;
 int FUNC_1 (int ,struct ocfs2_xa_loc*,int ) ;
 int FUNC_2 (int ,struct ocfs2_xattr_value_buf*,int ,struct ocfs2_xattr_set_ctxt*) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_xa_loc *VAR_1, u64 VAR_2,
       struct ocfs2_xattr_set_ctxt *VAR_3)
{
 int VAR_4, VAR_5;
 struct ocfs2_xattr_value_buf VAR_6;

 FUNC_0(VAR_1, &VAR_6);
 VAR_4 = FUNC_2(VAR_1->xl_inode, &VAR_6, VAR_2,
           VAR_3);
 VAR_5 = FUNC_1(VAR_3->handle, VAR_1,
         VAR_0);


 return VAR_4 ? VAR_4 : VAR_5;
}
