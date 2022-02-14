
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath9k_hw_mci {scalar_t__ bt_state; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {scalar_t__ power_mode; TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ath_hw*,scalar_t__) ;
 int FUNC_1 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct ath_hw*,int,int*,int) ;
 int FUNC_4 (struct ath_hw*,scalar_t__,int,int) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_common*,int ,char*,int,...) ;

bool FUNC_7(struct ath_hw *VAR_15, u8 VAR_16, u32 VAR_17,
        u32 *VAR_18, u8 VAR_19, bool VAR_20,
        bool VAR_21)
{
 struct ath_common *VAR_22 = FUNC_5(VAR_15);
 struct ath9k_hw_mci *VAR_23 = &VAR_15->btcoex_hw.mci;
 bool VAR_24 = 0;
 u32 VAR_25;
 u32 VAR_26;
 int VAR_27;

 VAR_26 = FUNC_0(VAR_15, VAR_6);
 VAR_25 = FUNC_0(VAR_15, VAR_0);

 if ((VAR_25 == 0xdeadbeef) || !(VAR_25 & VAR_1)) {
  FUNC_6(VAR_22, VAR_12,
   "MCI Not sending 0x%x. MCI is not enabled. full_sleep = %d\n",
   VAR_16, (VAR_15->power_mode == VAR_11) ? 1 : 0);
  FUNC_3(VAR_15, VAR_16, VAR_18, 1);
  return 0;
 } else if (VAR_21 && (VAR_23->bt_state == VAR_13)) {
  FUNC_6(VAR_22, VAR_12,
   "MCI Don't send message 0x%x. BT is in sleep state\n",
   VAR_16);
  FUNC_3(VAR_15, VAR_16, VAR_18, 1);
  return 0;
 }

 if (VAR_20)
  FUNC_1(VAR_15, VAR_6, 0);



 FUNC_1(VAR_15, VAR_8,
    (VAR_9 |
     VAR_7));

 if (VAR_18) {
  for (VAR_27 = 0; (VAR_27 * 4) < VAR_19; VAR_27++)
   FUNC_1(VAR_15, (VAR_10 + VAR_27 * 4),
      *(VAR_18 + VAR_27));
 }

 FUNC_1(VAR_15, VAR_2,
    (FUNC_2((VAR_17 & VAR_14),
        VAR_3) |
     FUNC_2(VAR_19, VAR_5) |
     FUNC_2(VAR_16, VAR_4)));

 if (VAR_20 &&
     !(FUNC_4(VAR_15, VAR_8,
         VAR_9, 500)))
  FUNC_3(VAR_15, VAR_16, VAR_18, 1);
 else {
  FUNC_3(VAR_15, VAR_16, VAR_18, 0);
  VAR_24 = 1;
 }

 if (VAR_20)
  FUNC_1(VAR_15, VAR_6, VAR_26);

 return VAR_24;
}
