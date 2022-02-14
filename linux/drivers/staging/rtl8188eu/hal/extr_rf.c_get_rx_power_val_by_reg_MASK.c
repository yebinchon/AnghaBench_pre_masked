
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dm_priv {scalar_t__ DynamicTxHighPowerLvl; } ;
struct hal_data_8188e {int EEPROMRegulatory; int** MCSTxPowerLevelOriginalOffset; int pwrGroupCnt; int PGMaxGroup; int** TxPwrLegacyHtDiff; int** TxPwrHt20Diff; int** PwrGroupHT40; int** PwrGroupHT20; int CurrentChannelBW; struct dm_priv dmpriv; } ;
struct adapter {struct hal_data_8188e* HalData; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_4, u8 VAR_5,
        u8 VAR_6, u32 *VAR_7, u32 *VAR_8,
        u32 *VAR_9)
{
 struct hal_data_8188e *VAR_10 = VAR_4->HalData;
 struct dm_priv *VAR_11 = &VAR_10->dmpriv;
 u8 VAR_12, VAR_13 = 0, VAR_14[4], VAR_15;
 s8 VAR_16 = 0;
 u32 VAR_17, VAR_18, VAR_19;
 u8 VAR_20 = VAR_10->EEPROMRegulatory;



 for (VAR_19 = 0; VAR_19 < 2; VAR_19++) {
  u8 VAR_21 = VAR_6 + (VAR_19 ? 8 : 0);

  switch (VAR_20) {
  case 0:
   VAR_13 = 0;
   VAR_17 = VAR_10->MCSTxPowerLevelOriginalOffset[VAR_13][VAR_6+(VAR_19 ? 8 : 0)] +
    ((VAR_6 < 2) ? VAR_7[VAR_19] : VAR_8[VAR_19]);
   break;
  case 1:

   if (VAR_10->pwrGroupCnt == 1)
    VAR_13 = 0;
   if (VAR_10->pwrGroupCnt >= VAR_10->PGMaxGroup)
    FUNC_0(VAR_5, &VAR_13);

   VAR_17 = VAR_10->MCSTxPowerLevelOriginalOffset[VAR_13][VAR_6+(VAR_19 ? 8 : 0)] +
     ((VAR_6 < 2) ? VAR_7[VAR_19] : VAR_8[VAR_19]);
   break;
  case 2:

   VAR_17 = (VAR_6 < 2) ? VAR_7[VAR_19] : VAR_8[VAR_19];
   break;
  case 3:

   VAR_13 = 0;

   if (VAR_6 < 2)
    VAR_16 = VAR_10->TxPwrLegacyHtDiff[VAR_19][VAR_5-1];
   else if (VAR_10->CurrentChannelBW == VAR_0)
    VAR_16 = VAR_10->TxPwrHt20Diff[VAR_19][VAR_5-1];

   if (VAR_10->CurrentChannelBW == VAR_1)
    VAR_15 = VAR_10->PwrGroupHT40[VAR_19][VAR_5-1];
   else
    VAR_15 = VAR_10->PwrGroupHT20[VAR_19][VAR_5-1];

   if (VAR_16 >= VAR_15)
    VAR_16 = 0;
   else
    VAR_16 = VAR_15 - VAR_16;

   for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
    VAR_14[VAR_12] = (u8)((VAR_10->MCSTxPowerLevelOriginalOffset[VAR_13][VAR_21] &
        (0x7f << (VAR_12 * 8))) >> (VAR_12 * 8));

    if (VAR_14[VAR_12] > VAR_16)
     VAR_14[VAR_12] = VAR_16;
   }
   VAR_18 = (VAR_14[3]<<24) |
      (VAR_14[2]<<16) |
      (VAR_14[1]<<8) |
      (VAR_14[0]);
   VAR_17 = VAR_18 + ((VAR_6 < 2) ? VAR_7[VAR_19] : VAR_8[VAR_19]);
   break;
  default:
   VAR_13 = 0;
   VAR_17 = VAR_10->MCSTxPowerLevelOriginalOffset[VAR_13][VAR_21] +
     ((VAR_6 < 2) ? VAR_7[VAR_19] : VAR_8[VAR_19]);
   break;
  }




  if (VAR_11->DynamicTxHighPowerLvl == VAR_2)
   VAR_17 = 0x14141414;
  else if (VAR_11->DynamicTxHighPowerLvl == VAR_3)
   VAR_17 = 0x00000000;

  *(VAR_9+VAR_19) = VAR_17;
 }
}
