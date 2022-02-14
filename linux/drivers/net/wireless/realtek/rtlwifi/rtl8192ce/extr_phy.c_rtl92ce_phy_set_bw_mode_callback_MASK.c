
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int current_chan_bw; int set_bwmode_inprogress; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_mac {int cur_40_prime_sc; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct rtl_hal*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_6 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_7 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct rtl_priv*,scalar_t__) ;
 int FUNC_10 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_11 (struct rtl_priv*,scalar_t__,int) ;

void FUNC_12(struct ieee80211_hw *VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_8(VAR_13);
 struct rtl_hal *VAR_15 = FUNC_6(FUNC_8(VAR_13));
 struct rtl_phy *VAR_16 = &(VAR_14->phy);
 struct rtl_mac *VAR_17 = FUNC_7(FUNC_8(VAR_13));
 u8 VAR_18;
 u8 VAR_19;

 FUNC_1(VAR_14, VAR_3, VAR_4, "Switch to %s bandwidth\n",
   VAR_16->current_chan_bw == 129 ?
   "20MHz" : "40MHz");

 if (FUNC_2(VAR_15)) {
  VAR_16->set_bwmode_inprogress = 0;
  return;
 }

 VAR_18 = FUNC_9(VAR_14, VAR_7);
 VAR_19 = FUNC_9(VAR_14, VAR_8 + 2);

 switch (VAR_16->current_chan_bw) {
 case 129:
  VAR_18 |= VAR_2;
  FUNC_11(VAR_14, VAR_7, VAR_18);
  break;
 case 128:
  VAR_18 &= ~VAR_2;
  FUNC_11(VAR_14, VAR_7, VAR_18);
  VAR_19 =
      (VAR_19 & 0x90) | (VAR_17->cur_40_prime_sc << 5);
  FUNC_11(VAR_14, VAR_8 + 2, VAR_19);
  break;
 default:
  FUNC_4("unknown bandwidth: %#X\n", VAR_16->current_chan_bw);
  break;
 }

 switch (VAR_16->current_chan_bw) {
 case 129:
  FUNC_10(VAR_13, VAR_10, VAR_1, 0x0);
  FUNC_10(VAR_13, VAR_11, VAR_1, 0x0);
  FUNC_10(VAR_13, VAR_9, FUNC_0(10), 1);
  break;
 case 128:
  FUNC_10(VAR_13, VAR_10, VAR_1, 0x1);
  FUNC_10(VAR_13, VAR_11, VAR_1, 0x1);

  FUNC_10(VAR_13, VAR_6, VAR_0,
         (VAR_17->cur_40_prime_sc >> 1));
  FUNC_10(VAR_13, VAR_12, 0xC00, VAR_17->cur_40_prime_sc);
  FUNC_10(VAR_13, VAR_9, FUNC_0(10), 0);

  FUNC_10(VAR_13, 0x818, (FUNC_0(26) | FUNC_0(27)),
         (VAR_17->cur_40_prime_sc ==
          VAR_5) ? 2 : 1);
  break;
 default:
  FUNC_3("unknown bandwidth: %#X\n",
         VAR_16->current_chan_bw);
  break;
 }
 FUNC_5(VAR_13, VAR_16->current_chan_bw);
 VAR_16->set_bwmode_inprogress = 0;
 FUNC_1(VAR_14, VAR_3, VAR_4, "<==\n");
}
