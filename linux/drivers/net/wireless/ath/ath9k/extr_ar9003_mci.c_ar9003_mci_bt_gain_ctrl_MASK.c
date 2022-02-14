
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {int is_2g; int update_2g5g; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int) ;
 int FUNC_2 (struct ath_hw*,int) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;
 int FUNC_5 (int) ;

void FUNC_6(struct ath_hw *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_3(VAR_3);
 struct ath9k_hw_mci *VAR_5 = &VAR_3->btcoex_hw.mci;

 FUNC_4(VAR_4, VAR_2, "Give LNA and SPDT control to BT\n");

 FUNC_2(VAR_3, 1);
 FUNC_5(50);

 FUNC_0(VAR_3, VAR_1, VAR_0);
 VAR_5->is_2g = 0;
 VAR_5->update_2g5g = 1;
 FUNC_1(VAR_3, 1);


 VAR_5->update_2g5g = 1;
}
