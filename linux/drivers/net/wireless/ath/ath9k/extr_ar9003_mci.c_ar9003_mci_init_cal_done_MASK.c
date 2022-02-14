
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath9k_hw_mci {scalar_t__ bt_state; int config; int wlan_cal_done; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct ath_hw*,int ,int ,scalar_t__*,int,int,int) ;

void FUNC_2(struct ath_hw *VAR_5)
{
 struct ath9k_hw_mci *VAR_6 = &VAR_5->btcoex_hw.mci;
 u32 VAR_7[4] = {0, 0, 0, 0};

 if ((VAR_6->bt_state != VAR_1) ||
     (VAR_6->config & VAR_0))
  return;

 FUNC_0(VAR_7, VAR_3);
 VAR_7[VAR_4] = VAR_6->wlan_cal_done++;
 FUNC_1(VAR_5, VAR_2, 0, VAR_7, 16, 1, 0);
}
