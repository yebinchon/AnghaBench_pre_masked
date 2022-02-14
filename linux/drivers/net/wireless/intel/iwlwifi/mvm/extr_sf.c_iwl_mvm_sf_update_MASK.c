
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_vif {int ap_sta_id; } ;
struct iwl_mvm_active_iface_iterator_data {int sta_vif_state; int num_active_macs; int sta_vif_ap_sta_id; struct ieee80211_vif* ignore_vif; } ;
struct iwl_mvm {int hw; int status; } ;
struct TYPE_2__ {int dtim_period; int assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;
typedef enum iwl_sf_state { ____Placeholder_iwl_sf_state } iwl_sf_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,struct iwl_mvm_active_iface_iterator_data*) ;
 int VAR_9 ;
 int FUNC_2 (struct iwl_mvm*,int ,int) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct iwl_mvm *VAR_10, struct ieee80211_vif *VAR_11,
        bool VAR_12)
{
 enum iwl_sf_state VAR_13;
 u8 VAR_14 = VAR_2;
 struct iwl_mvm_vif *VAR_15 = ((void*)0);
 struct iwl_mvm_active_iface_iterator_data VAR_16 = {
  .ignore_vif = VAR_11,
  .sta_vif_state = VAR_8,
  .sta_vif_ap_sta_id = VAR_2,
 };





 if (FUNC_4(VAR_3, &VAR_10->status) ||
     (VAR_11 && VAR_11->type == VAR_4))
  return 0;

 FUNC_1(VAR_10->hw,
         VAR_1,
         VAR_9,
         &VAR_16);


 if (VAR_11 && !VAR_12)
  VAR_16.num_active_macs++;

 switch (VAR_16.num_active_macs) {
 case 0:

  VAR_13 = VAR_7;
  break;
 case 1:
  if (VAR_12) {



   VAR_13 = VAR_16.sta_vif_state;
   VAR_14 = VAR_16.sta_vif_ap_sta_id;
  } else {
   if (FUNC_0(!VAR_11))
    return -VAR_0;
   if (VAR_11->type != VAR_5) {
    VAR_13 = VAR_8;
   } else if (VAR_11->bss_conf.assoc &&
       VAR_11->bss_conf.dtim_period) {
    VAR_15 = FUNC_3(VAR_11);
    VAR_14 = VAR_15->ap_sta_id;
    VAR_13 = VAR_6;
   } else {
    VAR_13 = VAR_7;
   }
  }
  break;
 default:

  VAR_13 = VAR_8;
 }
 return FUNC_2(VAR_10, VAR_14, VAR_13);
}
