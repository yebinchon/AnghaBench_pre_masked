
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct mt76_dev {int antenna_mask; } ;
struct TYPE_4__ {void* tx_mcs_map; void* rx_mcs_map; } ;
struct ieee80211_sta_vht_cap {TYPE_2__ vht_mcs; int cap; } ;
struct TYPE_3__ {int* rx_mask; } ;
struct ieee80211_sta_ht_cap {TYPE_1__ mcs; int cap; } ;
struct ieee80211_supported_band {struct ieee80211_sta_vht_cap vht_cap; struct ieee80211_sta_ht_cap ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mt76_dev *VAR_5,
     struct ieee80211_supported_band *VAR_6,
     bool VAR_7)
{
 struct ieee80211_sta_ht_cap *VAR_8 = &VAR_6->ht_cap;
 int VAR_9, VAR_10 = FUNC_1(VAR_5->antenna_mask);
 struct ieee80211_sta_vht_cap *VAR_11;
 u16 VAR_12 = 0;

 if (VAR_10 > 1)
  VAR_8->cap |= VAR_0;
 else
  VAR_8->cap &= ~VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  VAR_8->mcs.rx_mask[VAR_9] = VAR_9 < VAR_10 ? 0xff : 0;

 if (!VAR_7)
  return;

 VAR_11 = &VAR_6->vht_cap;
 if (VAR_10 > 1)
  VAR_11->cap |= VAR_2;
 else
  VAR_11->cap &= ~VAR_2;

 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  if (VAR_9 < VAR_10)
   VAR_12 |= (VAR_4 << (VAR_9 * 2));
  else
   VAR_12 |=
    (VAR_3 << (VAR_9 * 2));
 }
 VAR_11->vht_mcs.rx_mcs_map = FUNC_0(VAR_12);
 VAR_11->vht_mcs.tx_mcs_map = FUNC_0(VAR_12);
}
