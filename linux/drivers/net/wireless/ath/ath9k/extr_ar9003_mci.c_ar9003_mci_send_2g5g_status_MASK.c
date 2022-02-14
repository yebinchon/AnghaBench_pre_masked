
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath9k_hw_mci {scalar_t__ bt_state; scalar_t__ is_2g; int update_2g5g; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath_hw*,int,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_7, bool VAR_8)
{
 struct ath9k_hw_mci *VAR_9 = &VAR_7->btcoex_hw.mci;
 u32 VAR_10, VAR_11;

 if (!VAR_9->update_2g5g || (VAR_9->bt_state == VAR_4))
  return;

 if (VAR_9->is_2g) {
  VAR_11 = VAR_0;
  VAR_10 = VAR_1;
 } else {
  VAR_11 = VAR_2;
  VAR_10 = VAR_3;
 }

 if (VAR_11)
  FUNC_0(VAR_7, VAR_8,
           VAR_5,
           VAR_11);
 if (VAR_10)
  FUNC_0(VAR_7, VAR_8,
           VAR_6,
           VAR_10);
}
