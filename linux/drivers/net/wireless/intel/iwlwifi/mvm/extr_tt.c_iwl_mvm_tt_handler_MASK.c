
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_tt_params {scalar_t__ ct_kill_entry; scalar_t__ ct_kill_exit; scalar_t__ dynamic_smps_entry; scalar_t__ dynamic_smps_exit; scalar_t__ tx_protection_entry; scalar_t__ tx_protection_exit; TYPE_1__* tx_backoff; scalar_t__ support_tx_backoff; scalar_t__ support_tx_protection; scalar_t__ support_dynamic_smps; scalar_t__ support_ct_kill; } ;
struct iwl_mvm_tt_mgmt {int dynamic_smps; scalar_t__ min_backoff; scalar_t__ tx_backoff; int throttle; struct iwl_tt_params params; } ;
struct iwl_mvm {scalar_t__ temperature; int hw; struct iwl_mvm_tt_mgmt thermal_throttle; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {scalar_t__ temperature; int backoff; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int VAR_2 ;
 int FUNC_5 (struct iwl_mvm*,scalar_t__) ;
 int FUNC_6 (struct iwl_mvm*,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;

void FUNC_8(struct iwl_mvm *VAR_3)
{
 struct iwl_tt_params *VAR_4 = &VAR_3->thermal_throttle.params;
 struct iwl_mvm_tt_mgmt *VAR_5 = &VAR_3->thermal_throttle;
 s32 VAR_6 = VAR_3->temperature;
 bool VAR_7 = 0;
 int VAR_8;
 u32 VAR_9;

 FUNC_0(VAR_3, "NIC temperature: %d\n", VAR_3->temperature);

 if (VAR_4->support_ct_kill && VAR_6 >= VAR_4->ct_kill_entry) {
  FUNC_3(VAR_3);
  return;
 }

 if (VAR_4->support_ct_kill &&
     VAR_6 <= VAR_4->ct_kill_exit) {
  FUNC_4(VAR_3);
  return;
 }

 if (VAR_4->support_dynamic_smps) {
  if (!VAR_5->dynamic_smps &&
      VAR_6 >= VAR_4->dynamic_smps_entry) {
   FUNC_0(VAR_3, "Enable dynamic SMPS\n");
   VAR_5->dynamic_smps = 1;
   FUNC_2(
     VAR_3->hw, VAR_0,
     VAR_2, VAR_3);
   VAR_7 = 1;
  } else if (VAR_5->dynamic_smps &&
      VAR_6 <= VAR_4->dynamic_smps_exit) {
   FUNC_0(VAR_3, "Disable dynamic SMPS\n");
   VAR_5->dynamic_smps = 0;
   FUNC_2(
     VAR_3->hw, VAR_0,
     VAR_2, VAR_3);
  }
 }

 if (VAR_4->support_tx_protection) {
  if (VAR_6 >= VAR_4->tx_protection_entry) {
   FUNC_6(VAR_3, 1);
   VAR_7 = 1;
  } else if (VAR_6 <= VAR_4->tx_protection_exit) {
   FUNC_6(VAR_3, 0);
  }
 }

 if (VAR_4->support_tx_backoff) {
  VAR_9 = VAR_5->min_backoff;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   if (VAR_6 < VAR_4->tx_backoff[VAR_8].temperature)
    break;
   VAR_9 = FUNC_7(VAR_5->min_backoff,
      VAR_4->tx_backoff[VAR_8].backoff);
  }
  if (VAR_9 != VAR_5->min_backoff)
   VAR_7 = 1;
  if (VAR_5->tx_backoff != VAR_9)
   FUNC_5(VAR_3, VAR_9);
 }

 if (!VAR_5->throttle && VAR_7) {
  FUNC_1(VAR_3,
    "Due to high temperature thermal throttling initiated\n");
  VAR_5->throttle = 1;
 } else if (VAR_5->throttle && !VAR_5->dynamic_smps &&
     VAR_5->tx_backoff == VAR_5->min_backoff &&
     VAR_6 <= VAR_4->tx_protection_exit) {
  FUNC_1(VAR_3,
    "Temperature is back to normal thermal throttling stopped\n");
  VAR_5->throttle = 0;
 }
}
