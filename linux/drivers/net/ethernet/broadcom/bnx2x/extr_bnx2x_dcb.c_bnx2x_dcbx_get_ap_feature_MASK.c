
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct dcbx_app_priority_feature {struct dcbx_app_priority_entry* app_pri_tbl; scalar_t__ enabled; } ;
struct dcbx_app_priority_entry {scalar_t__ appBitfield; scalar_t__ app_id; int pri_bitmap; } ;
struct TYPE_3__ {int enabled; scalar_t__* traffic_type_priority; } ;
struct TYPE_4__ {TYPE_1__ app; } ;
struct bnx2x {TYPE_2__ dcbx_port_params; } ;
typedef enum traffic_type { ____Placeholder_traffic_type } traffic_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (struct bnx2x*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_16,
       struct dcbx_app_priority_feature *VAR_17,
       u32 VAR_18) {
 u8 VAR_19;
 u32 *VAR_20 = VAR_16->dcbx_port_params.app.traffic_type_priority;
 u8 VAR_21 = 0, VAR_22 = 0;

 if (FUNC_1(VAR_18, VAR_4))
  FUNC_0(VAR_0, "DCBX_LOCAL_APP_ERROR\n");

 if (FUNC_1(VAR_18, VAR_5))
  FUNC_0(VAR_0, "DCBX_LOCAL_APP_MISMATCH\n");

 if (FUNC_1(VAR_18, VAR_7))
  FUNC_0(VAR_0, "DCBX_REMOTE_APP_TLV_NOT_FOUND\n");
 if (VAR_17->enabled &&
     !FUNC_1(VAR_18, VAR_4 | VAR_5 |
         VAR_7)) {

  VAR_16->dcbx_port_params.app.enabled = 1;


  for (VAR_19 = 0 ; VAR_19 < VAR_10; VAR_19++)
   VAR_20[VAR_19] = 0;

  for (VAR_19 = 0 ; VAR_19 < VAR_6; VAR_19++) {
   struct dcbx_app_priority_entry *VAR_23 =
       VAR_17->app_pri_tbl;
   enum traffic_type VAR_24 = VAR_14;

   if (FUNC_1(VAR_23[VAR_19].appBitfield,
          VAR_1) &&
       FUNC_1(VAR_23[VAR_19].appBitfield,
          VAR_2)) {
    VAR_24 = VAR_13;
   } else if (FUNC_1(VAR_23[VAR_19].appBitfield,
          VAR_3) &&
       VAR_15 == VAR_23[VAR_19].app_id) {
    VAR_24 = VAR_12;
    VAR_21 = 1;
   } else if (FUNC_1(VAR_23[VAR_19].appBitfield,
          VAR_2) &&
       VAR_8 == VAR_23[VAR_19].app_id) {
    VAR_24 = VAR_11;
    VAR_22 = 1;
   }

   if (VAR_24 == VAR_14)
    continue;

   FUNC_2(VAR_16,
         VAR_23[VAR_19].pri_bitmap,
         VAR_24);
  }





  if (VAR_20[VAR_13] != 0) {
   if (!VAR_21) {
    VAR_20[VAR_12] =
     VAR_20[VAR_13];
    FUNC_0(VAR_0,
       "ISCSI is using default priority.\n");
   }
   if (!VAR_22) {
    VAR_20[VAR_11] =
     VAR_20[VAR_13];
    FUNC_0(VAR_0,
       "FCoE is using default priority.\n");
   }
  }
 } else {
  FUNC_0(VAR_0, "DCBX_LOCAL_APP_DISABLED\n");
  VAR_16->dcbx_port_params.app.enabled = 0;
  for (VAR_19 = 0 ; VAR_19 < VAR_10; VAR_19++)
   VAR_20[VAR_19] = VAR_9;
 }
}
