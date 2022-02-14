
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int* params_for_tuning_caps; int featureEnable; } ;
struct ar9300_eeprom {TYPE_2__ baseEepHeader; } ;
struct TYPE_3__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_3)
{
 struct ar9300_eeprom *VAR_4 = &VAR_3->eeprom.ar9300_eep;
 u8 VAR_5 = VAR_4->baseEepHeader.params_for_tuning_caps[0];

 if (FUNC_0(VAR_3) || FUNC_1(VAR_3))
  return;

 if (VAR_4->baseEepHeader.featureEnable & 0x40) {
  VAR_5 &= 0x7f;
  FUNC_2(VAR_3, VAR_0, VAR_1,
         VAR_5);
  FUNC_2(VAR_3, VAR_0, VAR_2,
         VAR_5);
 }
}
