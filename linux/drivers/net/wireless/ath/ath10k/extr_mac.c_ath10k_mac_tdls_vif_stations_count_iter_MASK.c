
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ tdls; scalar_t__ drv_priv; } ;
struct ath10k_sta {TYPE_1__* arvif; } ;
struct ath10k_mac_tdls_iter_data {int num_tdls_stations; struct ieee80211_vif* curr_vif; } ;
struct TYPE_2__ {struct ieee80211_vif* vif; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0,
          struct ieee80211_sta *VAR_1)
{
 struct ath10k_mac_tdls_iter_data *VAR_2 = VAR_0;
 struct ath10k_sta *VAR_3 = (struct ath10k_sta *)VAR_1->drv_priv;
 struct ieee80211_vif *VAR_4 = VAR_3->arvif->vif;

 if (VAR_1->tdls && VAR_4 == VAR_2->curr_vif)
  VAR_2->num_tdls_stations++;
}
