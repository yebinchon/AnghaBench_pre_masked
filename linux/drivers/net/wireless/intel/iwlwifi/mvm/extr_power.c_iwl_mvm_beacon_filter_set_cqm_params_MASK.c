
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ba_enabled; } ;
struct iwl_mvm_vif {TYPE_2__ bf_data; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_beacon_filter_cmd {void* ba_enable_beacon_abort; void* bf_roaming_state; void* bf_energy_delta; } ;
struct TYPE_3__ {int cqm_rssi_thold; int cqm_rssi_hyst; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;


 void* FUNC_0 (int) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;

__attribute__((used)) static
void FUNC_2(struct iwl_mvm *VAR_0,
       struct ieee80211_vif *VAR_1,
       struct iwl_beacon_filter_cmd *VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_1(VAR_1);

 if (VAR_1->bss_conf.cqm_rssi_thold) {
  VAR_2->bf_energy_delta =
   FUNC_0(VAR_1->bss_conf.cqm_rssi_hyst);

  VAR_2->bf_roaming_state =
   FUNC_0(-VAR_1->bss_conf.cqm_rssi_thold);
 }
 VAR_2->ba_enable_beacon_abort = FUNC_0(VAR_3->bf_data.ba_enabled);
}
