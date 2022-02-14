
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_vif {int ap_sta_id; int phy_ctxt; } ;
struct iwl_mvm_active_iface_iterator_data {int sta_vif_state; int sta_vif_ap_sta_id; int num_active_macs; struct ieee80211_vif* ignore_vif; } ;
struct TYPE_2__ {scalar_t__ assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(void *VAR_4, u8 *VAR_5,
      struct ieee80211_vif *VAR_6)
{
 struct iwl_mvm_active_iface_iterator_data *VAR_7 = VAR_4;
 struct iwl_mvm_vif *VAR_8 = FUNC_0(VAR_6);

 if (VAR_6 == VAR_7->ignore_vif || !VAR_8->phy_ctxt ||
     VAR_6->type == VAR_0)
  return;

 VAR_7->num_active_macs++;

 if (VAR_6->type == VAR_1) {
  VAR_7->sta_vif_ap_sta_id = VAR_8->ap_sta_id;
  if (VAR_6->bss_conf.assoc)
   VAR_7->sta_vif_state = VAR_2;
  else
   VAR_7->sta_vif_state = VAR_3;
 }
}
