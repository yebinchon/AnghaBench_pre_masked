
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct registry_priv {int antdiv_cfg; int antdiv_type; } ;
struct hal_data_8188e {int AntDivCfg; int TRxAntDivType; } ;
struct adapter {struct registry_priv registrypriv; struct hal_data_8188e* HalData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

void FUNC_1(struct adapter *VAR_5, u8 *VAR_6, bool VAR_7)
{
 struct hal_data_8188e *VAR_8 = VAR_5->HalData;
 struct registry_priv *VAR_9 = &VAR_5->registrypriv;

 if (!VAR_7) {

  if (VAR_9->antdiv_cfg == 2) {
   VAR_8->AntDivCfg = (VAR_6[VAR_4]&0x18)>>3;
   if (VAR_6[VAR_4] == 0xFF)
    VAR_8->AntDivCfg = (VAR_2&0x18)>>3;
  } else {
   VAR_8->AntDivCfg = VAR_9->antdiv_cfg;
  }

  if (VAR_9->antdiv_type == 0) {

   VAR_8->TRxAntDivType = VAR_6[VAR_3];
   if (VAR_8->TRxAntDivType == 0xFF)
    VAR_8->TRxAntDivType = VAR_1;
  } else {
   VAR_8->TRxAntDivType = VAR_9->antdiv_type;
  }

  if (VAR_8->TRxAntDivType == VAR_1 || VAR_8->TRxAntDivType == VAR_0)
   VAR_8->AntDivCfg = 1;
 } else {
  VAR_8->AntDivCfg = 0;
  VAR_8->TRxAntDivType = VAR_8->TRxAntDivType;
 }
 FUNC_0("EEPROM : AntDivCfg = %x, TRxAntDivType = %x\n", VAR_8->AntDivCfg, VAR_8->TRxAntDivType);
}
