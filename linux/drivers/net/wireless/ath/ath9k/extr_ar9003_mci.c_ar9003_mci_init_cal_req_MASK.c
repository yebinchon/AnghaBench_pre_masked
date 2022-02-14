
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath9k_hw_mci {scalar_t__ bt_state; int config; int wlan_cal_seq; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (struct ath_hw*,int ,int ,scalar_t__*,int,int,int) ;
 scalar_t__ FUNC_2 (struct ath_hw*,int ,int ,int) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;

void FUNC_5(struct ath_hw *VAR_7, bool *VAR_8)
{
 struct ath_common *VAR_9 = FUNC_3(VAR_7);
 struct ath9k_hw_mci *VAR_10 = &VAR_7->btcoex_hw.mci;
 u32 VAR_11[4] = {0, 0, 0, 0};

 if ((VAR_10->bt_state != VAR_2) ||
     (VAR_10->config & VAR_0))
  return;

 FUNC_0(VAR_11, VAR_5);
 VAR_11[VAR_6] = VAR_10->wlan_cal_seq++;

 FUNC_1(VAR_7, VAR_3, 0, VAR_11, 16, 1, 0);

 if (FUNC_2(VAR_7, VAR_4, 0, 50000)) {
  FUNC_4(VAR_9, VAR_1, "MCI BT_CAL_GRANT received\n");
 } else {
  *VAR_8 = 0;
  FUNC_4(VAR_9, VAR_1, "MCI BT_CAL_GRANT not received\n");
 }
}
