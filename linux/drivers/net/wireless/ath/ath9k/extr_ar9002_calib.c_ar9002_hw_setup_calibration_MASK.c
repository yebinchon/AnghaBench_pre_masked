
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
struct ath9k_cal_list {TYPE_1__* calData; } ;
struct TYPE_2__ {int calType; int calCountMax; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int FUNC_1 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_common*,int ,char*) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_7,
     struct ath9k_cal_list *VAR_8)
{
 struct ath_common *VAR_9 = FUNC_4(VAR_7);

 FUNC_1(VAR_7, FUNC_0(0),
        VAR_5,
        VAR_8->calData->calCountMax);

 switch (VAR_8->calData->calType) {
 case 128:
  FUNC_3(VAR_7, VAR_0, VAR_3);
  FUNC_5(VAR_9, VAR_6,
   "starting IQ Mismatch Calibration\n");
  break;
 case 129:
  FUNC_3(VAR_7, VAR_0, VAR_2);
  FUNC_5(VAR_9, VAR_6, "starting ADC Gain Calibration\n");
  break;
 case 130:
  FUNC_3(VAR_7, VAR_0, VAR_1);
  FUNC_5(VAR_9, VAR_6, "starting ADC DC Calibration\n");
  break;
 }

 FUNC_2(VAR_7, FUNC_0(0),
      VAR_4);
}
