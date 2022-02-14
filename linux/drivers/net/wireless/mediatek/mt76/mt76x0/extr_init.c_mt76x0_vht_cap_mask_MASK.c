
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {void* tx_mcs_map; void* rx_mcs_map; } ;
struct ieee80211_sta_vht_cap {TYPE_1__ vht_mcs; int cap; } ;
struct ieee80211_supported_band {struct ieee80211_sta_vht_cap vht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_supported_band *VAR_3)
{
 struct ieee80211_sta_vht_cap *VAR_4 = &VAR_3->vht_cap;
 u16 VAR_5 = 0;
 int VAR_6;

 VAR_4->cap &= ~VAR_0;
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  if (!VAR_6)
   VAR_5 |= (VAR_2 << (VAR_6 * 2));
  else
   VAR_5 |=
    (VAR_1 << (VAR_6 * 2));
 }
 VAR_4->vht_mcs.rx_mcs_map = FUNC_0(VAR_5);
 VAR_4->vht_mcs.tx_mcs_map = FUNC_0(VAR_5);
}
