
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int phy_ctxt; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int ,int) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,int) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;

int FUNC_5(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 if (FUNC_1(!VAR_3->phy_ctxt))
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3->phy_ctxt, 0);

 if (!VAR_4)
  if (FUNC_3(VAR_1, VAR_2, 1))
   FUNC_0(VAR_1, "Failed to update SF state\n");

 return VAR_4;
}
