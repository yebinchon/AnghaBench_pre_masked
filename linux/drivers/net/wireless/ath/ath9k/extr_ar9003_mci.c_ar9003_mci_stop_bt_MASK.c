
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {int ready; int bt_state; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (int) ;

void FUNC_4(struct ath_hw *VAR_2, bool VAR_3)
{
 struct ath9k_hw_mci *VAR_4 = &VAR_2->btcoex_hw.mci;

 FUNC_1(VAR_2);

 if (VAR_4->ready && !VAR_3) {
  FUNC_2(VAR_2);
  FUNC_3(20);
  FUNC_0(VAR_2, VAR_0, 0);
 }

 VAR_4->bt_state = VAR_1;
 VAR_4->ready = 0;
}
