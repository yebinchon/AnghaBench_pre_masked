
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {int config; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_5)
{
 struct ath9k_hw_mci *VAR_6 = &VAR_5->btcoex_hw.mci;

 if (!FUNC_0(VAR_5))
  return;

 if (VAR_6->config & VAR_3) {
  FUNC_1(VAR_5, VAR_0,
         VAR_2, 1);
  FUNC_1(VAR_5, VAR_0,
         VAR_1,
         VAR_4);
 } else {
  FUNC_1(VAR_5, VAR_0,
         VAR_2, 0);
 }
}
