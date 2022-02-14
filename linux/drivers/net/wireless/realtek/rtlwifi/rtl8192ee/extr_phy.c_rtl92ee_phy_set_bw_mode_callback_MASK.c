
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


 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct rtl_hal*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_6 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct rtl_priv*,scalar_t__) ;
 int FUNC_9 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_10 (struct rtl_priv*,scalar_t__,int) ;

void FUNC_11(struct ieee80211_hw *VAR_14)
{
 struct rtl_priv *VAR_15 = FUNC_7(VAR_14);
 struct rtl_hal *VAR_16 = FUNC_5(FUNC_7(VAR_14));
 struct rtl_phy *VAR_17 = &VAR_15->phy;
 struct rtl_mac *VAR_18 = FUNC_6(FUNC_7(VAR_14));
 u8 VAR_19;
 u8 VAR_20;

 FUNC_1(VAR_15, VAR_3, VAR_5,
   "Switch to %s bandwidth\n",
    VAR_17->current_chan_bw == 129 ?
    "20MHz" : "40MHz");

 if (FUNC_2(VAR_16)) {
  VAR_17->set_bwmode_inprogress = 0;
  return;
 }

 VAR_19 = FUNC_8(VAR_15, VAR_8);
 VAR_20 = FUNC_8(VAR_15, VAR_9 + 2);

 switch (VAR_17->current_chan_bw) {
 case 129:
  VAR_19 |= VAR_2;
  FUNC_10(VAR_15, VAR_8, VAR_19);
  break;
 case 128:
  VAR_19 &= ~VAR_2;
  FUNC_10(VAR_15, VAR_8, VAR_19);
  VAR_20 = (VAR_20 & 0x90) |
          (VAR_18->cur_40_prime_sc << 5);
  FUNC_10(VAR_15, VAR_9 + 2, VAR_20);
  break;
 default:
  FUNC_3("unknown bandwidth: %#X\n",
         VAR_17->current_chan_bw);
  break;
 }

 switch (VAR_17->current_chan_bw) {
 case 129:
  FUNC_9(VAR_14, VAR_10, VAR_1, 0x0);
  FUNC_9(VAR_14, VAR_11, VAR_1, 0x0);
  FUNC_9(VAR_14, VAR_12,
         (FUNC_0(31) | FUNC_0(30)), 0);
  break;
 case 128:
  FUNC_9(VAR_14, VAR_10, VAR_1, 0x1);
  FUNC_9(VAR_14, VAR_11, VAR_1, 0x1);
  FUNC_9(VAR_14, VAR_7, VAR_0,
         (VAR_18->cur_40_prime_sc >> 1));
  FUNC_9(VAR_14, VAR_13, 0xC00,
         VAR_18->cur_40_prime_sc);

  FUNC_9(VAR_14, 0x818, (FUNC_0(26) | FUNC_0(27)),
         (VAR_18->cur_40_prime_sc ==
          VAR_6) ? 2 : 1);
  break;
 default:
  FUNC_3("unknown bandwidth: %#X\n",
         VAR_17->current_chan_bw);
  break;
 }
 FUNC_4(VAR_14, VAR_17->current_chan_bw);
 VAR_17->set_bwmode_inprogress = 0;
 FUNC_1(VAR_15, VAR_3, VAR_4, "\n");
}
