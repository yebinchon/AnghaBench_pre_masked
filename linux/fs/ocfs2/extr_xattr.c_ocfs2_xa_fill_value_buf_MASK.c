
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_xattr_value_root {int dummy; } ;
struct ocfs2_xattr_value_buf {struct ocfs2_xattr_value_root* vb_xv; } ;
struct ocfs2_xa_loc {TYPE_1__* xl_ops; TYPE_2__* xl_entry; } ;
struct TYPE_5__ {int xe_name_len; int xe_name_offset; } ;
struct TYPE_4__ {int (* xlo_fill_value_buf ) (struct ocfs2_xa_loc*,struct ocfs2_xattr_value_buf*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct ocfs2_xa_loc*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct ocfs2_xa_loc*,struct ocfs2_xattr_value_buf*) ;

__attribute__((used)) static void FUNC_7(struct ocfs2_xa_loc *VAR_1,
        struct ocfs2_xattr_value_buf *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1->xl_entry->xe_name_offset);
 int VAR_4 = FUNC_1(VAR_1->xl_entry->xe_name_len);


 FUNC_0(FUNC_5(VAR_1->xl_entry));
 FUNC_0(FUNC_3(VAR_1->xl_entry) !=
        (VAR_4 + VAR_0));

 VAR_1->xl_ops->xlo_fill_value_buf(VAR_1, VAR_2);
 VAR_2->vb_xv =
  (struct ocfs2_xattr_value_root *)FUNC_4(VAR_1,
       VAR_3 +
       VAR_4);
}
