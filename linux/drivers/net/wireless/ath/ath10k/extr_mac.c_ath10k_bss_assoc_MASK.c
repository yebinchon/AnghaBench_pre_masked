
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_peer_assoc_complete_arg {int dummy; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_sta_vht_cap {int dummy; } ;
struct ieee80211_sta_ht_cap {int dummy; } ;
struct ieee80211_sta {struct ieee80211_sta_vht_cap vht_cap; struct ieee80211_sta_ht_cap ht_cap; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ieee80211_bss_conf {int bssid; int aid; } ;
struct ath10k_vif {int is_up; int vdev_id; int bssid; int aid; } ;
struct ath10k {int conf_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta_vht_cap) ;
 int FUNC_3 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta*,struct wmi_peer_assoc_complete_arg*) ;
 int FUNC_4 (struct ath10k*,struct ath10k_vif*,int ,struct ieee80211_sta_ht_cap*) ;
 int FUNC_5 (struct ath10k*,char*,int ,int,...) ;
 int FUNC_6 (struct ath10k*,struct wmi_peer_assoc_complete_arg*) ;
 int FUNC_7 (struct ath10k*,int ,int ,int ,int) ;
 int FUNC_8 (struct ath10k*,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 struct ieee80211_sta* FUNC_10 (struct ieee80211_vif*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(struct ieee80211_hw *VAR_2,
        struct ieee80211_vif *VAR_3,
        struct ieee80211_bss_conf *VAR_4)
{
 struct ath10k *VAR_5 = VAR_2->priv;
 struct ath10k_vif *VAR_6 = (void *)VAR_3->drv_priv;
 struct ieee80211_sta_ht_cap VAR_7;
 struct ieee80211_sta_vht_cap VAR_8;
 struct wmi_peer_assoc_complete_arg VAR_9;
 struct ieee80211_sta *VAR_10;
 int VAR_11;

 FUNC_11(&VAR_5->conf_mutex);

 FUNC_1(VAR_5, VAR_0, "mac vdev %i assoc bssid %pM aid %d\n",
     VAR_6->vdev_id, VAR_6->bssid, VAR_6->aid);

 FUNC_12();

 VAR_10 = FUNC_10(VAR_3, VAR_4->bssid);
 if (!VAR_10) {
  FUNC_5(VAR_5, "failed to find station entry for bss %pM vdev %i\n",
       VAR_4->bssid, VAR_6->vdev_id);
  FUNC_13();
  return;
 }




 VAR_7 = VAR_10->ht_cap;
 VAR_8 = VAR_10->vht_cap;

 VAR_11 = FUNC_3(VAR_5, VAR_3, VAR_10, &VAR_9);
 if (VAR_11) {
  FUNC_5(VAR_5, "failed to prepare peer assoc for %pM vdev %i: %d\n",
       VAR_4->bssid, VAR_6->vdev_id, VAR_11);
  FUNC_13();
  return;
 }

 FUNC_13();

 VAR_11 = FUNC_6(VAR_5, &VAR_9);
 if (VAR_11) {
  FUNC_5(VAR_5, "failed to run peer assoc for %pM vdev %i: %d\n",
       VAR_4->bssid, VAR_6->vdev_id, VAR_11);
  return;
 }

 VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_4->bssid, &VAR_7);
 if (VAR_11) {
  FUNC_5(VAR_5, "failed to setup peer SMPS for vdev %i: %d\n",
       VAR_6->vdev_id, VAR_11);
  return;
 }

 VAR_11 = FUNC_2(VAR_5, VAR_3, VAR_8);
 if (VAR_11) {
  FUNC_5(VAR_5, "failed to recalc txbf for vdev %i on bss %pM: %d\n",
       VAR_6->vdev_id, VAR_4->bssid, VAR_11);
  return;
 }

 FUNC_1(VAR_5, VAR_0,
     "mac vdev %d up (associated) bssid %pM aid %d\n",
     VAR_6->vdev_id, VAR_4->bssid, VAR_4->aid);

 FUNC_0(VAR_6->is_up);

 VAR_6->aid = VAR_4->aid;
 FUNC_9(VAR_6->bssid, VAR_4->bssid);

 VAR_11 = FUNC_8(VAR_5, VAR_6->vdev_id, VAR_6->aid, VAR_6->bssid);
 if (VAR_11) {
  FUNC_5(VAR_5, "failed to set vdev %d up: %d\n",
       VAR_6->vdev_id, VAR_11);
  return;
 }

 VAR_6->is_up = 1;





 VAR_11 = FUNC_7(VAR_5, VAR_6->vdev_id, VAR_6->bssid,
     VAR_1, 1);
 if (VAR_11) {
  FUNC_5(VAR_5, "failed to poke peer %pM param for ps workaround on vdev %i: %d\n",
       VAR_6->bssid, VAR_6->vdev_id, VAR_11);
  return;
 }
}
