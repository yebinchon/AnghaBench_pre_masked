
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct modal_eep_4k_header {int * antennaGainCh; int antdiv_ctl1; int version; int db1_1; int ob_0; int * noiseFloorThreshCh; } ;
struct base_eep_header_4k {int txGainType; int rxMask; int txMask; int rfSilent; int opCapFlags; int deviceCap; int * regDmn; int macAddr; } ;
struct ar5416_eeprom_4k {struct base_eep_header_4k baseEepHeader; struct modal_eep_4k_header modalHeader; } ;
struct TYPE_2__ {struct ar5416_eeprom_4k map4k; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
typedef enum eeprom_param { ____Placeholder_eeprom_param } eeprom_param ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct ath_hw *VAR_1,
      enum eeprom_param VAR_2)
{
 struct ar5416_eeprom_4k *VAR_3 = &VAR_1->eeprom.map4k;
 struct modal_eep_4k_header *VAR_4 = &VAR_3->modalHeader;
 struct base_eep_header_4k *VAR_5 = &VAR_3->baseEepHeader;

 switch (VAR_2) {
 case 137:
  return VAR_4->noiseFloorThreshCh[0];
 case 141:
  return FUNC_0(VAR_5->macAddr);
 case 140:
  return FUNC_0(VAR_5->macAddr + 2);
 case 139:
  return FUNC_0(VAR_5->macAddr + 4);
 case 132:
  return FUNC_1(VAR_5->regDmn[0]);
 case 135:
  return FUNC_1(VAR_5->deviceCap);
 case 134:
  return VAR_5->opCapFlags;
 case 131:
  return FUNC_1(VAR_5->rfSilent);
 case 136:
  return VAR_4->ob_0;
 case 143:
  return VAR_4->db1_1;
 case 128:
  return VAR_5->txMask;
 case 130:
  return VAR_5->rxMask;
 case 142:
  return 0;
 case 133:
  return VAR_0;
 case 138:
  return VAR_4->version;
 case 144:
  return VAR_4->antdiv_ctl1;
 case 129:
  return VAR_5->txGainType;
 case 145:
  return VAR_4->antennaGainCh[0];
 default:
  return 0;
 }
}
