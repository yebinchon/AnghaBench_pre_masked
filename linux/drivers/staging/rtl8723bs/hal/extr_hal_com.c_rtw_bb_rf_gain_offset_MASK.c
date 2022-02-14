
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int EEPROMRFGainOffset; int EEPROMRFGainVal; } ;
struct adapter {TYPE_1__ eeprompriv; } ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct adapter*,int ,int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct adapter*,int ,int,int) ;

void FUNC_4(struct adapter *VAR_8)
{
 u8 VAR_9 = VAR_8->eeprompriv.EEPROMRFGainOffset;
 u32 VAR_10, VAR_11 = 0;
 u32 *VAR_12 = VAR_0;
 u32 VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;


 if (VAR_9 & VAR_5) {
  FUNC_1("Offset RF Gain.\n");
  FUNC_1("Offset RF Gain.  padapter->eeprompriv.EEPROMRFGainVal = 0x%x\n", VAR_8->eeprompriv.EEPROMRFGainVal);
  if (VAR_8->eeprompriv.EEPROMRFGainVal != 0xff) {
   VAR_10 = FUNC_3(VAR_8, VAR_7, 0x7f, 0xffffffff);
   VAR_10 &= 0xfff87fff;
   FUNC_1("Offset RF Gain. before reg 0x7f = 0x%08x\n", VAR_10);

   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_0); VAR_11 += 2) {
    VAR_13 = VAR_12[VAR_11];
    VAR_14 = VAR_12[VAR_11+1];
    if (VAR_13 == VAR_8->eeprompriv.EEPROMRFGainVal) {
     FUNC_1("Offset RF Gain. got v1 = 0x%x , v2 = 0x%x\n", VAR_13, VAR_14);
     VAR_15 = VAR_14;
     break;
    }
   }
   FUNC_1("padapter->eeprompriv.EEPROMRFGainVal = 0x%x , Gain offset Target Value = 0x%x\n", VAR_8->eeprompriv.EEPROMRFGainVal, VAR_15);
   FUNC_2(VAR_8, VAR_7, VAR_6, VAR_4|VAR_3|VAR_2|VAR_1, VAR_15);



   VAR_10 = FUNC_3(VAR_8, VAR_7, 0x7f, 0xffffffff);
   FUNC_1("Offset RF Gain. After reg 0x7f = 0x%08x\n", VAR_10);
  } else
   FUNC_1("Offset RF Gain.  padapter->eeprompriv.EEPROMRFGainVal = 0x%x	!= 0xff, didn't run Kfree\n", VAR_8->eeprompriv.EEPROMRFGainVal);
 } else
  FUNC_1("Using the default RF gain.\n");
}
