
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {int dummy; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ath9k_hw_mci*) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*,int) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_7)
{
 struct ath9k_hw_mci *VAR_8 = &VAR_7->btcoex_hw.mci;


 FUNC_2(VAR_7, VAR_4, 0xffff0000);
 FUNC_2(VAR_7, VAR_0, 0xffffffff);
 FUNC_2(VAR_7, VAR_1, 0xffffffff);
 FUNC_2(VAR_7, VAR_2, 0xffffffff);
 FUNC_2(VAR_7, VAR_3, 0xffffffff);
 FUNC_1(VAR_7, VAR_5, VAR_6);


 FUNC_5(10);






 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_7, 1);
  FUNC_5(5);
 }

 FUNC_4(VAR_7, 1);
}
