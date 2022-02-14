
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_btcoex_hw {int wlanactive_gpio; int btpriority_gpio; int btactive_gpio; } ;
struct ath_hw {struct ath_btcoex_hw btcoex_hw; } ;


 int FUNC_0 (struct ath_hw*,int ) ;

void FUNC_1(struct ath_hw *VAR_0)
{
 struct ath_btcoex_hw *VAR_1 = &VAR_0->btcoex_hw;

 FUNC_0(VAR_0, VAR_1->btactive_gpio);
 FUNC_0(VAR_0, VAR_1->btpriority_gpio);
 FUNC_0(VAR_0, VAR_1->wlanactive_gpio);
}
