
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_phy {long reg_e94; long reg_e9c; long reg_eb4; long reg_ebc; int iqk_bb_backup; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
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
 int FUNC_1 (struct ieee80211_hw*,long**,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,long**,int,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,long**,int,int) ;
 int FUNC_4 (struct ieee80211_hw*,int *,int ,int) ;
 int FUNC_5 (struct ieee80211_hw*,int *,int ,int) ;
 int FUNC_6 (struct ieee80211_hw*,long**,int,int) ;
 struct rtl_hal* FUNC_7 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;

void FUNC_9(struct ieee80211_hw *VAR_10, bool VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_8(VAR_10);
 struct rtl_phy *VAR_13 = &(VAR_12->phy);
 struct rtl_hal *VAR_14 = FUNC_7(FUNC_8(VAR_10));

 long VAR_15[4][8];
 u8 VAR_16, VAR_17;
 bool VAR_18, VAR_19;
 long VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26,
     VAR_27, VAR_28 = 0;
 bool VAR_29, VAR_30, VAR_31;
 u32 VAR_32[10] = {
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
  FUNC_4(VAR_10,
        VAR_32,
        VAR_13->iqk_bb_backup, 10);
  return;
 }
 for (VAR_16 = 0; VAR_16 < 8; VAR_16++) {
  VAR_15[0][VAR_16] = 0;
  VAR_15[1][VAR_16] = 0;
  VAR_15[2][VAR_16] = 0;
  VAR_15[3][VAR_16] = 0;
 }
 VAR_17 = 0xff;
 VAR_18 = 0;
 VAR_19 = 0;
 VAR_29 = 0;
 VAR_31 = 0;
 VAR_30 = 0;
 for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
  if (FUNC_0(VAR_14->version))
   FUNC_1(VAR_10, VAR_15, VAR_16, 1);
  else
   FUNC_1(VAR_10, VAR_15, VAR_16, 0);
  if (VAR_16 == 1) {
   VAR_29 = FUNC_6(VAR_10,
             VAR_15, 0,
             1);
   if (VAR_29) {
    VAR_17 = 0;
    break;
   }
  }
  if (VAR_16 == 2) {
   VAR_30 = FUNC_6(VAR_10,
             VAR_15, 0,
             2);
   if (VAR_30) {
    VAR_17 = 0;
    break;
   }
   VAR_31 = FUNC_6(VAR_10,
             VAR_15, 1,
             2);
   if (VAR_31)
    VAR_17 = 1;
   else {
    for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
     VAR_28 += VAR_15[3][VAR_16];

    if (VAR_28 != 0)
     VAR_17 = 3;
    else
     VAR_17 = 0xFF;
   }
  }
 }
 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  VAR_20 = VAR_15[VAR_16][0];
  VAR_21 = VAR_15[VAR_16][1];
  VAR_22 = VAR_15[VAR_16][2];
  VAR_23 = VAR_15[VAR_16][3];
  VAR_24 = VAR_15[VAR_16][4];
  VAR_25 = VAR_15[VAR_16][5];
  VAR_26 = VAR_15[VAR_16][6];
  VAR_27 = VAR_15[VAR_16][7];
 }
 if (VAR_17 != 0xff) {
  VAR_13->reg_e94 = VAR_20 = VAR_15[VAR_17][0];
  VAR_13->reg_e9c = VAR_21 = VAR_15[VAR_17][1];
  VAR_22 = VAR_15[VAR_17][2];
  VAR_23 = VAR_15[VAR_17][3];
  VAR_13->reg_eb4 = VAR_24 = VAR_15[VAR_17][4];
  VAR_13->reg_ebc = VAR_25 = VAR_15[VAR_17][5];
  VAR_26 = VAR_15[VAR_17][6];
  VAR_27 = VAR_15[VAR_17][7];
  VAR_18 = 1;
  VAR_19 = 1;
 } else {
  VAR_13->reg_e94 = VAR_13->reg_eb4 = 0x100;
  VAR_13->reg_e9c = VAR_13->reg_ebc = 0x0;
 }
 if (VAR_20 != 0)
  FUNC_2(VAR_10, VAR_18, VAR_15,
         VAR_17,
         (VAR_22 == 0));
 if (FUNC_0(VAR_14->version)) {
  if (VAR_24 != 0)
   FUNC_3(VAR_10, VAR_19,
          VAR_15,
          VAR_17,
          (VAR_26 == 0));
 }
 FUNC_5(VAR_10, VAR_32,
     VAR_13->iqk_bb_backup, 10);
}
