
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath9k_hw_mci {scalar_t__ bt_state; scalar_t__ bt_version_known; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int *,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_4,
            bool VAR_5)
{
 struct ath9k_hw_mci *VAR_6 = &VAR_4->btcoex_hw.mci;
 u32 VAR_7[4] = {0, 0, 0, 0};

 if (VAR_6->bt_version_known ||
     (VAR_6->bt_state == VAR_0))
  return;

 FUNC_0(VAR_7, VAR_2,
    VAR_3);
 FUNC_1(VAR_4, VAR_1, 0, VAR_7, 16, VAR_5, 1);
}
