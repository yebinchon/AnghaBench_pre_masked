
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath9k_hw_mci {scalar_t__ rx_msg_intr; scalar_t__ raw_intr; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;



void FUNC_0(struct ath_hw *VAR_0, u32 *VAR_1,
         u32 *VAR_2)
{
 struct ath9k_hw_mci *VAR_3 = &VAR_0->btcoex_hw.mci;

 *VAR_1 = VAR_3->raw_intr;
 *VAR_2 = VAR_3->rx_msg_intr;


 VAR_3->raw_intr = 0;
 VAR_3->rx_msg_intr = 0;
}
