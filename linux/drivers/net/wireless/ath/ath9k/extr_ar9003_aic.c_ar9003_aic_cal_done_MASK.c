
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_aic {int aic_cal_state; } ;
struct TYPE_2__ {struct ath9k_hw_aic aic; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_4)
{
 struct ath9k_hw_aic *VAR_5 = &VAR_4->btcoex_hw.aic;


 FUNC_1(VAR_4, VAR_3,
    (FUNC_0(VAR_4, VAR_3) &
     ~VAR_2));

 if (FUNC_2(VAR_4))
  VAR_5->aic_cal_state = VAR_0;
 else
  VAR_5->aic_cal_state = VAR_1;
}
