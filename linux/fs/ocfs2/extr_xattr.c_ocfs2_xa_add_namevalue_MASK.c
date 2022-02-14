
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_xattr_info {scalar_t__ xi_value_len; int xi_name_len; int xi_name; int xi_name_index; } ;
struct ocfs2_xa_loc {TYPE_2__* xl_entry; TYPE_1__* xl_ops; } ;
struct TYPE_5__ {int xe_name_offset; int xe_name_len; int xe_value_size; } ;
struct TYPE_4__ {int (* xlo_add_namevalue ) (struct ocfs2_xa_loc*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct ocfs2_xattr_info*) ;
 char* FUNC_5 (struct ocfs2_xa_loc*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (struct ocfs2_xa_loc*,int) ;

__attribute__((used)) static void FUNC_9(struct ocfs2_xa_loc *VAR_1,
       struct ocfs2_xattr_info *VAR_2)
{
 int VAR_3 = FUNC_4(VAR_2);
 int VAR_4;
 char *VAR_5;

 VAR_1->xl_ops->xlo_add_namevalue(VAR_1, VAR_3);
 VAR_1->xl_entry->xe_value_size = FUNC_0(VAR_2->xi_value_len);
 VAR_1->xl_entry->xe_name_len = VAR_2->xi_name_len;
 FUNC_7(VAR_1->xl_entry, VAR_2->xi_name_index);
 FUNC_6(VAR_1->xl_entry,
         VAR_2->xi_value_len <= VAR_0);

 VAR_4 = FUNC_1(VAR_1->xl_entry->xe_name_offset);
 VAR_5 = FUNC_5(VAR_1, VAR_4);
 FUNC_3(VAR_5, 0, VAR_3);
 FUNC_2(VAR_5, VAR_2->xi_name, VAR_2->xi_name_len);
}
