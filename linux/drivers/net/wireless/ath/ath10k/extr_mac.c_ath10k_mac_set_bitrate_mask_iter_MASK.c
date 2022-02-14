
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ath10k_vif {struct ath10k* ar; } ;
struct ath10k_sta {int update_wk; int changed; struct ath10k_vif* arvif; } ;
struct ath10k {int hw; int data_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath10k*,struct ath10k_vif*,struct ieee80211_sta*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1,
          struct ieee80211_sta *VAR_2)
{
 struct ath10k_vif *VAR_3 = VAR_1;
 struct ath10k_sta *VAR_4 = (struct ath10k_sta *)VAR_2->drv_priv;
 struct ath10k *VAR_5 = VAR_3->ar;

 if (VAR_4->arvif != VAR_3)
  return;

 if (FUNC_0(VAR_5, VAR_3, VAR_2))
  return;

 FUNC_2(&VAR_5->data_lock);
 VAR_4->changed |= VAR_0;
 FUNC_3(&VAR_5->data_lock);

 FUNC_1(VAR_5->hw, &VAR_4->update_wk);
}
