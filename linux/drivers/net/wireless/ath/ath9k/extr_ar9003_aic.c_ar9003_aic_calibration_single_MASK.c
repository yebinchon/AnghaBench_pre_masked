
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath9k_hw_mci {int config; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_hw*,int) ;
 int FUNC_2 (struct ath_hw*,int) ;

u8 FUNC_3(struct ath_hw *VAR_1)
{
 struct ath9k_hw_mci *VAR_2 = &VAR_1->btcoex_hw.mci;
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->config, VAR_0);

 (void) FUNC_2(VAR_1, VAR_4);
 VAR_3 = FUNC_1(VAR_1, 1);

 return VAR_3;
}
