
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct hal_data_8188e {size_t** Index24G_CCK_Base; size_t** Index24G_BW40_Base; size_t** OFDM_24G_Diff; size_t** BW20_24G_Diff; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct adapter *VAR_2, u8 VAR_3, u8 *VAR_4,
          u8 *VAR_5, u8 *VAR_6, u8 *VAR_7)
{
 struct hal_data_8188e *VAR_8 = VAR_2->HalData;
 u8 VAR_9 = (VAR_3 - 1);
 u8 VAR_10 = 0, VAR_11;

 VAR_11 = 1;

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if (VAR_10 == VAR_0) {
   VAR_4[VAR_10] = VAR_8->Index24G_CCK_Base[VAR_10][VAR_9];
   VAR_5[VAR_10] = VAR_8->Index24G_BW40_Base[VAR_0][VAR_9]+
         VAR_8->OFDM_24G_Diff[VAR_10][VAR_0];

   VAR_6[VAR_10] = VAR_8->Index24G_BW40_Base[VAR_0][VAR_9]+
         VAR_8->BW20_24G_Diff[VAR_10][VAR_0];
   VAR_7[VAR_10] = VAR_8->Index24G_BW40_Base[VAR_10][VAR_9];
  } else if (VAR_10 == VAR_1) {
   VAR_4[VAR_10] = VAR_8->Index24G_CCK_Base[VAR_10][VAR_9];
   VAR_5[VAR_10] = VAR_8->Index24G_BW40_Base[VAR_0][VAR_9]+
   VAR_8->BW20_24G_Diff[VAR_0][VAR_9]+
   VAR_8->BW20_24G_Diff[VAR_10][VAR_9];

   VAR_6[VAR_10] = VAR_8->Index24G_BW40_Base[VAR_0][VAR_9]+
   VAR_8->BW20_24G_Diff[VAR_10][VAR_0]+
   VAR_8->BW20_24G_Diff[VAR_10][VAR_9];
   VAR_7[VAR_10] = VAR_8->Index24G_BW40_Base[VAR_10][VAR_9];
  }
 }
}
