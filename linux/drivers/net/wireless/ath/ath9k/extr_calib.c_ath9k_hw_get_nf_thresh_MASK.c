
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* eep_ops; } ;
typedef int int8_t ;
typedef int int16_t ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {int (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ) ;

__attribute__((used)) static bool FUNC_3(struct ath_hw *VAR_2,
       enum nl80211_band VAR_3,
       int16_t *VAR_4)
{
 switch (VAR_3) {
 case 128:
  *VAR_4 = (int8_t)VAR_2->eep_ops->get_eeprom(VAR_2, VAR_1);
  break;
 case 129:
  *VAR_4 = (int8_t)VAR_2->eep_ops->get_eeprom(VAR_2, VAR_0);
  break;
 default:
  FUNC_0(1);
  return 0;
 }

 return 1;
}
