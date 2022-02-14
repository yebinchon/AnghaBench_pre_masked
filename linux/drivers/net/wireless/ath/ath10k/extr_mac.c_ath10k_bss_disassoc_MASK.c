
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_sta_vht_cap {int dummy; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k_vif {int def_wep_key_idx; int is_up; int connection_loss_work; int vdev_id; int bssid; } ;
struct ath10k {int conf_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int ) ;
 int FUNC_1 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta_vht_cap) ;
 int FUNC_2 (struct ath10k*,char*,int ,int) ;
 int FUNC_3 (struct ath10k*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_1,
    struct ieee80211_vif *VAR_2)
{
 struct ath10k *VAR_3 = VAR_1->priv;
 struct ath10k_vif *VAR_4 = (void *)VAR_2->drv_priv;
 struct ieee80211_sta_vht_cap VAR_5 = {};
 int VAR_6;

 FUNC_5(&VAR_3->conf_mutex);

 FUNC_0(VAR_3, VAR_0, "mac vdev %i disassoc bssid %pM\n",
     VAR_4->vdev_id, VAR_4->bssid);

 VAR_6 = FUNC_3(VAR_3, VAR_4->vdev_id);
 if (VAR_6)
  FUNC_2(VAR_3, "failed to down vdev %i: %d\n",
       VAR_4->vdev_id, VAR_6);

 VAR_4->def_wep_key_idx = -1;

 VAR_6 = FUNC_1(VAR_3, VAR_2, VAR_5);
 if (VAR_6) {
  FUNC_2(VAR_3, "failed to recalc txbf for vdev %i: %d\n",
       VAR_4->vdev_id, VAR_6);
  return;
 }

 VAR_4->is_up = 0;

 FUNC_4(&VAR_4->connection_loss_work);
}
