
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int current_chan_bw; int reg_837; int set_bwmode_inprogress; int current_channel; int rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_10 ;
 int FUNC_2 (struct rtl_priv*) ;
 int FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int,int ) ;
 int FUNC_6 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_9 (struct rtl_priv*,int,int) ;

void FUNC_10(struct ieee80211_hw *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_7(VAR_11);
 struct rtl_phy *VAR_13 = &VAR_12->phy;
 u8 VAR_14 = 0;
 u8 VAR_15 = 0;

 FUNC_1(VAR_12, VAR_1, VAR_3,
   "Switch to %s bandwidth\n",
    (VAR_13->current_chan_bw == 130 ?
    "20MHz" :
    (VAR_13->current_chan_bw == 129 ?
    "40MHz" : "80MHz")));

 FUNC_3(VAR_12, VAR_13->current_chan_bw);
 VAR_14 = FUNC_2(VAR_12);
 FUNC_9(VAR_12, 0x0483, VAR_14);

 switch (VAR_13->current_chan_bw) {
 case 130:
  FUNC_8(VAR_11, VAR_9, 0x003003C3, 0x00300200);
  FUNC_8(VAR_11, VAR_4, FUNC_0(30), 0);

  if (VAR_13->rf_type == VAR_7)
   FUNC_8(VAR_11, VAR_8, 0x03C00000, 7);
  else
   FUNC_8(VAR_11, VAR_8, 0x03C00000, 8);
  break;
 case 129:
  FUNC_8(VAR_11, VAR_9, 0x003003C3, 0x00300201);
  FUNC_8(VAR_11, VAR_4, FUNC_0(30), 0);
  FUNC_8(VAR_11, VAR_9, 0x3C, VAR_14);
  FUNC_8(VAR_11, VAR_5, 0xf0000000, VAR_14);

  if (VAR_13->reg_837 & FUNC_0(2))
   VAR_15 = 6;
  else {
   if (VAR_13->rf_type == VAR_7)
    VAR_15 = 7;
   else
    VAR_15 = 8;
  }

  FUNC_8(VAR_11, VAR_8, 0x03C00000, VAR_15);

  if (VAR_14 == VAR_10)
   FUNC_8(VAR_11, VAR_6, VAR_0, 1);
  else
   FUNC_8(VAR_11, VAR_6, VAR_0, 0);
  break;

 case 128:

  FUNC_8(VAR_11, VAR_9, 0x003003C3, 0x00300202);

  FUNC_8(VAR_11, VAR_4, FUNC_0(30), 1);
  FUNC_8(VAR_11, VAR_9, 0x3C, VAR_14);
  FUNC_8(VAR_11, VAR_5, 0xf0000000, VAR_14);

  if (VAR_13->reg_837 & FUNC_0(2))
   VAR_15 = 5;
  else {
   if (VAR_13->rf_type == VAR_7)
    VAR_15 = 6;
   else
    VAR_15 = 7;
  }
  FUNC_8(VAR_11, VAR_8, 0x03C00000, VAR_15);

  break;
 default:
  FUNC_4("unknown bandwidth: %#X\n",
         VAR_13->current_chan_bw);
  break;
 }

 FUNC_5(VAR_11, VAR_13->current_chan_bw, VAR_13->current_channel);

 FUNC_6(VAR_11, VAR_13->current_chan_bw);
 VAR_13->set_bwmode_inprogress = 0;

 FUNC_1(VAR_12, VAR_1, VAR_2, "\n");
}
