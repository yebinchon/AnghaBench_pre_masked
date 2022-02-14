
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {int config; scalar_t__ is_2g; int update_2g5g; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_5 ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_hw*,int) ;
 int FUNC_6 (struct ath_hw*,int) ;
 int FUNC_7 (struct ath_hw*,int) ;
 int FUNC_8 (int) ;

void FUNC_9(struct ath_hw *VAR_6, bool VAR_7)
{
 struct ath9k_hw_mci *VAR_8 = &VAR_6->btcoex_hw.mci;

 if (!VAR_8->update_2g5g && !VAR_7)
  return;

 if (VAR_8->is_2g) {
  FUNC_5(VAR_6, 1);
  FUNC_7(VAR_6, 1);
  FUNC_8(5);

  FUNC_1(VAR_6, VAR_1,
       VAR_2);
  FUNC_1(VAR_6, VAR_3,
       VAR_0);

  if (!(VAR_8->config & VAR_5))
   FUNC_4(VAR_6, 1);

  if (FUNC_0(VAR_6))
   FUNC_3(VAR_6, VAR_4, 0x02);
 } else {
  FUNC_6(VAR_6, 1);
  FUNC_8(5);

  FUNC_2(VAR_6, VAR_1,
       VAR_2);
  FUNC_2(VAR_6, VAR_3,
       VAR_0);

  FUNC_4(VAR_6, 0);
  FUNC_5(VAR_6, 1);
 }
}
