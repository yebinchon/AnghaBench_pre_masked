
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int bcast_sta; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,int *) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;

void FUNC_2(struct iwl_mvm *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct iwl_mvm_vif *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, &VAR_2->bcast_sta);
}
