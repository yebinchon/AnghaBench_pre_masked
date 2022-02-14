
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct qed_hwfn {int dummy; } ;
struct qed_dcbx_params {void* app_error; void* app_valid; void* app_willing; struct qed_app_entry* app_entry; void* num_app_entries; } ;
struct qed_app_entry {int ethtype; int proto_type; void* proto_id; scalar_t__ prio; void* sf_ieee; } ;
struct dcbx_app_priority_feature {int flags; } ;
struct dcbx_app_priority_entry {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,void*,void*,void*) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* FUNC_1 (int ,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct qed_hwfn*,int ,void*,int *,int) ;

__attribute__((used)) static void
FUNC_4(struct qed_hwfn *VAR_14,
        struct dcbx_app_priority_feature *VAR_15,
        struct dcbx_app_priority_entry *VAR_16,
        struct qed_dcbx_params *VAR_17, bool VAR_18)
{
 struct qed_app_entry *VAR_19;
 u8 VAR_20;
 int VAR_21;

 VAR_17->app_willing = FUNC_1(VAR_15->flags,
        VAR_7);
 VAR_17->app_valid = FUNC_1(VAR_15->flags, VAR_0);
 VAR_17->app_error = FUNC_1(VAR_15->flags, VAR_1);
 VAR_17->num_app_entries = FUNC_1(VAR_15->flags,
            VAR_2);
 for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
  VAR_19 = &VAR_17->app_entry[VAR_21];
  if (VAR_18) {
   u8 VAR_22;
   u32 VAR_23;

   VAR_22 = FUNC_1(VAR_16[VAR_21].entry,
          VAR_6);
   switch (VAR_22) {
   case 131:

    VAR_23 = FUNC_1(VAR_16[VAR_21].entry,
       VAR_5);
    VAR_19->sf_ieee = VAR_23 ?
        VAR_11 :
        VAR_9;
    break;
   case 132:
    VAR_19->sf_ieee = VAR_9;
    break;
   case 130:
    VAR_19->sf_ieee = VAR_10;
    break;
   case 128:
    VAR_19->sf_ieee = VAR_12;
    break;
   case 129:
    VAR_19->sf_ieee = VAR_11;
    break;
   }
  } else {
   VAR_19->ethtype = !(FUNC_1(VAR_16[VAR_21].entry,
            VAR_5));
  }

  VAR_20 = FUNC_1(VAR_16[VAR_21].entry, VAR_3);
  VAR_19->prio = FUNC_2(VAR_20) - 1;
  VAR_19->proto_id = FUNC_1(VAR_16[VAR_21].entry,
          VAR_4);
  FUNC_3(VAR_14, VAR_16[VAR_21].entry,
            VAR_19->proto_id,
            &VAR_19->proto_type, VAR_18);
 }

 FUNC_0(VAR_14, VAR_13,
     "APP params: willing %d, valid %d error = %d\n",
     VAR_17->app_willing, VAR_17->app_valid,
     VAR_17->app_error);
}
