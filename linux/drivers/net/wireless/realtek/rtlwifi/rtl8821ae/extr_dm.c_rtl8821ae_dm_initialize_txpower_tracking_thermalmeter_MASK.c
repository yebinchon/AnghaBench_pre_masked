
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int txpower_track_control; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct rtl_efuse {int eeprom_thermalmeter; } ;
struct rtl_dm {int default_ofdm_index; int default_cck_index; int swing_idx_cck_base; int cck_index; int* swing_idx_ofdm_base; int* ofdm_index; scalar_t__* delta_power_index_last; scalar_t__* power_index_offset; scalar_t__* delta_power_index; int thermalvalue_lck; int thermalvalue_iqk; int thermalvalue; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_dm* FUNC_1 (struct rtl_priv*) ;
 struct rtl_efuse* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(
    struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_3(VAR_3);
 struct rtl_dm *VAR_5 = FUNC_1(VAR_4);
 struct rtl_efuse *VAR_6 = FUNC_2(VAR_4);
 u8 VAR_7 = 0;
 u8 VAR_8 = 0;

 VAR_4->dm.txpower_track_control = 1;
 VAR_5->thermalvalue = VAR_6->eeprom_thermalmeter;
 VAR_5->thermalvalue_iqk = VAR_6->eeprom_thermalmeter;
 VAR_5->thermalvalue_lck = VAR_6->eeprom_thermalmeter;
 VAR_7 = FUNC_0(VAR_3);

 VAR_5->default_ofdm_index =
  (VAR_7 == VAR_2) ?
  24 : VAR_7;
 VAR_5->default_cck_index = 24;

 VAR_5->swing_idx_cck_base = VAR_5->default_cck_index;
 VAR_5->cck_index = VAR_5->default_cck_index;

 for (VAR_8 = VAR_1; VAR_8 < VAR_0; ++VAR_8) {
  VAR_5->swing_idx_ofdm_base[VAR_8] =
   VAR_5->default_ofdm_index;
  VAR_5->ofdm_index[VAR_8] = VAR_5->default_ofdm_index;
  VAR_5->delta_power_index[VAR_8] = 0;
  VAR_5->power_index_offset[VAR_8] = 0;
  VAR_5->delta_power_index_last[VAR_8] = 0;
 }
}
