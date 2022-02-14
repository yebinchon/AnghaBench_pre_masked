
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath9k_hw_mci {scalar_t__ gpm_buf; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;

__attribute__((used)) static bool FUNC_1(struct ath_hw *VAR_2, u32 VAR_3)
{
 struct ath9k_hw_mci *VAR_4 = &VAR_2->btcoex_hw.mci;
 u32 *VAR_5;
 u32 VAR_6, VAR_7;

 if (VAR_3 == VAR_0)
  return 0;

 VAR_7 = VAR_3 << 4;

 VAR_5 = (u32 *)(VAR_4->gpm_buf + VAR_7);
 VAR_6 = FUNC_0(VAR_5);

 if (VAR_6 == VAR_1)
  return 0;

 return 1;
}
