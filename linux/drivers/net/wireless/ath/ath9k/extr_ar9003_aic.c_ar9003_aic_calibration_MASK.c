
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


 int FUNC_0 (struct ath_hw*,int) ;
 int FUNC_1 (struct ath_hw*,int) ;

u8 FUNC_2(struct ath_hw *VAR_1)
{
 struct ath9k_hw_aic *VAR_2 = &VAR_1->btcoex_hw.aic;
 u8 VAR_3 = VAR_0;

 switch (VAR_2->aic_cal_state) {
 case 129:
  VAR_3 = FUNC_1(VAR_1, 1);
  break;
 case 128:
  VAR_3 = FUNC_0(VAR_1, 0);
  break;
 case 130:
  VAR_3 = 130;
  break;
 default:
  break;
 }

 return VAR_3;
}
