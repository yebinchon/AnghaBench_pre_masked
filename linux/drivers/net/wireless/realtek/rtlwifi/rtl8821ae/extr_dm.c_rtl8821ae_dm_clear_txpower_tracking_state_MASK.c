
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_efuse {int eeprom_thermalmeter; } ;
struct rtl_dm {int modify_txagc_flag_path_a; int modify_txagc_flag_path_b; int thermalvalue_lck; int thermalvalue_iqk; int thermalvalue; scalar_t__ remnant_cck_idx; scalar_t__* remnant_ofdm_swing_idx; scalar_t__* absolute_ofdm_swing_idx; scalar_t__* delta_power_index_last; scalar_t__* delta_power_index; scalar_t__* power_index_offset; int default_ofdm_index; int * ofdm_index; int * swing_idx_ofdm; int * swing_idx_ofdm_base; scalar_t__ cck_index; int default_cck_index; int swing_idx_cck; int swing_idx_cck_base; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct rtl_dm* FUNC_0 (struct rtl_priv*) ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

void FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_2);
 struct rtl_dm *VAR_4 = FUNC_0(VAR_3);
 struct rtl_efuse *VAR_5 = FUNC_1(VAR_3);
 u8 VAR_6 = 0;

 VAR_4->swing_idx_cck_base = VAR_4->default_cck_index;
 VAR_4->swing_idx_cck = VAR_4->default_cck_index;
 VAR_4->cck_index = 0;

 for (VAR_6 = VAR_0; VAR_6 <= VAR_1; ++VAR_6) {
  VAR_4->swing_idx_ofdm_base[VAR_6] = VAR_4->default_ofdm_index;
  VAR_4->swing_idx_ofdm[VAR_6] = VAR_4->default_ofdm_index;
  VAR_4->ofdm_index[VAR_6] = VAR_4->default_ofdm_index;

  VAR_4->power_index_offset[VAR_6] = 0;
  VAR_4->delta_power_index[VAR_6] = 0;
  VAR_4->delta_power_index_last[VAR_6] = 0;

  VAR_4->absolute_ofdm_swing_idx[VAR_6] = 0;
  VAR_4->remnant_ofdm_swing_idx[VAR_6] = 0;
 }

 VAR_4->modify_txagc_flag_path_a = 0;

 VAR_4->modify_txagc_flag_path_b = 0;
 VAR_4->remnant_cck_idx = 0;
 VAR_4->thermalvalue = VAR_5->eeprom_thermalmeter;
 VAR_4->thermalvalue_iqk = VAR_5->eeprom_thermalmeter;
 VAR_4->thermalvalue_lck = VAR_5->eeprom_thermalmeter;
}
