
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_xattr_set_ctxt {int set_abort; } ;
struct ocfs2_xattr_info {scalar_t__ xi_value_len; } ;
struct ocfs2_xa_loc {TYPE_1__* xl_entry; } ;
typedef scalar_t__ __le64 ;
struct TYPE_2__ {scalar_t__ xe_value_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*) ;
 scalar_t__ FUNC_3 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*) ;
 int FUNC_4 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*) ;
 int FUNC_5 (struct ocfs2_xa_loc*,char*,unsigned int) ;
 int FUNC_6 (struct ocfs2_xa_loc*) ;
 int FUNC_7 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*,struct ocfs2_xattr_set_ctxt*) ;
 unsigned int FUNC_8 (struct ocfs2_xa_loc*) ;
 int FUNC_9 (struct ocfs2_xa_loc*,scalar_t__,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_10 (struct ocfs2_xa_loc*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct ocfs2_xa_loc *VAR_2,
      struct ocfs2_xattr_info *VAR_3,
      u32 VAR_4,
      struct ocfs2_xattr_set_ctxt *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;
 __le64 VAR_8 = 0;

 VAR_6 = FUNC_4(VAR_2, VAR_3);
 if (VAR_6)
  goto out;

 if (!VAR_2->xl_entry) {
  VAR_6 = -VAR_0;
  goto out;
 }

 if (FUNC_3(VAR_2, VAR_3)) {
  VAR_8 = VAR_2->xl_entry->xe_value_size;
  VAR_6 = FUNC_7(VAR_2, VAR_3, VAR_5);
  if (VAR_6)
   goto out;
  goto alloc_value;
 }

 if (!FUNC_11(VAR_2->xl_entry)) {
  VAR_7 = FUNC_8(VAR_2);
  VAR_6 = FUNC_9(VAR_2, 0, VAR_5);
  if (VAR_6) {
   FUNC_1(VAR_6);
   FUNC_5(VAR_2,
       "overwriting",
       VAR_7);
   goto out;
  }
 }
 FUNC_10(VAR_2);





 FUNC_2(VAR_2, VAR_3);
 if (VAR_3->xi_value_len > VAR_1)
  FUNC_6(VAR_2);

alloc_value:
 if (VAR_3->xi_value_len > VAR_1) {
  VAR_7 = FUNC_8(VAR_2);
  VAR_6 = FUNC_9(VAR_2, VAR_3->xi_value_len, VAR_5);
  if (VAR_6 < 0) {
   VAR_5->set_abort = 1;
   FUNC_5(VAR_2, "growing",
       VAR_7);






   if (VAR_2->xl_entry) {
    FUNC_0(!VAR_8);
    VAR_2->xl_entry->xe_value_size = VAR_8;
   }
   FUNC_1(VAR_6);
  }
 }

out:
 return VAR_6;
}
