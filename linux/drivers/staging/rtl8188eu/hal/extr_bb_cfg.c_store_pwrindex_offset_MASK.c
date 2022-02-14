
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hal_data_8188e {scalar_t__** MCSTxPowerLevelOriginalOffset; size_t pwrGroupCnt; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_0(struct adapter *VAR_15,
      u32 VAR_16, u32 VAR_17, u32 VAR_18)
{
 struct hal_data_8188e *VAR_19 = VAR_15->HalData;
 u32 * const VAR_20 =
  VAR_19->MCSTxPowerLevelOriginalOffset[VAR_19->pwrGroupCnt];

 if (VAR_16 == VAR_5)
  VAR_20[0] = VAR_18;
 if (VAR_16 == VAR_6)
  VAR_20[1] = VAR_18;
 if (VAR_16 == VAR_0)
  VAR_20[6] = VAR_18;
 if (VAR_16 == VAR_7 && VAR_17 == 0xffffff00)
  VAR_20[7] = VAR_18;
 if (VAR_16 == VAR_1)
  VAR_20[2] = VAR_18;
 if (VAR_16 == VAR_2)
  VAR_20[3] = VAR_18;
 if (VAR_16 == VAR_3)
  VAR_20[4] = VAR_18;
 if (VAR_16 == VAR_4) {
  VAR_20[5] = VAR_18;
  VAR_19->pwrGroupCnt++;
 }
 if (VAR_16 == VAR_13)
  VAR_20[8] = VAR_18;
 if (VAR_16 == VAR_14)
  VAR_20[9] = VAR_18;
 if (VAR_16 == VAR_8)
  VAR_20[14] = VAR_18;
 if (VAR_16 == VAR_7 && VAR_17 == 0x000000ff)
  VAR_20[15] = VAR_18;
 if (VAR_16 == VAR_9)
  VAR_20[10] = VAR_18;
 if (VAR_16 == VAR_10)
  VAR_20[11] = VAR_18;
 if (VAR_16 == VAR_11)
  VAR_20[12] = VAR_18;
 if (VAR_16 == VAR_12)
  VAR_20[13] = VAR_18;
}
