
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct ath10k_vif {scalar_t__ vdev_id; int connection_loss_work; int is_up; struct ath10k* ar; } ;
struct ath10k {struct ieee80211_hw* hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_vif*) ;
 int FUNC_1 (struct ieee80211_hw*,int *,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, u8 *VAR_2,
            struct ieee80211_vif *VAR_3)
{
 u32 *VAR_4 = VAR_1;
 struct ath10k_vif *VAR_5 = (void *)VAR_3->drv_priv;
 struct ath10k *VAR_6 = VAR_5->ar;
 struct ieee80211_hw *VAR_7 = VAR_6->hw;

 if (VAR_5->vdev_id != *VAR_4)
  return;

 if (!VAR_5->is_up)
  return;

 FUNC_0(VAR_3);






 FUNC_1(VAR_7, &VAR_5->connection_loss_work,
         VAR_0);
}
