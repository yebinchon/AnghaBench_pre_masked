
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {scalar_t__ tsf_id; } ;
struct iwl_mvm_mac_iface_iterator_data {scalar_t__ preferred_tsf; int available_tsf_ids; struct ieee80211_vif* vif; struct iwl_mvm* mvm; } ;
struct iwl_mvm {int hw; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,struct iwl_mvm_mac_iface_iterator_data*) ;
 int VAR_2 ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (scalar_t__,int ) ;

void FUNC_4(struct iwl_mvm *VAR_3,
        struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_2(VAR_4);
 struct iwl_mvm_mac_iface_iterator_data VAR_6 = {
  .mvm = VAR_3,
  .vif = VAR_4,
  .available_tsf_ids = (1 << VAR_1) - 1 ,

  .preferred_tsf = VAR_1,
 };

 FUNC_1(
  VAR_3->hw, VAR_0,
  VAR_2, &VAR_6);

 if (VAR_6.preferred_tsf != VAR_1)
  VAR_5->tsf_id = VAR_6.preferred_tsf;
 else if (!FUNC_3(VAR_5->tsf_id, VAR_6.available_tsf_ids))
  VAR_5->tsf_id = FUNC_0(VAR_6.available_tsf_ids,
      VAR_1);
}
