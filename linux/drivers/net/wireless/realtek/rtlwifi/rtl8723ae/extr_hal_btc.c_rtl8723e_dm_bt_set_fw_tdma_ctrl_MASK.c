
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int fw_coexist_all_off; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct ieee80211_hw*,int,int,scalar_t__*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_8,
         bool VAR_9, u8 VAR_10,
         u8 VAR_11, u8 VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_3(VAR_8);
 u8 VAR_14[1] = {0};
 u8 VAR_15[1] = {0};

 VAR_14[0] = 0;
 VAR_15[0] = 0;

 if (VAR_9) {
  FUNC_1(VAR_13, VAR_0, VAR_1,
    "[BTCoex], set BT PTA update manager to trigger update!!\n");
  VAR_15[0] |= FUNC_0(0);

  FUNC_1(VAR_13, VAR_0, VAR_1,
   "[BTCoex], turn TDMA mode ON!!\n");
  VAR_14[0] |= FUNC_0(0);
  if (VAR_2 == VAR_10) {
   FUNC_1(VAR_13, VAR_0, VAR_1,
   "[BTCoex], TDMA_1ANT\n");
   VAR_14[0] |= FUNC_0(1);
  } else if (VAR_3 == VAR_10) {
   FUNC_1(VAR_13, VAR_0, VAR_1,
   "[BTCoex], TDMA_2ANT\n");
  } else {
   FUNC_1(VAR_13, VAR_0, VAR_1,
   "[BTCoex], Unknown Ant\n");
  }

  if (VAR_6 == VAR_11) {
   FUNC_1(VAR_13, VAR_0, VAR_1,
   "[BTCoex], TDMA_NAV_OFF\n");
  } else if (VAR_7 == VAR_11) {
   FUNC_1(VAR_13, VAR_0, VAR_1,
   "[BTCoex], TDMA_NAV_ON\n");
   VAR_14[0] |= FUNC_0(2);
  }

  if (VAR_4 == VAR_12) {
   FUNC_1(VAR_13, VAR_0, VAR_1,
    "[BTCoex], TDMA_DAC_SWING_OFF\n");
  } else if (VAR_5 == VAR_12) {
   FUNC_1(VAR_13, VAR_0, VAR_1,
    "[BTCoex], TDMA_DAC_SWING_ON\n");
   VAR_14[0] |= FUNC_0(4);
  }
  VAR_13->btcoexist.fw_coexist_all_off = 0;
 } else {
  FUNC_1(VAR_13, VAR_0, VAR_1,
    "[BTCoex], set BT PTA update manager to no update!!\n");
  FUNC_1(VAR_13, VAR_0, VAR_1,
    "[BTCoex], turn TDMA mode OFF!!\n");
 }

 FUNC_1(VAR_13, VAR_0, VAR_1,
   "[BTCoex], FW2AntTDMA, write 0x26=0x%x\n",
   VAR_15[0]);
 FUNC_2(VAR_8, 0x26, 1, VAR_15);

 FUNC_1(VAR_13, VAR_0, VAR_1,
  "[BTCoex], FW2AntTDMA, write 0x14=0x%x\n",
  VAR_14[0]);
 FUNC_2(VAR_8, 0x14, 1, VAR_14);
}
