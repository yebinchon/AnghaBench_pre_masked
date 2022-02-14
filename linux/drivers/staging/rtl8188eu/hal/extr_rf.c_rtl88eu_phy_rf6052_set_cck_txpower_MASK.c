
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ state; } ;
struct mlme_ext_priv {TYPE_1__ sitesurvey_res; } ;
struct dm_priv {scalar_t__ DynamicTxHighPowerLvl; } ;
struct hal_data_8188e {scalar_t__ EEPROMRegulatory; int** MCSTxPowerLevelOriginalOffset; int odmpriv; struct dm_priv dmpriv; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct hal_data_8188e* HalData; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct adapter*,int ,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int,size_t*,int*) ;

void FUNC_2(struct adapter *VAR_11, u8 *VAR_12)
{
 struct hal_data_8188e *VAR_13 = VAR_11->HalData;
 struct dm_priv *VAR_14 = &VAR_13->dmpriv;
 struct mlme_ext_priv *VAR_15 = &VAR_11->mlmeextpriv;
 u32 VAR_16[2] = {0, 0}, VAR_17 = 0, VAR_18;
 u8 VAR_19, VAR_20;
 u8 *VAR_21;
 u8 VAR_22;

 if (VAR_15->sitesurvey_res.state == VAR_3) {
  VAR_16[VAR_1] = 0x3f3f3f3f;
  VAR_16[VAR_2] = 0x3f3f3f3f;
  for (VAR_19 = VAR_1; VAR_19 <= VAR_2; VAR_19++) {
   VAR_16[VAR_19] = VAR_12[VAR_19] |
          (VAR_12[VAR_19]<<8) |
          (VAR_12[VAR_19]<<16) |
          (VAR_12[VAR_19]<<24);
  }
 } else {
  if (VAR_14->DynamicTxHighPowerLvl == VAR_4) {
   VAR_16[VAR_1] = 0x10101010;
   VAR_16[VAR_2] = 0x10101010;
  } else if (VAR_14->DynamicTxHighPowerLvl == VAR_5) {
   VAR_16[VAR_1] = 0x00000000;
   VAR_16[VAR_2] = 0x00000000;
  } else {
   for (VAR_19 = VAR_1; VAR_19 <= VAR_2; VAR_19++) {
    VAR_16[VAR_19] = VAR_12[VAR_19] |
            (VAR_12[VAR_19]<<8) |
            (VAR_12[VAR_19]<<16) |
            (VAR_12[VAR_19]<<24);
   }
   if (VAR_13->EEPROMRegulatory == 0) {
    VAR_17 = VAR_13->MCSTxPowerLevelOriginalOffset[0][6] +
      (VAR_13->MCSTxPowerLevelOriginalOffset[0][7]<<8);
    VAR_16[VAR_1] += VAR_17;

    VAR_17 = VAR_13->MCSTxPowerLevelOriginalOffset[0][14] +
      (VAR_13->MCSTxPowerLevelOriginalOffset[0][15]<<24);
    VAR_16[VAR_2] += VAR_17;
   }
  }
 }
 for (VAR_19 = VAR_1; VAR_19 <= VAR_2; VAR_19++) {
  VAR_21 = (u8 *)(&(VAR_16[VAR_19]));
  for (VAR_20 = 0; VAR_20 < 4; VAR_20++) {
   if (*VAR_21 > VAR_0)
    *VAR_21 = VAR_0;
   VAR_21++;
  }
 }
 FUNC_1(&VAR_13->odmpriv, 1, &VAR_22,
     &VAR_18);

 if (VAR_22 == 1) {

  VAR_16[0] += VAR_18;
  VAR_16[1] += VAR_18;
 } else if (VAR_22 == 2) {

  VAR_16[0] -= VAR_18;
  VAR_16[1] -= VAR_18;
 }


 VAR_17 = VAR_16[VAR_1]&0xff;
 FUNC_0(VAR_11, VAR_8, VAR_7, VAR_17);
 VAR_17 = VAR_16[VAR_1]>>8;
 FUNC_0(VAR_11, VAR_9, 0xffffff00, VAR_17);


 VAR_17 = VAR_16[VAR_2]>>24;
 FUNC_0(VAR_11, VAR_9, VAR_6, VAR_17);
 VAR_17 = VAR_16[VAR_2]&0x00ffffff;
 FUNC_0(VAR_11, VAR_10, 0xffffff00, VAR_17);
}
