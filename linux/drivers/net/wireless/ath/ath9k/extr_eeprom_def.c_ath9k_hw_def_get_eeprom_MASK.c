
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct modal_eep_header {int* noiseFloorThreshCh; int ob; int db; int* antennaGainCh; } ;
struct base_eep_header {int opCapFlags; int txMask; int rxMask; int fastClk5g; int rxGainType; int txGainType; int rcChainMask; int dacHiPwrMode_5G; int frac_n_5g; int pwr_table_offset; int openLoopPwrCntl; int rfSilent; int deviceCap; int * regDmn; int macAddr; } ;
struct ar5416_eeprom_def {struct base_eep_header baseEepHeader; struct modal_eep_header* modalHeader; } ;
struct TYPE_2__ {struct ar5416_eeprom_def def; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
typedef enum eeprom_param { ____Placeholder_eeprom_param } eeprom_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_4(struct ath_hw *VAR_6,
       enum eeprom_param VAR_7)
{
 struct ar5416_eeprom_def *VAR_8 = &VAR_6->eeprom.def;
 struct modal_eep_header *VAR_9 = VAR_8->modalHeader;
 struct base_eep_header *VAR_10 = &VAR_8->baseEepHeader;
 int VAR_11 = 0;

 switch (VAR_7) {
 case 141:
  return VAR_9[0].noiseFloorThreshCh[0];
 case 142:
  return VAR_9[1].noiseFloorThreshCh[0];
 case 145:
  return FUNC_1(VAR_10->macAddr);
 case 144:
  return FUNC_1(VAR_10->macAddr + 2);
 case 143:
  return FUNC_1(VAR_10->macAddr + 4);
 case 133:
  return FUNC_2(VAR_10->regDmn[0]);
 case 137:
  return FUNC_2(VAR_10->deviceCap);
 case 136:
  return VAR_10->opCapFlags;
 case 132:
  return FUNC_2(VAR_10->rfSilent);
 case 139:
  return VAR_9[0].ob;
 case 148:
  return VAR_9[0].db;
 case 140:
  return VAR_9[1].ob;
 case 149:
  return VAR_9[1].db;
 case 128:
  return VAR_10->txMask;
 case 130:
  return VAR_10->rxMask;
 case 146:
  return VAR_10->fastClk5g;
 case 131:
  return VAR_10->rxGainType;
 case 129:
  return VAR_10->txGainType;
 case 138:
  if (FUNC_0(VAR_6) >= VAR_0)
   return VAR_10->openLoopPwrCntl ? 1 : 0;
  else
   return 0;
 case 134:
  if (FUNC_0(VAR_6) >= VAR_0)
   return VAR_10->rcChainMask;
  else
   return 0;
 case 150:
  if (FUNC_0(VAR_6) >= VAR_1)
   return VAR_10->dacHiPwrMode_5G;
  else
   return 0;
 case 147:
  if (FUNC_0(VAR_6) >= VAR_3)
   return VAR_10->frac_n_5g;
  else
   return 0;
 case 135:
  if (FUNC_0(VAR_6) >= VAR_2)
   return VAR_10->pwr_table_offset;
  else
   return VAR_4;
 case 152:
  VAR_11 = 1;

 case 151:
  return FUNC_3(VAR_5, FUNC_3(VAR_5,
   VAR_9[VAR_11].antennaGainCh[0],
   VAR_9[VAR_11].antennaGainCh[1]),
   VAR_9[VAR_11].antennaGainCh[2]);
 default:
  return 0;
 }
}
