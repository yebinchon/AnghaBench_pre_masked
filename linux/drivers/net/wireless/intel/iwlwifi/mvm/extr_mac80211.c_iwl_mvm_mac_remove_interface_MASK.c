
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_probe_resp_data {int dummy; } ;
struct iwl_mvm_vif {size_t id; int * phy_ctxt; int mcast_sta; int probe_resp_data; } ;
struct iwl_mvm {int monitor_on; int mutex; int * vif_id_to_mac; scalar_t__ vif_count; int * p2p_device_vif; scalar_t__ noa_duration; struct ieee80211_vif* noa_vif; int ftm_resp_stats; struct iwl_mvm_vif* bf_allowed_vif; } ;
struct TYPE_2__ {scalar_t__ ftm_responder; } ;
struct ieee80211_vif {scalar_t__ type; int driver_flags; TYPE_1__ bss_conf; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_4 (struct iwl_mvm*,int *) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_mvm*,int *) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_10 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_11 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_12 (struct ieee80211_vif*) ;
 int FUNC_13 (struct iwl_probe_resp_data*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 struct iwl_probe_resp_data* FUNC_18 (int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_19(struct ieee80211_hw *VAR_7,
      struct ieee80211_vif *VAR_8)
{
 struct iwl_mvm *VAR_9 = FUNC_0(VAR_7);
 struct iwl_mvm_vif *VAR_10 = FUNC_12(VAR_8);
 struct iwl_probe_resp_data *VAR_11;

 FUNC_8(VAR_9, VAR_8);

 if (!(VAR_8->type == VAR_3 ||
       VAR_8->type == VAR_2))
  FUNC_10(VAR_9, VAR_8);

 FUNC_16(&VAR_9->mutex);

 VAR_11 = FUNC_18(VAR_10->probe_resp_data,
            FUNC_14(&VAR_9->mutex));
 FUNC_1(VAR_10->probe_resp_data, ((void*)0));
 if (VAR_11)
  FUNC_13(VAR_11, VAR_6);

 if (VAR_9->bf_allowed_vif == VAR_10) {
  VAR_9->bf_allowed_vif = ((void*)0);
  VAR_8->driver_flags &= ~(VAR_0 |
           VAR_1);
 }

 if (VAR_8->bss_conf.ftm_responder)
  FUNC_15(&VAR_9->ftm_resp_stats, 0, sizeof(VAR_9->ftm_resp_stats));

 FUNC_11(VAR_9, VAR_8);





 if (VAR_8->type == VAR_3 ||
     VAR_8->type == VAR_2) {






  FUNC_4(VAR_9, &VAR_10->mcast_sta);
  FUNC_3(VAR_9, VAR_8);
  goto out_release;
 }

 if (VAR_8->type == VAR_5) {
  VAR_9->p2p_device_vif = ((void*)0);
  FUNC_9(VAR_9, VAR_8);
  FUNC_2(VAR_9, VAR_8);
  FUNC_6(VAR_9, VAR_10->phy_ctxt);
  VAR_10->phy_ctxt = ((void*)0);
 }

 if (VAR_9->vif_count && VAR_8->type != VAR_5)
  VAR_9->vif_count--;

 FUNC_7(VAR_9);
 FUNC_5(VAR_9, VAR_8);

 FUNC_1(VAR_9->vif_id_to_mac[VAR_10->id], ((void*)0));

 if (VAR_8->type == VAR_4)
  VAR_9->monitor_on = 0;

out_release:
 FUNC_17(&VAR_9->mutex);
}
