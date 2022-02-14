
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_peer_assoc_complete_arg {int dummy; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; int tdls; int wme; int ht_cap; } ;
struct ath10k_vif {int def_wep_key_idx; int vdev_id; int num_legacy_stations; } ;
struct ath10k {int conf_mutex; } ;


 int FUNC_0 (struct ath10k_vif*,int ) ;
 int FUNC_1 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta*,struct wmi_peer_assoc_complete_arg*) ;
 int FUNC_2 (struct ath10k*,struct ath10k_vif*,struct ieee80211_sta*) ;
 int FUNC_3 (struct ath10k_vif*) ;
 int FUNC_4 (struct ath10k*,struct ath10k_vif*,int ,int *) ;
 int FUNC_5 (struct ath10k*,char*,int ,int,...) ;
 int FUNC_6 (struct ath10k*,struct wmi_peer_assoc_complete_arg*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ath10k *VAR_0,
    struct ieee80211_vif *VAR_1,
    struct ieee80211_sta *VAR_2,
    bool VAR_3)
{
 struct ath10k_vif *VAR_4 = (void *)VAR_1->drv_priv;
 struct wmi_peer_assoc_complete_arg VAR_5;
 int VAR_6 = 0;

 FUNC_7(&VAR_0->conf_mutex);

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_5);
 if (VAR_6) {
  FUNC_5(VAR_0, "failed to prepare WMI peer assoc for %pM vdev %i: %i\n",
       VAR_2->addr, VAR_4->vdev_id, VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_0, &VAR_5);
 if (VAR_6) {
  FUNC_5(VAR_0, "failed to run peer assoc for STA %pM vdev %i: %d\n",
       VAR_2->addr, VAR_4->vdev_id, VAR_6);
  return VAR_6;
 }




 if (!VAR_3) {
  VAR_6 = FUNC_4(VAR_0, VAR_4, VAR_2->addr,
          &VAR_2->ht_cap);
  if (VAR_6) {
   FUNC_5(VAR_0, "failed to setup peer SMPS for vdev %d: %d\n",
        VAR_4->vdev_id, VAR_6);
   return VAR_6;
  }

  VAR_6 = FUNC_2(VAR_0, VAR_4, VAR_2);
  if (VAR_6) {
   FUNC_5(VAR_0, "failed to set qos params for STA %pM for vdev %i: %d\n",
        VAR_2->addr, VAR_4->vdev_id, VAR_6);
   return VAR_6;
  }

  if (!VAR_2->wme) {
   VAR_4->num_legacy_stations++;
   VAR_6 = FUNC_3(VAR_4);
   if (VAR_6) {
    FUNC_5(VAR_0, "failed to recalculate rts/cts prot for vdev %d: %d\n",
         VAR_4->vdev_id, VAR_6);
    return VAR_6;
   }
  }


  if ((VAR_4->def_wep_key_idx != -1) && (!VAR_2->tdls)) {
   VAR_6 = FUNC_0(VAR_4, VAR_2->addr);
   if (VAR_6) {
    FUNC_5(VAR_0, "failed to install peer wep keys for vdev %i: %d\n",
         VAR_4->vdev_id, VAR_6);
    return VAR_6;
   }
  }
 }

 return VAR_6;
}
