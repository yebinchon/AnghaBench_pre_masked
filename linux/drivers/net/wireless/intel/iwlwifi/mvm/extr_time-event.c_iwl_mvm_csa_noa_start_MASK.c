
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int csa_vif; } ;
struct ieee80211_vif {int csa_active; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (struct ieee80211_vif*) ;
 struct ieee80211_vif* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct iwl_mvm *VAR_0)
{
 struct ieee80211_vif *VAR_1;

 FUNC_6();

 VAR_1 = FUNC_5(VAR_0->csa_vif);
 if (!VAR_1 || !VAR_1->csa_active)
  goto out_unlock;

 FUNC_0(VAR_0, "CSA NOA started\n");







 if (!FUNC_4(VAR_1)) {
  FUNC_1(VAR_0, "CSA NOA started too early\n");
  goto out_unlock;
 }

 FUNC_3(VAR_1);

 FUNC_7();

 FUNC_2(VAR_0->csa_vif, ((void*)0));

 return;

out_unlock:
 FUNC_7();
}
