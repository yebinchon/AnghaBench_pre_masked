
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int hw; } ;
struct iwl_bss_iter_data {struct ieee80211_vif* vif; scalar_t__ error; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 struct ieee80211_vif* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int FUNC_2 (int ,int ,int ,struct iwl_bss_iter_data*) ;
 int VAR_2 ;

struct ieee80211_vif *FUNC_3(struct iwl_mvm *VAR_3)
{
 struct iwl_bss_iter_data VAR_4 = {};

 FUNC_2(
  VAR_3->hw, VAR_1,
  VAR_2, &VAR_4);

 if (VAR_4.error) {
  FUNC_1(VAR_3, "More than one managed interface active!\n");
  return FUNC_0(-VAR_0);
 }

 return VAR_4.vif;
}
