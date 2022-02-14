
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath9k_hw_mci {scalar_t__ bt_state; int unhalt_bt_gpm; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int,int) ;
 int FUNC_1 (struct ath_hw*,int) ;
 int FUNC_2 (struct ath_hw*,int) ;
 scalar_t__ FUNC_3 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_2)
{
 struct ath9k_hw_mci *VAR_3 = &VAR_2->btcoex_hw.mci;
 u32 VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_1);

 if (VAR_3->bt_state != VAR_4)
  VAR_3->bt_state = VAR_4;

 if (VAR_3->bt_state != VAR_0) {

  FUNC_1(VAR_2, 1);
  FUNC_2(VAR_2, 1);

  if (VAR_3->unhalt_bt_gpm == 1)
   FUNC_0(VAR_2, 0, 1);
 }
}
