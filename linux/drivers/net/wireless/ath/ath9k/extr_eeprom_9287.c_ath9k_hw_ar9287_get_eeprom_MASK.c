
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct modal_eep_ar9287_header {int * antennaGainCh; int * noiseFloorThreshCh; } ;
struct base_eep_ar9287_header {int tempSensSlopePalOn; int tempSensSlope; int openLoopPwrCntl; int deviceType; int rxMask; int txMask; int rfSilent; int opCapFlags; int deviceCap; int * regDmn; int macAddr; } ;
struct ar9287_eeprom {struct base_eep_ar9287_header baseEepHeader; struct modal_eep_ar9287_header modalHeader; } ;
struct TYPE_2__ {struct ar9287_eeprom map9287; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
typedef enum eeprom_param { ____Placeholder_eeprom_param } eeprom_param ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_4(struct ath_hw *VAR_3,
          enum eeprom_param VAR_4)
{
 struct ar9287_eeprom *VAR_5 = &VAR_3->eeprom.map9287;
 struct modal_eep_ar9287_header *VAR_6 = &VAR_5->modalHeader;
 struct base_eep_ar9287_header *VAR_7 = &VAR_5->baseEepHeader;
 u16 VAR_8 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 137:
  return VAR_6->noiseFloorThreshCh[0];
 case 140:
  return FUNC_1(VAR_7->macAddr);
 case 139:
  return FUNC_1(VAR_7->macAddr + 2);
 case 138:
  return FUNC_1(VAR_7->macAddr + 4);
 case 133:
  return FUNC_2(VAR_7->regDmn[0]);
 case 135:
  return FUNC_2(VAR_7->deviceCap);
 case 134:
  return VAR_7->opCapFlags;
 case 132:
  return FUNC_2(VAR_7->rfSilent);
 case 128:
  return VAR_7->txMask;
 case 131:
  return VAR_7->rxMask;
 case 141:
  return VAR_7->deviceType;
 case 136:
  return VAR_7->openLoopPwrCntl;
 case 130:
  if (VAR_8 >= VAR_0)
   return VAR_7->tempSensSlope;
  else
   return 0;
 case 129:
  if (VAR_8 >= VAR_1)
   return VAR_7->tempSensSlopePalOn;
  else
   return 0;
 case 142:
  return FUNC_3(VAR_2, VAR_6->antennaGainCh[0],
     VAR_6->antennaGainCh[1]);
 default:
  return 0;
 }
}
