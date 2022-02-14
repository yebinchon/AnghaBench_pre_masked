
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int EEPROMRFGainOffset; int EEPROMRFGainVal; } ;
struct adapter {TYPE_1__ eeprompriv; } ;


 int FUNC_0 (char*,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct adapter*,int ) ;

void FUNC_2(
 struct adapter *VAR_2, u8 *VAR_3, bool VAR_4
)
{




 if (!VAR_4) {
  VAR_2->eeprompriv.EEPROMRFGainOffset = VAR_3[VAR_0];
  FUNC_0("AutoloadFail =%x,\n", VAR_4);
  VAR_2->eeprompriv.EEPROMRFGainVal = FUNC_1(VAR_2, VAR_1);
  FUNC_0("Adapter->eeprompriv.EEPROMRFGainVal =%x\n", VAR_2->eeprompriv.EEPROMRFGainVal);
 } else {
  VAR_2->eeprompriv.EEPROMRFGainOffset = 0;
  VAR_2->eeprompriv.EEPROMRFGainVal = 0xFF;
  FUNC_0("else AutoloadFail =%x,\n", VAR_4);
 }
 FUNC_0("EEPRORFGainOffset = 0x%02x\n", VAR_2->eeprompriv.EEPROMRFGainOffset);
}
