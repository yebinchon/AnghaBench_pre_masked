
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
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;
 int FUNC_5 (struct ath_common*,char*) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_6,
     struct ath9k_cal_list *VAR_7)
{
 struct ath_common *VAR_8 = FUNC_3(VAR_6);


 switch (VAR_7->calData->calType) {
 case 128:




  FUNC_0(VAR_6, VAR_2,
         VAR_4,
         VAR_7->calData->calCountMax);
  FUNC_2(VAR_6, VAR_0, VAR_1);

  FUNC_4(VAR_8, VAR_5,
   "starting IQ Mismatch Calibration\n");


  FUNC_1(VAR_6, VAR_2, VAR_3);
  break;
 default:
  FUNC_5(VAR_8, "Invalid calibration type\n");
  break;
 }
}
