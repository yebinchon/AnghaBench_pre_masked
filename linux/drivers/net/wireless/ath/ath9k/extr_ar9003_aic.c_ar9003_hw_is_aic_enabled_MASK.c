
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {int config; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ath_hw *VAR_1)
{
 struct ath9k_hw_mci *VAR_2 = &VAR_1->btcoex_hw.mci;





 return 0;

 if (VAR_2->config & VAR_0)
  return 0;

 return 1;
}
