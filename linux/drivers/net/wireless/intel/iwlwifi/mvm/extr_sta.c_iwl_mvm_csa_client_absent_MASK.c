
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int ap_sta_id; } ;
struct iwl_mvm_sta {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (int) ;
 struct iwl_mvm_sta* FUNC_1 (struct iwl_mvm*,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_mvm_sta*,int) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct iwl_mvm *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct iwl_mvm_vif *VAR_2 = FUNC_3(VAR_1);
 struct iwl_mvm_sta *VAR_3;

 FUNC_4();

 VAR_3 = FUNC_1(VAR_0, VAR_2->ap_sta_id);

 if (!FUNC_0(!VAR_3))
  FUNC_2(VAR_0, VAR_3, 1);

 FUNC_5();
}
