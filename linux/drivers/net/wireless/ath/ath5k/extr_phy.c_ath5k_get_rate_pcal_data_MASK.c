
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ieee80211_channel {scalar_t__ center_freq; int hw_value; } ;
struct ath5k_rate_pcal_info {scalar_t__ freq; void* target_power_54; void* target_power_48; void* target_power_36; void* target_power_6to24; } ;
struct ath5k_eeprom_info {size_t* ee_rate_target_pwr_num; struct ath5k_rate_pcal_info* ee_rate_tpwr_g; struct ath5k_rate_pcal_info* ee_rate_tpwr_b; struct ath5k_rate_pcal_info* ee_rate_tpwr_a; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;



 void* FUNC_0 (scalar_t__,scalar_t__,scalar_t__,void*,void*) ;

__attribute__((used)) static void
FUNC_1(struct ath5k_hw *VAR_3,
   struct ieee80211_channel *VAR_4,
   struct ath5k_rate_pcal_info *VAR_5)
{
 struct ath5k_eeprom_info *VAR_6 = &VAR_3->ah_capabilities.cap_eeprom;
 struct ath5k_rate_pcal_info *VAR_7;
 u8 VAR_8, VAR_9;
 u8 VAR_10, VAR_11, VAR_12;
 u32 VAR_13 = VAR_4->center_freq;

 VAR_8 = 0;
 VAR_9 = 0;

 switch (VAR_4->hw_value) {
 case 130:
  VAR_7 = VAR_6->ee_rate_tpwr_a;
  VAR_10 = VAR_0;
  break;
 case 129:
  VAR_7 = VAR_6->ee_rate_tpwr_b;
  VAR_10 = VAR_1;
  break;
 case 128:
 default:
  VAR_7 = VAR_6->ee_rate_tpwr_g;
  VAR_10 = VAR_2;
  break;
 }
 VAR_11 = VAR_6->ee_rate_target_pwr_num[VAR_10] - 1;



 if (VAR_13 < VAR_7[0].freq) {
  VAR_8 = VAR_9 = 0;
  goto done;
 }

 if (VAR_13 > VAR_7[VAR_11].freq) {
  VAR_8 = VAR_9 = VAR_11;
  goto done;
 }

 for (VAR_12 = 0; VAR_12 <= VAR_11; VAR_12++) {

  if (VAR_7[VAR_12].freq == VAR_13) {
   VAR_8 = VAR_9 = VAR_12;
   goto done;
  }

  if (VAR_13 < VAR_7[VAR_12].freq) {
   VAR_9 = VAR_12;
   VAR_8 = VAR_9 - 1;
   goto done;
  }
 }

done:

 VAR_5->freq = VAR_13;

 VAR_5->target_power_6to24 =
  FUNC_0(VAR_13, VAR_7[VAR_8].freq,
     VAR_7[VAR_9].freq,
     VAR_7[VAR_8].target_power_6to24,
     VAR_7[VAR_9].target_power_6to24);

 VAR_5->target_power_36 =
  FUNC_0(VAR_13, VAR_7[VAR_8].freq,
     VAR_7[VAR_9].freq,
     VAR_7[VAR_8].target_power_36,
     VAR_7[VAR_9].target_power_36);

 VAR_5->target_power_48 =
  FUNC_0(VAR_13, VAR_7[VAR_8].freq,
     VAR_7[VAR_9].freq,
     VAR_7[VAR_8].target_power_48,
     VAR_7[VAR_9].target_power_48);

 VAR_5->target_power_54 =
  FUNC_0(VAR_13, VAR_7[VAR_8].freq,
     VAR_7[VAR_9].freq,
     VAR_7[VAR_8].target_power_54,
     VAR_7[VAR_9].target_power_54);
}
