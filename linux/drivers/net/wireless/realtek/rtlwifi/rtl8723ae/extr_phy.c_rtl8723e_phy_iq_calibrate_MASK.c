
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_phy {long reg_e94; long reg_e9c; long reg_eb4; long reg_ebc; int iqk_bb_backup; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ieee80211_hw*,long**,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,long**,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,long**,int,int) ;
 int FUNC_3 (struct ieee80211_hw*,int *,int ,int) ;
 int FUNC_4 (struct ieee80211_hw*,int *,int ,int) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

void FUNC_6(struct ieee80211_hw *VAR_10, bool VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_5(VAR_10);
 struct rtl_phy *VAR_13 = &VAR_12->phy;

 long VAR_14[4][8];
 u8 VAR_15, VAR_16;
 bool VAR_17, VAR_18;
 long VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25,
     VAR_26, VAR_27 = 0;
 bool VAR_28, VAR_29, VAR_30;
 u32 VAR_31[10] = {
  VAR_3,
  VAR_5,
  VAR_1,
  VAR_0,
  VAR_4,
  VAR_6,
  VAR_8,
  VAR_7,
  VAR_9,
  VAR_2
 };

 if (VAR_11) {
  FUNC_3(VAR_10,
        VAR_31,
        VAR_13->iqk_bb_backup, 10);
  return;
 }
 for (VAR_15 = 0; VAR_15 < 8; VAR_15++) {
  VAR_14[0][VAR_15] = 0;
  VAR_14[1][VAR_15] = 0;
  VAR_14[2][VAR_15] = 0;
  VAR_14[3][VAR_15] = 0;
 }
 VAR_16 = 0xff;
 VAR_17 = 0;
 VAR_18 = 0;
 VAR_28 = 0;
 VAR_30 = 0;
 VAR_29 = 0;
 for (VAR_15 = 0; VAR_15 < 3; VAR_15++) {
  FUNC_0(VAR_10, VAR_14, VAR_15, 0);
  if (VAR_15 == 1) {
   VAR_28 =
     FUNC_1(VAR_10, VAR_14, 0, 1);
   if (VAR_28) {
    VAR_16 = 0;
    break;
   }
  }
  if (VAR_15 == 2) {
   VAR_29 =
     FUNC_1(VAR_10, VAR_14, 0, 2);
   if (VAR_29) {
    VAR_16 = 0;
    break;
   }
   VAR_30 =
     FUNC_1(VAR_10, VAR_14, 1, 2);
   if (VAR_30)
    VAR_16 = 1;
   else {
    for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
     VAR_27 += VAR_14[3][VAR_15];

    if (VAR_27 != 0)
     VAR_16 = 3;
    else
     VAR_16 = 0xFF;
   }
  }
 }
 for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
  VAR_19 = VAR_14[VAR_15][0];
  VAR_20 = VAR_14[VAR_15][1];
  VAR_21 = VAR_14[VAR_15][2];
  VAR_22 = VAR_14[VAR_15][3];
  VAR_23 = VAR_14[VAR_15][4];
  VAR_24 = VAR_14[VAR_15][5];
  VAR_25 = VAR_14[VAR_15][6];
  VAR_26 = VAR_14[VAR_15][7];
 }
 if (VAR_16 != 0xff) {
  VAR_13->reg_e94 = VAR_19 = VAR_14[VAR_16][0];
  VAR_13->reg_e9c = VAR_20 = VAR_14[VAR_16][1];
  VAR_21 = VAR_14[VAR_16][2];
  VAR_22 = VAR_14[VAR_16][3];
  VAR_13->reg_eb4 = VAR_23 = VAR_14[VAR_16][4];
  VAR_13->reg_ebc = VAR_24 = VAR_14[VAR_16][5];
  VAR_25 = VAR_14[VAR_16][6];
  VAR_26 = VAR_14[VAR_16][7];
  VAR_17 = 1;
  VAR_18 = 1;
 } else {
  VAR_13->reg_e94 = VAR_13->reg_eb4 = 0x100;
  VAR_13->reg_e9c = VAR_13->reg_ebc = 0x0;
 }
 if (VAR_19 != 0)
  FUNC_2(VAR_10, VAR_17, VAR_14,
         VAR_16,
         (VAR_21 == 0));
 FUNC_4(VAR_10, VAR_31,
        VAR_13->iqk_bb_backup, 10);
}
