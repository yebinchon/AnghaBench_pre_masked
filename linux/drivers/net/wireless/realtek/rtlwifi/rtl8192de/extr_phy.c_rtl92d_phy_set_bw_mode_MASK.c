
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int set_bwmode_inprogress; int current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_mac {int cur_40_prime_sc; } ;
struct rtl_hal {int current_bandtype; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ FUNC_3 (struct rtl_hal*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct ieee80211_hw*,unsigned long*) ;
 int FUNC_6 (struct ieee80211_hw*,int) ;
 int FUNC_7 (struct ieee80211_hw*,unsigned long*) ;
 struct rtl_hal* FUNC_8 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_9 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct rtl_priv*,scalar_t__) ;
 int FUNC_12 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_13 (struct rtl_priv*,scalar_t__,int) ;

void FUNC_14(struct ieee80211_hw *VAR_16,
       enum nl80211_channel_type VAR_17)
{
 struct rtl_priv *VAR_18 = FUNC_10(VAR_16);
 struct rtl_phy *VAR_19 = &(VAR_18->phy);
 struct rtl_hal *VAR_20 = FUNC_8(FUNC_10(VAR_16));
 struct rtl_mac *VAR_21 = FUNC_9(FUNC_10(VAR_16));
 unsigned long VAR_22 = 0;
 u8 VAR_23;
 u8 VAR_24;

 if (VAR_19->set_bwmode_inprogress)
  return;
 if ((FUNC_3(VAR_20)) || (FUNC_1(VAR_16))) {
  FUNC_2(VAR_18, VAR_4, VAR_7,
    "FALSE driver sleep or unload\n");
  return;
 }
 VAR_19->set_bwmode_inprogress = 1;
 FUNC_2(VAR_18, VAR_5, VAR_6, "Switch to %s bandwidth\n",
   VAR_19->current_chan_bw == 129 ?
   "20MHz" : "40MHz");
 VAR_24 = FUNC_11(VAR_18, VAR_10);
 VAR_23 = FUNC_11(VAR_18, VAR_11 + 2);
 switch (VAR_19->current_chan_bw) {
 case 129:
  VAR_24 |= VAR_3;
  FUNC_13(VAR_18, VAR_10, VAR_24);
  break;
 case 128:
  VAR_24 &= ~VAR_3;
  FUNC_13(VAR_18, VAR_10, VAR_24);

  VAR_23 = (VAR_23 & 0x90) |
   (VAR_21->cur_40_prime_sc << 5);
  FUNC_13(VAR_18, VAR_11 + 2, VAR_23);
  break;
 default:
  FUNC_4("unknown bandwidth: %#X\n",
         VAR_19->current_chan_bw);
  break;
 }
 switch (VAR_19->current_chan_bw) {
 case 129:
  FUNC_12(VAR_16, VAR_13, VAR_2, 0x0);
  FUNC_12(VAR_16, VAR_14, VAR_2, 0x0);

  FUNC_12(VAR_16, VAR_12, FUNC_0(10) |
         FUNC_0(11), 3);
  break;
 case 128:
  FUNC_12(VAR_16, VAR_13, VAR_2, 0x1);
  FUNC_12(VAR_16, VAR_14, VAR_2, 0x1);


  if (VAR_20->current_bandtype == VAR_0) {
   FUNC_5(VAR_16, &VAR_22);
   FUNC_12(VAR_16, VAR_9, VAR_1,
    (VAR_21->cur_40_prime_sc >> 1));
   FUNC_7(VAR_16, &VAR_22);
  }
  FUNC_12(VAR_16, VAR_15, 0xC00, VAR_21->cur_40_prime_sc);

  FUNC_12(VAR_16, VAR_12, FUNC_0(10) |
         FUNC_0(11), 0);
  FUNC_12(VAR_16, 0x818, (FUNC_0(26) | FUNC_0(27)),
   (VAR_21->cur_40_prime_sc ==
   VAR_8) ? 2 : 1);
  break;
 default:
  FUNC_4("unknown bandwidth: %#X\n",
         VAR_19->current_chan_bw);
  break;

 }
 FUNC_6(VAR_16, VAR_19->current_chan_bw);
 VAR_19->set_bwmode_inprogress = 0;
 FUNC_2(VAR_18, VAR_5, VAR_6, "<==\n");
}
