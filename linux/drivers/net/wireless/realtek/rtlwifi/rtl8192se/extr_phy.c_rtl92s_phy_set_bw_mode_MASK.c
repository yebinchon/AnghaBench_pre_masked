
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int current_chan_bw; int set_bwmode_inprogress; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_mac {int cur_40_prime_sc; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct rtl_hal*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_priv*,scalar_t__) ;
 int FUNC_8 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_9 (struct rtl_priv*,scalar_t__,int) ;

void FUNC_10(struct ieee80211_hw *VAR_13,
       enum nl80211_channel_type VAR_14)
{
 struct rtl_priv *VAR_15 = FUNC_6(VAR_13);
 struct rtl_hal *VAR_16 = FUNC_4(FUNC_6(VAR_13));
 struct rtl_phy *VAR_17 = &(VAR_15->phy);
 struct rtl_mac *VAR_18 = FUNC_5(FUNC_6(VAR_13));
 u8 VAR_19;

 FUNC_0(VAR_15, VAR_4, VAR_5, "Switch to %s bandwidth\n",
   VAR_17->current_chan_bw == 129 ?
   "20MHz" : "40MHz");

 if (VAR_17->set_bwmode_inprogress)
  return;
 if (FUNC_1(VAR_16))
  return;

 VAR_17->set_bwmode_inprogress = 1;

 VAR_19 = FUNC_7(VAR_15, VAR_2);

 FUNC_7(VAR_15, VAR_11 + 2);

 switch (VAR_17->current_chan_bw) {
 case 129:
  VAR_19 |= VAR_3;
  FUNC_9(VAR_15, VAR_2, VAR_19);
  break;
 case 128:
  VAR_19 &= ~VAR_3;
  FUNC_9(VAR_15, VAR_2, VAR_19);
  break;
 default:
  FUNC_2("unknown bandwidth: %#X\n",
         VAR_17->current_chan_bw);
  break;
 }

 switch (VAR_17->current_chan_bw) {
 case 129:
  FUNC_8(VAR_13, VAR_8, VAR_1, 0x0);
  FUNC_8(VAR_13, VAR_9, VAR_1, 0x0);

  if (VAR_16->version >= VAR_12)
   FUNC_9(VAR_15, VAR_7, 0x58);
  break;
 case 128:
  FUNC_8(VAR_13, VAR_8, VAR_1, 0x1);
  FUNC_8(VAR_13, VAR_9, VAR_1, 0x1);

  FUNC_8(VAR_13, VAR_6, VAR_0,
    (VAR_18->cur_40_prime_sc >> 1));
  FUNC_8(VAR_13, VAR_10, 0xC00, VAR_18->cur_40_prime_sc);

  if (VAR_16->version >= VAR_12)
   FUNC_9(VAR_15, VAR_7, 0x18);
  break;
 default:
  FUNC_2("unknown bandwidth: %#X\n",
         VAR_17->current_chan_bw);
  break;
 }

 FUNC_3(VAR_13, VAR_17->current_chan_bw);
 VAR_17->set_bwmode_inprogress = 0;
 FUNC_0(VAR_15, VAR_4, VAR_5, "<==\n");
}
