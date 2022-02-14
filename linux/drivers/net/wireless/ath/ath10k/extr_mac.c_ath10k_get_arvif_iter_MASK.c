
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ath10k_vif_iter {scalar_t__ vdev_id; struct ath10k_vif* arvif; } ;
struct ath10k_vif {scalar_t__ vdev_id; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, u8 *VAR_1,
      struct ieee80211_vif *VAR_2)
{
 struct ath10k_vif_iter *VAR_3 = VAR_0;
 struct ath10k_vif *VAR_4 = (void *)VAR_2->drv_priv;

 if (VAR_4->vdev_id == VAR_3->vdev_id)
  VAR_3->arvif = VAR_4;
}
