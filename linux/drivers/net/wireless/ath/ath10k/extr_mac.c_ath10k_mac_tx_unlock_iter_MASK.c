
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ath10k_vif {int vdev_id; scalar_t__ tx_paused; } ;
struct ath10k {int hw; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u8 *VAR_1,
          struct ieee80211_vif *VAR_2)
{
 struct ath10k *VAR_3 = VAR_0;
 struct ath10k_vif *VAR_4 = (void *)VAR_2->drv_priv;

 if (VAR_4->tx_paused)
  return;

 FUNC_0(VAR_3->hw, VAR_4->vdev_id);
}
