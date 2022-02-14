
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_xattr_set_ctxt {int dummy; } ;
struct ocfs2_xattr_info {scalar_t__ xi_value_len; int xi_name_len; } ;
struct ocfs2_xa_loc {TYPE_1__* xl_entry; } ;
struct TYPE_4__ {int xe_value_size; int xe_name_offset; int xe_name_len; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct ocfs2_xa_loc*,char*,unsigned int) ;
 int FUNC_9 (struct ocfs2_xa_loc*) ;
 char* FUNC_10 (struct ocfs2_xa_loc*,int ) ;
 unsigned int FUNC_11 (struct ocfs2_xa_loc*) ;
 int FUNC_12 (struct ocfs2_xa_loc*,scalar_t__,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_15(struct ocfs2_xa_loc *VAR_1,
    struct ocfs2_xattr_info *VAR_2,
    struct ocfs2_xattr_set_ctxt *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = FUNC_1(VAR_2->xi_name_len);
 unsigned int VAR_6;
 char *VAR_7;
 int VAR_8 = FUNC_13(VAR_1->xl_entry);
 int VAR_9 = VAR_2->xi_value_len <= VAR_0;

 FUNC_0(FUNC_1(VAR_1->xl_entry->xe_name_len) !=
        VAR_5);

 VAR_7 = FUNC_10(VAR_1,
    FUNC_3(VAR_1->xl_entry->xe_name_offset));
 if (VAR_8) {
  FUNC_5(VAR_7 + VAR_5, 0,
         FUNC_7(VAR_1->xl_entry) - VAR_5);
  if (!VAR_9)
   FUNC_9(VAR_1);
 } else {
  VAR_6 = FUNC_11(VAR_1);
  if (VAR_9) {
   VAR_4 = FUNC_12(VAR_1, 0, VAR_3);
   if (VAR_4 < 0)
    FUNC_6(VAR_4);
   else
    FUNC_5(VAR_7 + VAR_5, 0,
           FUNC_7(VAR_1->xl_entry) -
           VAR_5);
  } else if (FUNC_4(VAR_1->xl_entry->xe_value_size) >
      VAR_2->xi_value_len) {
   VAR_4 = FUNC_12(VAR_1, VAR_2->xi_value_len,
           VAR_3);
   if (VAR_4 < 0)
    FUNC_6(VAR_4);
  }

  if (VAR_4) {
   FUNC_8(VAR_1, "reusing",
       VAR_6);
   goto out;
  }
 }

 VAR_1->xl_entry->xe_value_size = FUNC_2(VAR_2->xi_value_len);
 FUNC_14(VAR_1->xl_entry, VAR_9);

out:
 return VAR_4;
}
