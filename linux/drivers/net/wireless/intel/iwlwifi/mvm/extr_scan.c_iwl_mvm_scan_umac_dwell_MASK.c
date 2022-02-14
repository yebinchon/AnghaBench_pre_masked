
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_12__ {void* suspend_time; void* max_out_time; void* scan_priority; void* fragmented_dwell; void* passive_dwell; void* active_dwell; void* extended_dwell; } ;
struct TYPE_11__ {void** suspend_time; void** max_out_time; void* scan_priority; } ;
struct TYPE_10__ {void** passive_dwell; void** active_dwell; } ;
struct TYPE_9__ {void* fragmented_dwell; void* passive_dwell; void* active_dwell; void** suspend_time; void** max_out_time; void* scan_priority; void* adwell_max_budget; int adwell_default_n_aps; int adwell_default_n_aps_social; } ;
struct TYPE_7__ {int adwell_default_hb_n_aps; } ;
struct iwl_scan_req_umac {void* ooc_priority; TYPE_6__ v1; TYPE_5__ v6; TYPE_4__ v8; TYPE_3__ v7; TYPE_1__ v9; } ;
struct iwl_mvm_scan_timing_params {int suspend_time; int max_out_time; } ;
struct iwl_mvm_scan_params {size_t type; size_t hb_type; void* measurement_dwell; TYPE_2__* ssids; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_8__ {scalar_t__ ssid_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct iwl_mvm*) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*) ;
 scalar_t__ FUNC_5 (struct iwl_mvm*) ;
 scalar_t__ FUNC_6 (struct iwl_mvm*) ;
 scalar_t__ FUNC_7 (struct iwl_mvm_scan_params*) ;
 struct iwl_mvm_scan_timing_params* VAR_14 ;

__attribute__((used)) static void FUNC_8(struct iwl_mvm *VAR_15,
        struct iwl_scan_req_umac *VAR_16,
        struct iwl_mvm_scan_params *VAR_17)
{
 struct iwl_mvm_scan_timing_params *VAR_18, *VAR_19;
 u8 VAR_20, VAR_21;

 VAR_18 = &VAR_14[VAR_17->type];
 VAR_20 = VAR_17->measurement_dwell ?
  VAR_17->measurement_dwell : VAR_6;
 VAR_21 = VAR_17->measurement_dwell ?
  VAR_17->measurement_dwell : VAR_9;

 if (FUNC_3(VAR_15)) {
  VAR_16->v7.adwell_default_n_aps_social =
   VAR_3;
  VAR_16->v7.adwell_default_n_aps =
   VAR_2;

  if (FUNC_5(VAR_15))
   VAR_16->v9.adwell_default_hb_n_aps =
    VAR_1;


  if (VAR_0)
   VAR_16->v7.adwell_max_budget =
    FUNC_0(VAR_0);
  else if (VAR_17->ssids && VAR_17->ssids[0].ssid_len)
   VAR_16->v7.adwell_max_budget =
    FUNC_0(VAR_4);
  else
   VAR_16->v7.adwell_max_budget =
    FUNC_0(VAR_5);

  VAR_16->v7.scan_priority = FUNC_1(VAR_11);
  VAR_16->v7.max_out_time[VAR_13] =
   FUNC_1(VAR_18->max_out_time);
  VAR_16->v7.suspend_time[VAR_13] =
   FUNC_1(VAR_18->suspend_time);

  if (FUNC_6(VAR_15)) {
   VAR_19 = &VAR_14[VAR_17->hb_type];

   VAR_16->v7.max_out_time[VAR_12] =
    FUNC_1(VAR_19->max_out_time);
   VAR_16->v7.suspend_time[VAR_12] =
    FUNC_1(VAR_19->suspend_time);
  }

  if (!FUNC_4(VAR_15)) {
   VAR_16->v7.active_dwell = VAR_20;
   VAR_16->v7.passive_dwell = VAR_21;
   VAR_16->v7.fragmented_dwell = VAR_8;
  } else {
   VAR_16->v8.active_dwell[VAR_13] = VAR_20;
   VAR_16->v8.passive_dwell[VAR_13] = VAR_21;
   if (FUNC_6(VAR_15)) {
    VAR_16->v8.active_dwell[VAR_12] =
     VAR_20;
    VAR_16->v8.passive_dwell[VAR_12] =
     VAR_21;
   }
  }
 } else {
  VAR_16->v1.extended_dwell = VAR_17->measurement_dwell ?
   VAR_17->measurement_dwell : VAR_7;
  VAR_16->v1.active_dwell = VAR_20;
  VAR_16->v1.passive_dwell = VAR_21;
  VAR_16->v1.fragmented_dwell = VAR_8;

  if (FUNC_6(VAR_15)) {
   VAR_19 = &VAR_14[VAR_17->hb_type];

   VAR_16->v6.max_out_time[VAR_12] =
     FUNC_1(VAR_19->max_out_time);
   VAR_16->v6.suspend_time[VAR_12] =
     FUNC_1(VAR_19->suspend_time);
  }

  if (FUNC_2(VAR_15)) {
   VAR_16->v6.scan_priority =
    FUNC_1(VAR_11);
   VAR_16->v6.max_out_time[VAR_13] =
    FUNC_1(VAR_18->max_out_time);
   VAR_16->v6.suspend_time[VAR_13] =
    FUNC_1(VAR_18->suspend_time);
  } else {
   VAR_16->v1.scan_priority =
    FUNC_1(VAR_11);
   VAR_16->v1.max_out_time =
    FUNC_1(VAR_18->max_out_time);
   VAR_16->v1.suspend_time =
    FUNC_1(VAR_18->suspend_time);
  }
 }

 if (FUNC_7(VAR_17))
  VAR_16->ooc_priority = FUNC_1(VAR_11);
 else
  VAR_16->ooc_priority = FUNC_1(VAR_10);
}
