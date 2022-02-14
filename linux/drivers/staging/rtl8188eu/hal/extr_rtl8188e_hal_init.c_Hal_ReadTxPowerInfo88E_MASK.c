
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct txpowerinfo24g {int ** BW40_Diff; int ** BW20_Diff; int ** OFDM_Diff; int ** CCK_Diff; int ** IndexBW40_Base; int ** IndexCCK_Base; } ;
struct hal_data_8188e {int bTXPowerDataReadFromEEPORM; size_t EEPROMRegulatory; int ** BW40_24G_Diff; int ** BW20_24G_Diff; int ** OFDM_24G_Diff; int ** CCK_24G_Diff; int ** Index24G_BW40_Base; int ** Index24G_CCK_Base; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t,...) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (size_t,size_t*) ;
 int FUNC_2 (struct txpowerinfo24g*,size_t*,int) ;
 size_t VAR_3 ;

void FUNC_3(struct adapter *VAR_4, u8 *VAR_5, bool VAR_6)
{
 struct hal_data_8188e *VAR_7 = VAR_4->HalData;
 struct txpowerinfo24g VAR_8;
 u8 VAR_9, VAR_10;
 u8 VAR_11;

 FUNC_2(&VAR_8, VAR_5, VAR_6);

 if (!VAR_6)
  VAR_7->bTXPowerDataReadFromEEPORM = 1;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  FUNC_1(VAR_9, &VAR_10);
  VAR_7->Index24G_CCK_Base[0][VAR_9] = VAR_8.IndexCCK_Base[0][VAR_10];
  if (VAR_9 == 14)
   VAR_7->Index24G_BW40_Base[0][VAR_9] = VAR_8.IndexBW40_Base[0][4];
  else
   VAR_7->Index24G_BW40_Base[0][VAR_9] = VAR_8.IndexBW40_Base[0][VAR_10];

  FUNC_0("======= Path %d, Channel %d =======\n", 0, VAR_9);
  FUNC_0("Index24G_CCK_Base[%d][%d] = 0x%x\n", 0, VAR_9, VAR_7->Index24G_CCK_Base[0][VAR_9]);
  FUNC_0("Index24G_BW40_Base[%d][%d] = 0x%x\n", 0, VAR_9, VAR_7->Index24G_BW40_Base[0][VAR_9]);
 }
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_7->CCK_24G_Diff[0][VAR_11] = VAR_8.CCK_Diff[0][VAR_11];
  VAR_7->OFDM_24G_Diff[0][VAR_11] = VAR_8.OFDM_Diff[0][VAR_11];
  VAR_7->BW20_24G_Diff[0][VAR_11] = VAR_8.BW20_Diff[0][VAR_11];
  VAR_7->BW40_24G_Diff[0][VAR_11] = VAR_8.BW40_Diff[0][VAR_11];
  FUNC_0("======= TxCount %d =======\n", VAR_11);
  FUNC_0("CCK_24G_Diff[%d][%d] = %d\n", 0, VAR_11, VAR_7->CCK_24G_Diff[0][VAR_11]);
  FUNC_0("OFDM_24G_Diff[%d][%d] = %d\n", 0, VAR_11, VAR_7->OFDM_24G_Diff[0][VAR_11]);
  FUNC_0("BW20_24G_Diff[%d][%d] = %d\n", 0, VAR_11, VAR_7->BW20_24G_Diff[0][VAR_11]);
  FUNC_0("BW40_24G_Diff[%d][%d] = %d\n", 0, VAR_11, VAR_7->BW40_24G_Diff[0][VAR_11]);
 }


 if (!VAR_6) {
  VAR_7->EEPROMRegulatory = (VAR_5[VAR_2]&0x7);
  if (VAR_5[VAR_2] == 0xFF)
   VAR_7->EEPROMRegulatory = (VAR_1&0x7);
 } else {
  VAR_7->EEPROMRegulatory = 0;
 }
 FUNC_0("EEPROMRegulatory = 0x%x\n", VAR_7->EEPROMRegulatory);
}
