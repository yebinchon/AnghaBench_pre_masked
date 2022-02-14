
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {int EEPROMRegulatory; int ** BW40_24G_Diff; int ** BW20_24G_Diff; int ** OFDM_24G_Diff; int ** CCK_24G_Diff; int ** Index24G_BW40_Base; int ** Index24G_CCK_Base; } ;
struct adapter {int dummy; } ;
struct TxPowerInfo24G {int ** BW40_Diff; int ** BW20_Diff; int ** OFDM_Diff; int ** CCK_Diff; int ** IndexBW40_Base; int ** IndexCCK_Base; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (struct adapter*,struct TxPowerInfo24G*,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_4(
 struct adapter *VAR_8, u8 *VAR_9, bool VAR_10
)
{
 struct hal_com_data *VAR_11 = FUNC_0(VAR_8);
 struct TxPowerInfo24G VAR_12;
 u8 VAR_13, VAR_14, VAR_15 = 1;

 FUNC_2(VAR_8, &VAR_12, VAR_9, VAR_10);
 for (VAR_13 = 0 ; VAR_13 < VAR_3 ; VAR_13++) {
  for (VAR_14 = 0 ; VAR_14 < VAR_0; VAR_14++) {
   u8 VAR_16 = 0;

   FUNC_1(VAR_14+1, &VAR_16);

   if (VAR_14 == 14-1) {
    VAR_11->Index24G_CCK_Base[VAR_13][VAR_14] = VAR_12.IndexCCK_Base[VAR_13][5];
    VAR_11->Index24G_BW40_Base[VAR_13][VAR_14] = VAR_12.IndexBW40_Base[VAR_13][VAR_16];
   } else {
    VAR_11->Index24G_CCK_Base[VAR_13][VAR_14] = VAR_12.IndexCCK_Base[VAR_13][VAR_16];
    VAR_11->Index24G_BW40_Base[VAR_13][VAR_14] = VAR_12.IndexBW40_Base[VAR_13][VAR_16];
   }





  }

  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
   VAR_11->CCK_24G_Diff[VAR_13][VAR_15] = VAR_12.CCK_Diff[VAR_13][VAR_15];
   VAR_11->OFDM_24G_Diff[VAR_13][VAR_15] = VAR_12.OFDM_Diff[VAR_13][VAR_15];
   VAR_11->BW20_24G_Diff[VAR_13][VAR_15] = VAR_12.BW20_Diff[VAR_13][VAR_15];
   VAR_11->BW40_24G_Diff[VAR_13][VAR_15] = VAR_12.BW40_Diff[VAR_13][VAR_15];
  }
 }


 if (!VAR_10) {
  VAR_11->EEPROMRegulatory = (VAR_9[VAR_2]&0x7);
  if (VAR_9[VAR_2] == 0xFF)
   VAR_11->EEPROMRegulatory = (VAR_1&0x7);
 } else
  VAR_11->EEPROMRegulatory = 0;

 FUNC_3(VAR_7, VAR_6, ("EEPROMRegulatory = 0x%x\n", VAR_11->EEPROMRegulatory));
}
