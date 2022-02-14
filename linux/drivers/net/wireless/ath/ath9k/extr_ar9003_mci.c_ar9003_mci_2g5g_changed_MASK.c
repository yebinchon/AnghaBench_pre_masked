
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {int update_2g5g; int is_2g; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;



__attribute__((used)) static void FUNC_0(struct ath_hw *VAR_0, bool VAR_1)
{
 struct ath9k_hw_mci *VAR_2 = &VAR_0->btcoex_hw.mci;

 if (!VAR_2->update_2g5g &&
     (VAR_2->is_2g != VAR_1))
  VAR_2->update_2g5g = 1;

 VAR_2->is_2g = VAR_1;
}
