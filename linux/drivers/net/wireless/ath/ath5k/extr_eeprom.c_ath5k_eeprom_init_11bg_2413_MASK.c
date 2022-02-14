
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath5k_eeprom_info {struct ath5k_chan_pcal_info* ee_pwr_cal_g; struct ath5k_chan_pcal_info* ee_pwr_cal_b; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath5k_hw*,int*,int ,struct ath5k_chan_pcal_info*,unsigned int) ;

__attribute__((used)) static inline int
FUNC_1(struct ath5k_hw *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct ath5k_eeprom_info *VAR_5 = &VAR_2->ah_capabilities.cap_eeprom;
 struct ath5k_chan_pcal_info *VAR_6;

 switch (VAR_3) {
 case 129:
  VAR_6 = VAR_5->ee_pwr_cal_b;
  break;
 case 128:
  VAR_6 = VAR_5->ee_pwr_cal_g;
  break;
 default:
  return -VAR_1;
 }

 FUNC_0(VAR_2, &VAR_4,
  VAR_0, VAR_6,
  VAR_3);

 return 0;
}
