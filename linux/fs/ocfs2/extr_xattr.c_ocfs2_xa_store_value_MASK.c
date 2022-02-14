
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_value_buf {int dummy; } ;
struct ocfs2_xattr_set_ctxt {int handle; } ;
struct ocfs2_xattr_info {int xi_value_len; int xi_value; int xi_name_len; } ;
struct ocfs2_xa_loc {int xl_inode; TYPE_1__* xl_entry; } ;
struct TYPE_2__ {int xe_name_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct ocfs2_xattr_value_buf*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct ocfs2_xa_loc*,struct ocfs2_xattr_value_buf*) ;
 char* FUNC_5 (struct ocfs2_xa_loc*,int) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_xa_loc *VAR_1,
    struct ocfs2_xattr_info *VAR_2,
    struct ocfs2_xattr_set_ctxt *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = FUNC_2(VAR_1->xl_entry->xe_name_offset);
 int VAR_6 = FUNC_0(VAR_2->xi_name_len);
 char *VAR_7;
 struct ocfs2_xattr_value_buf VAR_8;

 VAR_7 = FUNC_5(VAR_1, VAR_5);
 if (VAR_2->xi_value_len > VAR_0) {
  FUNC_4(VAR_1, &VAR_8);
  VAR_4 = FUNC_1(VAR_1->xl_inode,
           VAR_3->handle, &VAR_8,
           VAR_2->xi_value,
           VAR_2->xi_value_len);
 } else
  FUNC_3(VAR_7 + VAR_6, VAR_2->xi_value, VAR_2->xi_value_len);

 return VAR_4;
}
