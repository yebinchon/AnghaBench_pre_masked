
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int fw_coexist_all_off; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct ieee80211_hw*,int,int,scalar_t__*) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_6,
      bool VAR_7, u8 VAR_8,
      u8 VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_5(VAR_6);
 struct rtl_hal *VAR_11 = FUNC_4(FUNC_5(VAR_6));

 u8 VAR_12[2] = {0};


 if (FUNC_1(VAR_11->version)) {
  FUNC_2(VAR_10, VAR_0, VAR_1,
    "[BTCoex], not 8723B cut, don't set Traditional TDMA!!\n");
  return;
 }

 if (VAR_7) {
  FUNC_2(VAR_10, VAR_0, VAR_1,
    "[BTCoex], turn TTDMA mode ON!!\n");
  VAR_12[0] |= FUNC_0(0);
  if (VAR_2 == VAR_8) {
   FUNC_2(VAR_10, VAR_0, VAR_1,
     "[BTCoex], TTDMA_1ANT\n");
   VAR_12[0] |= FUNC_0(1);
  } else if (VAR_3 == VAR_8) {
   FUNC_2(VAR_10, VAR_0, VAR_1,
   "[BTCoex], TTDMA_2ANT\n");
  } else {
   FUNC_2(VAR_10, VAR_0, VAR_1,
   "[BTCoex], Unknown Ant\n");
  }

  if (VAR_4 == VAR_9) {
   FUNC_2(VAR_10, VAR_0, VAR_1,
   "[BTCoex], TTDMA_NAV_OFF\n");
  } else if (VAR_5 == VAR_9) {
   FUNC_2(VAR_10, VAR_0, VAR_1,
   "[BTCoex], TTDMA_NAV_ON\n");
   VAR_12[1] |= FUNC_0(0);
  }

  VAR_10->btcoexist.fw_coexist_all_off = 0;
 } else {
  FUNC_2(VAR_10, VAR_0, VAR_1,
   "[BTCoex], turn TTDMA mode OFF!!\n");
 }

 FUNC_2(VAR_10, VAR_0, VAR_1,
  "[BTCoex], FW Traditional TDMA, write 0x33=0x%x\n",
  VAR_12[0] << 8 | VAR_12[1]);

 FUNC_3(VAR_6, 0x33, 2, VAR_12);
}
