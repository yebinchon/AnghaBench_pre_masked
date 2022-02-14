
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {int dummy; } ;
struct ath9k_vif_iter_data {int* hw_macaddr; int* mask; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, u8 *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct ath9k_vif_iter_data *VAR_4 = VAR_1;
 int VAR_5;

 if (VAR_4->hw_macaddr != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_4->mask[VAR_5] &= ~(VAR_4->hw_macaddr[VAR_5] ^ VAR_2[VAR_5]);
 } else {
  VAR_4->hw_macaddr = VAR_2;
 }
}
