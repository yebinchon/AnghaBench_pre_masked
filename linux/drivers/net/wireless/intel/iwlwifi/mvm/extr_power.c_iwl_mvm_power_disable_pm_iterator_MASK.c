
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {int pm_enabled; } ;
struct ieee80211_vif {int dummy; } ;


 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u8* VAR_1,
           struct ieee80211_vif *VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_0(VAR_2);

 VAR_3->pm_enabled = 0;
}
