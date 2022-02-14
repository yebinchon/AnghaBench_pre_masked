
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_beacons; int accu_num_beacons; } ;
struct iwl_mvm_vif {size_t id; int * phy_ctxt; int csa_work; int features; int mcast_sta; TYPE_1__ beacon_stats; int probe_resp_data; struct iwl_mvm* mvm; } ;
struct iwl_mvm {int monitor_on; int mutex; int vif_count; struct iwl_mvm_vif* bf_allowed_vif; struct ieee80211_vif* p2p_device_vif; int * vif_id_to_mac; int status; } ;
struct ieee80211_vif {int driver_flags; int type; int p2p; } ;
struct ieee80211_hw {int netdev_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_mvm*,int *,int ,int ,int ) ;
 int FUNC_7 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int VAR_10 ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int * FUNC_10 (struct iwl_mvm*) ;
 int FUNC_11 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_12 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_13 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_14 (struct iwl_mvm*,int *) ;
 int FUNC_15 (struct iwl_mvm*,int *) ;
 int FUNC_16 (struct iwl_mvm*) ;
 int FUNC_17 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_18 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_19 (struct ieee80211_vif*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,struct ieee80211_vif*) ;
 scalar_t__ FUNC_23 (int ,int *) ;

__attribute__((used)) static int FUNC_24(struct ieee80211_hw *VAR_11,
         struct ieee80211_vif *VAR_12)
{
 struct iwl_mvm *VAR_13 = FUNC_2(VAR_11);
 struct iwl_mvm_vif *VAR_14 = FUNC_19(VAR_12);
 int VAR_15;

 VAR_14->mvm = VAR_13;
 FUNC_3(VAR_14->probe_resp_data, ((void*)0));







 FUNC_20(&VAR_13->mutex);


 if (FUNC_23(VAR_3, &VAR_13->status))
  VAR_14->beacon_stats.accu_num_beacons +=
   VAR_14->beacon_stats.num_beacons;


 VAR_15 = FUNC_12(VAR_13, VAR_12);
 if (VAR_15)
  goto out_unlock;

 FUNC_22(VAR_13->vif_id_to_mac[VAR_14->id], VAR_12);


 if (VAR_12->type != VAR_8)
  VAR_13->vif_count++;
 if (VAR_12->type == VAR_6 ||
     VAR_12->type == VAR_5) {
  VAR_15 = FUNC_5(VAR_13, VAR_12);
  if (VAR_15) {
   FUNC_1(VAR_13, "Failed to allocate bcast sta\n");
   goto out_release;
  }





  VAR_15 = FUNC_6(VAR_13, &VAR_14->mcast_sta,
            0, VAR_12->type,
            VAR_4);
  if (VAR_15)
   goto out_release;

  FUNC_18(VAR_13, VAR_12);
  goto out_unlock;
 }

 VAR_14->features |= VAR_11->netdev_features;

 VAR_15 = FUNC_11(VAR_13, VAR_12);
 if (VAR_15)
  goto out_release;

 VAR_15 = FUNC_16(VAR_13);
 if (VAR_15)
  goto out_remove_mac;


 VAR_15 = FUNC_9(VAR_13, VAR_12, 0);
 if (VAR_15)
  goto out_remove_mac;

 if (!VAR_13->bf_allowed_vif &&
     VAR_12->type == VAR_9 && !VAR_12->p2p) {
  VAR_13->bf_allowed_vif = VAR_14;
  VAR_12->driver_flags |= VAR_1 |
         VAR_2;
 }






 if (VAR_12->type == VAR_8) {

  VAR_14->phy_ctxt = FUNC_10(VAR_13);
  if (!VAR_14->phy_ctxt) {
   VAR_15 = -VAR_0;
   goto out_free_bf;
  }

  FUNC_14(VAR_13, VAR_14->phy_ctxt);
  VAR_15 = FUNC_7(VAR_13, VAR_12);
  if (VAR_15)
   goto out_unref_phy;

  VAR_15 = FUNC_4(VAR_13, VAR_12);
  if (VAR_15)
   goto out_unbind;



  VAR_13->p2p_device_vif = VAR_12;
 }

 FUNC_17(VAR_13, VAR_12);
 FUNC_0(&VAR_14->csa_work,
     VAR_10);

 if (VAR_12->type == VAR_7)
  VAR_13->monitor_on = 1;

 FUNC_18(VAR_13, VAR_12);
 goto out_unlock;

 out_unbind:
 FUNC_8(VAR_13, VAR_12);
 out_unref_phy:
 FUNC_15(VAR_13, VAR_14->phy_ctxt);
 out_free_bf:
 if (VAR_13->bf_allowed_vif == VAR_14) {
  VAR_13->bf_allowed_vif = ((void*)0);
  VAR_12->driver_flags &= ~(VAR_1 |
           VAR_2);
 }
 out_remove_mac:
 VAR_14->phy_ctxt = ((void*)0);
 FUNC_13(VAR_13, VAR_12);
 out_release:
 if (VAR_12->type != VAR_8)
  VAR_13->vif_count--;
 out_unlock:
 FUNC_21(&VAR_13->mutex);

 return VAR_15;
}
