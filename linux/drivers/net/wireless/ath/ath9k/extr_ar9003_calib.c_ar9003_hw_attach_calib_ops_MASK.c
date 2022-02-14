
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_private_ops {int setup_calibration; int init_cal_settings; int init_cal; } ;
struct ath_hw_ops {int calibrate; } ;
struct ath_hw {int dummy; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ath_hw_ops* FUNC_1 (struct ath_hw*) ;
 struct ath_hw_private_ops* FUNC_2 (struct ath_hw*) ;

void FUNC_3(struct ath_hw *VAR_5)
{
 struct ath_hw_private_ops *VAR_6 = FUNC_2(VAR_5);
 struct ath_hw_ops *VAR_7 = FUNC_1(VAR_5);

 if (FUNC_0(VAR_5))
  VAR_6->init_cal = VAR_1;
 else
  VAR_6->init_cal = VAR_3;

 VAR_6->init_cal_settings = VAR_2;
 VAR_6->setup_calibration = VAR_4;

 VAR_7->calibrate = VAR_0;
}
