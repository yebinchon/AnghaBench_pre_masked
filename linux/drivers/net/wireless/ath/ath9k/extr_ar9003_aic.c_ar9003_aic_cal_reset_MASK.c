
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath9k_hw_aic {int aic_cal_state; } ;
struct TYPE_2__ {struct ath9k_hw_aic aic; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;

u8 FUNC_0(struct ath_hw *VAR_1)
{
 struct ath9k_hw_aic *VAR_2 = &VAR_1->btcoex_hw.aic;

 VAR_2->aic_cal_state = VAR_0;
 return VAR_2->aic_cal_state;
}
