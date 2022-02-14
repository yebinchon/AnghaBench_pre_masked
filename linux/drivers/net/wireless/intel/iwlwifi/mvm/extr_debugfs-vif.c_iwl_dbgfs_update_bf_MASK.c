
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_dbgfs_bf {int mask; int bf_energy_delta; int bf_roaming_energy_delta; int bf_roaming_state; int bf_temp_threshold; int bf_temp_fast_filter; int bf_temp_slow_filter; int bf_enable_beacon_filter; int bf_debug_flag; int bf_escape_timer; int ba_enable_beacon_abort; int ba_escape_timer; } ;
struct iwl_mvm_vif {struct iwl_dbgfs_bf dbgfs_bf; } ;
struct ieee80211_vif {int dummy; } ;
typedef enum iwl_dbgfs_bf_mask { ____Placeholder_iwl_dbgfs_bf_mask } iwl_dbgfs_bf_mask ;
 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_vif *VAR_0,
    enum iwl_dbgfs_bf_mask VAR_1, int VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_0(VAR_0);
 struct iwl_dbgfs_bf *VAR_4 = &VAR_3->dbgfs_bf;

 VAR_4->mask |= VAR_1;

 switch (VAR_1) {
 case 134:
  VAR_4->bf_energy_delta = VAR_2;
  break;
 case 132:
  VAR_4->bf_roaming_energy_delta = VAR_2;
  break;
 case 131:
  VAR_4->bf_roaming_state = VAR_2;
  break;
 case 128:
  VAR_4->bf_temp_threshold = VAR_2;
  break;
 case 130:
  VAR_4->bf_temp_fast_filter = VAR_2;
  break;
 case 129:
  VAR_4->bf_temp_slow_filter = VAR_2;
  break;
 case 135:
  VAR_4->bf_enable_beacon_filter = VAR_2;
  break;
 case 136:
  VAR_4->bf_debug_flag = VAR_2;
  break;
 case 133:
  VAR_4->bf_escape_timer = VAR_2;
  break;
 case 138:
  VAR_4->ba_enable_beacon_abort = VAR_2;
  break;
 case 137:
  VAR_4->ba_escape_timer = VAR_2;
  break;
 }
}
