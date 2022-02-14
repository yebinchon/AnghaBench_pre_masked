
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {scalar_t__ bt_state; int ready; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath9k_hw_cal_data {int cal_flags; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct ath_hw*,int ,int) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int) ;
 int FUNC_7 (struct ath_hw*,int) ;
 int FUNC_8 (struct ath_hw*,int) ;
 int FUNC_9 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int) ;

int FUNC_12(struct ath_hw *VAR_11, struct ath9k_channel *VAR_12,
    struct ath9k_hw_cal_data *VAR_13)
{
 struct ath9k_hw_mci *VAR_14 = &VAR_11->btcoex_hw.mci;

 if (!VAR_14->ready)
  return 0;

 if (!FUNC_0(VAR_12) || (VAR_14->bt_state != VAR_7))
  goto exit;

 if (!FUNC_4(VAR_11, VAR_1) &&
     !FUNC_4(VAR_11, VAR_2))
  goto exit;







 FUNC_3(VAR_11, VAR_0,
    (VAR_1 |
     VAR_2));

 FUNC_6(VAR_11, 1);
 FUNC_8(VAR_11, 1);
 FUNC_11(1);

 if (FUNC_0(VAR_12))
  FUNC_7(VAR_11, 1);

 VAR_14->bt_state = VAR_6;

 FUNC_1(VAR_11, VAR_3,
      1 << VAR_4);

 if (VAR_13) {
  FUNC_10(VAR_10, &VAR_13->cal_flags);
  FUNC_10(VAR_9, &VAR_13->cal_flags);
  FUNC_10(VAR_8, &VAR_13->cal_flags);
 }

 if (!FUNC_9(VAR_11, VAR_12))
  return -VAR_5;

 FUNC_2(VAR_11, VAR_3,
      1 << VAR_4);

exit:
 FUNC_5(VAR_11);
 return 0;
}
