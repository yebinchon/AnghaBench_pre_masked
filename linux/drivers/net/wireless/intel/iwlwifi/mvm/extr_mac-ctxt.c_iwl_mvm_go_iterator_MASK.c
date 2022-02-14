
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {scalar_t__ ap_ibss_active; } ;
struct iwl_mvm_go_iterator_data {int go_active; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; } ;


 scalar_t__ VAR_0 ;
 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, u8 *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm_go_iterator_data *VAR_4 = VAR_1;
 struct iwl_mvm_vif *VAR_5 = FUNC_0(VAR_3);

 if (VAR_3->type == VAR_0 && VAR_3->p2p &&
     VAR_5->ap_ibss_active)
  VAR_4->go_active = 1;
}
