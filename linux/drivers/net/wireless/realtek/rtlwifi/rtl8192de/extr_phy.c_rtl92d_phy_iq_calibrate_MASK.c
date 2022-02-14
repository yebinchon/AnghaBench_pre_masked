
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_hal {scalar_t__ current_bandtype; int version; } ;
struct rtl_phy {long reg_e94; long reg_e9c; long reg_eb4; long reg_ebc; TYPE_1__* iqk_matrix; int current_channel; } ;
struct rtl_priv {struct rtl_hal rtlhal; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {long** value; int iqk_done; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,long,...) ;
 int FUNC_2 (struct rtl_priv*,int,int ,char*,int) ;
 int FUNC_3 (struct ieee80211_hw*,long**,int,int) ;
 int FUNC_4 (struct ieee80211_hw*,long**,int) ;
 int FUNC_5 (struct ieee80211_hw*,int,long**,int,int) ;
 int FUNC_6 (struct ieee80211_hw*,int,long**,int,int) ;
 int FUNC_7 (struct ieee80211_hw*,long**,int,int) ;
 int FUNC_8 (struct ieee80211_hw*,unsigned long*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ieee80211_hw*,unsigned long*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;

void FUNC_12(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_11(VAR_8);
 struct rtl_phy *VAR_10 = &(VAR_9->phy);
 struct rtl_hal *VAR_11 = &(VAR_9->rtlhal);
 long VAR_12[4][8];
 u8 VAR_13, VAR_14, VAR_15;
 bool VAR_16, VAR_17;
 long VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 long VAR_23, VAR_24, VAR_25, VAR_26 = 0;
 bool VAR_27, VAR_28, VAR_29;
 unsigned long VAR_30 = 0;

 FUNC_1(VAR_9, VAR_5, VAR_6,
  "IQK:Start!!!channel %d\n", VAR_10->current_channel);
 for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
  VAR_12[0][VAR_13] = 0;
  VAR_12[1][VAR_13] = 0;
  VAR_12[2][VAR_13] = 0;
  VAR_12[3][VAR_13] = 0;
 }
 VAR_14 = 0xff;
 VAR_16 = 0;
 VAR_17 = 0;
 VAR_27 = 0;
 VAR_29 = 0;
 VAR_28 = 0;
 FUNC_1(VAR_9, VAR_5, VAR_6,
  "IQK !!!currentband %d\n", VAR_11->current_bandtype);
 FUNC_8(VAR_8, &VAR_30);
 for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
  if (VAR_11->current_bandtype == VAR_1) {
   FUNC_4(VAR_8, VAR_12, VAR_13);
  } else if (VAR_11->current_bandtype == VAR_0) {
   if (FUNC_0(VAR_11->version))
    FUNC_3(VAR_8, VAR_12, VAR_13, 1);
   else
    FUNC_3(VAR_8, VAR_12, VAR_13, 0);
  }
  if (VAR_13 == 1) {
   VAR_27 = FUNC_7(VAR_8, VAR_12,
             0, 1);
   if (VAR_27) {
    VAR_14 = 0;
    break;
   }
  }
  if (VAR_13 == 2) {
   VAR_28 = FUNC_7(VAR_8, VAR_12,
             0, 2);
   if (VAR_28) {
    VAR_14 = 0;
    break;
   }
   VAR_29 = FUNC_7(VAR_8, VAR_12,
             1, 2);
   if (VAR_29) {
    VAR_14 = 1;
   } else {
    for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
     VAR_26 += VAR_12[3][VAR_13];

    if (VAR_26 != 0)
     VAR_14 = 3;
    else
     VAR_14 = 0xFF;
   }
  }
 }
 FUNC_10(VAR_8, &VAR_30);
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  VAR_18 = VAR_12[VAR_13][0];
  VAR_19 = VAR_12[VAR_13][1];
  VAR_20 = VAR_12[VAR_13][2];
  VAR_21 = VAR_12[VAR_13][3];
  VAR_22 = VAR_12[VAR_13][4];
  VAR_23 = VAR_12[VAR_13][5];
  VAR_24 = VAR_12[VAR_13][6];
  VAR_25 = VAR_12[VAR_13][7];
  FUNC_1(VAR_9, VAR_5, VAR_6,
   "IQK: rege94=%lx rege9c=%lx regea4=%lx regeac=%lx regeb4=%lx regebc=%lx regec4=%lx regecc=%lx\n",
   VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24,
   VAR_25);
 }
 if (VAR_14 != 0xff) {
  VAR_10->reg_e94 = VAR_18 = VAR_12[VAR_14][0];
  VAR_10->reg_e9c = VAR_19 = VAR_12[VAR_14][1];
  VAR_20 = VAR_12[VAR_14][2];
  VAR_21 = VAR_12[VAR_14][3];
  VAR_10->reg_eb4 = VAR_22 = VAR_12[VAR_14][4];
  VAR_10->reg_ebc = VAR_23 = VAR_12[VAR_14][5];
  VAR_24 = VAR_12[VAR_14][6];
  VAR_25 = VAR_12[VAR_14][7];
  FUNC_1(VAR_9, VAR_5, VAR_6,
   "IQK: final_candidate is %x\n", VAR_14);
  FUNC_1(VAR_9, VAR_5, VAR_6,
   "IQK: rege94=%lx rege9c=%lx regea4=%lx regeac=%lx regeb4=%lx regebc=%lx regec4=%lx regecc=%lx\n",
   VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24,
   VAR_25);
  VAR_16 = VAR_17 = 1;
 } else {
  VAR_10->reg_e94 = VAR_10->reg_eb4 = 0x100;
  VAR_10->reg_e9c = VAR_10->reg_ebc = 0x0;
 }
 if ((VAR_18 != 0) )
  FUNC_5(VAR_8, VAR_16, VAR_12,
    VAR_14, (VAR_20 == 0));
 if (FUNC_0(VAR_11->version)) {
  if ((VAR_22 != 0) )
   FUNC_6(VAR_8, VAR_17, VAR_12,
      VAR_14, (VAR_24 == 0));
 }
 if (VAR_14 != 0xFF) {
  VAR_15 = FUNC_9(
      VAR_10->current_channel);

  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
   VAR_10->iqk_matrix[VAR_15].
    value[0][VAR_13] = VAR_12[VAR_14][VAR_13];
  VAR_10->iqk_matrix[VAR_15].iqk_done =
   1;

  FUNC_2(VAR_9, VAR_3 | VAR_2, VAR_4,
    "IQK OK indexforchannel %d\n", VAR_15);
 }
}
