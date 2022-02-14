
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_dm {int txpower_tracking; int default_ofdm_index; int default_cck_index; int swing_idx_cck_base; int cck_index; int* swing_idx_ofdm_base; int* ofdm_index; scalar_t__* power_index_offset; scalar_t__* delta_power_index_last; scalar_t__* delta_power_index; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct rtl_dm* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_2);
 struct rtl_dm *VAR_4 = FUNC_0(VAR_3);
 u8 VAR_5;

 VAR_4->txpower_tracking = 1;
 VAR_4->default_ofdm_index = 30;
 VAR_4->default_cck_index = 20;

 VAR_4->swing_idx_cck_base = VAR_4->default_cck_index;
 VAR_4->cck_index = VAR_4->default_cck_index;

 for (VAR_5 = VAR_1; VAR_5 < VAR_0; VAR_5++) {
  VAR_4->swing_idx_ofdm_base[VAR_5] = VAR_4->default_ofdm_index;
  VAR_4->ofdm_index[VAR_5] = VAR_4->default_ofdm_index;
  VAR_4->delta_power_index[VAR_5] = 0;
  VAR_4->delta_power_index_last[VAR_5] = 0;
  VAR_4->power_index_offset[VAR_5] = 0;
 }
}
