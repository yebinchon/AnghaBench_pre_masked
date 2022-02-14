
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {scalar_t__ bt_state; int ready; int halted_bt_gpm; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int,int) ;
 scalar_t__ FUNC_1 (struct ath_hw*,int ) ;

void FUNC_2(struct ath_hw *VAR_2)
{
 struct ath9k_hw_mci *VAR_3 = &VAR_2->btcoex_hw.mci;

 if (FUNC_1(VAR_2, VAR_1) &&
     (VAR_3->bt_state != VAR_0) &&
     !VAR_3->halted_bt_gpm) {
  FUNC_0(VAR_2, 1, 1);
 }

 VAR_3->ready = 0;
}
