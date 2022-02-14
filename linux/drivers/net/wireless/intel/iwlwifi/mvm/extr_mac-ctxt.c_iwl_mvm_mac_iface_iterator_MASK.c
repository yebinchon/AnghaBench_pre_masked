
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {int id; } ;
struct iwl_mvm_mac_iface_iterator_data {int found_vif; int available_mac_ids; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int *,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, u8 *VAR_1,
           struct ieee80211_vif *VAR_2)
{
 struct iwl_mvm_mac_iface_iterator_data *VAR_3 = VAR_0;
 struct iwl_mvm_vif *VAR_4 = FUNC_2(VAR_2);


 if (VAR_2 == VAR_3->vif) {
  VAR_3->found_vif = 1;
  return;
 }







 FUNC_0(VAR_4->id, VAR_3->available_mac_ids);


 FUNC_1(VAR_0, VAR_1, VAR_2);
}
