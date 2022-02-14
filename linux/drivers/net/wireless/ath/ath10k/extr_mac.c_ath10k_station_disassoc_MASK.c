
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; int wme; } ;
struct ath10k_vif {int vdev_id; int num_legacy_stations; } ;
struct ath10k {int conf_mutex; } ;


 int FUNC_0 (struct ath10k_vif*,int ) ;
 int FUNC_1 (struct ath10k_vif*) ;
 int FUNC_2 (struct ath10k*,char*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_0,
       struct ieee80211_vif *VAR_1,
       struct ieee80211_sta *VAR_2)
{
 struct ath10k_vif *VAR_3 = (void *)VAR_1->drv_priv;
 int VAR_4 = 0;

 FUNC_3(&VAR_0->conf_mutex);

 if (!VAR_2->wme) {
  VAR_3->num_legacy_stations--;
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4) {
   FUNC_2(VAR_0, "failed to recalculate rts/cts prot for vdev %d: %d\n",
        VAR_3->vdev_id, VAR_4);
   return VAR_4;
  }
 }

 VAR_4 = FUNC_0(VAR_3, VAR_2->addr);
 if (VAR_4) {
  FUNC_2(VAR_0, "failed to clear all peer wep keys for vdev %i: %d\n",
       VAR_3->vdev_id, VAR_4);
  return VAR_4;
 }

 return VAR_4;
}
