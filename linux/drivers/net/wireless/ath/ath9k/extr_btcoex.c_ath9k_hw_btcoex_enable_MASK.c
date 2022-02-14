
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_btcoex_hw {int btactive_gpio; int enabled; } ;
struct ath_hw {struct ath_btcoex_hw btcoex_hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;




 int FUNC_1 (struct ath_hw*,int ,int,int) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int const FUNC_5 (struct ath_hw*) ;

void FUNC_6(struct ath_hw *VAR_1)
{
 struct ath_btcoex_hw *VAR_2 = &VAR_1->btcoex_hw;

 switch (FUNC_5(VAR_1)) {
 case 128:
  return;
 case 131:
  FUNC_2(VAR_1);
  break;
 case 130:
  FUNC_3(VAR_1);
  break;
 case 129:
  FUNC_4(VAR_1);
  break;
 }

 if (FUNC_5(VAR_1) != 129 &&
     !FUNC_0(VAR_1)) {
  FUNC_1(VAR_1, VAR_0,
   (0x2 << (VAR_2->btactive_gpio * 2)),
   (0x3 << (VAR_2->btactive_gpio * 2)));
 }

 VAR_1->btcoex_hw.enabled = 1;
}
