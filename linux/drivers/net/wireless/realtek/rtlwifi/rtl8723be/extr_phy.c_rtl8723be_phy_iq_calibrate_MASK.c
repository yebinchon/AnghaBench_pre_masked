
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int iqk_lock; } ;
struct rtl_phy {int lck_inprogress; long reg_e94; long reg_e9c; long reg_eb4; long reg_ebc; int iqk_bb_backup; TYPE_1__* iqk_matrix; int current_channel; } ;
struct rtl_priv {TYPE_2__ locks; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {long** value; int iqk_done; } ;


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
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,long**,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,long**,int,int) ;
 int FUNC_3 (struct ieee80211_hw*,long**,int,int) ;
 int FUNC_4 (struct ieee80211_hw*,int,long**,int,int) ;
 int FUNC_5 (struct ieee80211_hw*,int *,int ,int) ;
 int FUNC_6 (struct ieee80211_hw*,int *,int ,int) ;
 int FUNC_7 (struct ieee80211_hw*,int,int ) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,int,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct ieee80211_hw *VAR_11, bool VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_8(VAR_11);
 struct rtl_phy *VAR_14 = &VAR_13->phy;
 long VAR_15[4][8];
 u8 VAR_16, VAR_17, VAR_18;
 bool VAR_19, VAR_20;
 long VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 long VAR_28, VAR_29 = 0;
 bool VAR_30, VAR_31, VAR_32;
 u32 VAR_33[9] = {
  VAR_5,
  VAR_7,
  VAR_3,
  VAR_2,
  VAR_6,
  VAR_8,
  VAR_9,
  VAR_10,
  VAR_4
 };
 u32 VAR_34 = 0;

 if (VAR_14->lck_inprogress)
  return;

 FUNC_10(&VAR_13->locks.iqk_lock);
 VAR_14->lck_inprogress = 1;
 FUNC_11(&VAR_13->locks.iqk_lock);

 if (VAR_12) {
  FUNC_5(VAR_11, VAR_33,
        VAR_14->iqk_bb_backup, 9);
  goto label_done;
 }

 VAR_34 = FUNC_7(VAR_11, 0x948, VAR_1);


 for (VAR_16 = 0; VAR_16 < 8; VAR_16++) {
  VAR_15[0][VAR_16] = 0;
  VAR_15[1][VAR_16] = 0;
  VAR_15[2][VAR_16] = 0;
  VAR_15[3][VAR_16] = 0;
 }
 VAR_17 = 0xff;
 VAR_19 = 0;
 VAR_20 = 0;
 VAR_30 = 0;
 VAR_32 = 0;
 VAR_31 = 0;
 for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
  FUNC_1(VAR_11, VAR_15, VAR_16, 1);
  if (VAR_16 == 1) {
   VAR_30 = FUNC_3(VAR_11,
         VAR_15,
         0, 1);
   if (VAR_30) {
    VAR_17 = 0;
    break;
   }
  }
  if (VAR_16 == 2) {
   VAR_31 = FUNC_3(VAR_11,
         VAR_15,
         0, 2);
   if (VAR_31) {
    VAR_17 = 0;
    break;
   }
   VAR_32 = FUNC_3(VAR_11,
         VAR_15,
         1, 2);
   if (VAR_32) {
    VAR_17 = 1;
   } else {
    for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
     VAR_29 += VAR_15[3][VAR_16];

    if (VAR_29 != 0)
     VAR_17 = 3;
    else
     VAR_17 = 0xFF;
   }
  }
 }
 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  VAR_21 = VAR_15[VAR_16][0];
  VAR_22 = VAR_15[VAR_16][1];
  VAR_23 = VAR_15[VAR_16][2];
  VAR_24 = VAR_15[VAR_16][3];
  VAR_25 = VAR_15[VAR_16][4];
  VAR_26 = VAR_15[VAR_16][5];
  VAR_27 = VAR_15[VAR_16][6];
  VAR_28 = VAR_15[VAR_16][7];
 }
 if (VAR_17 != 0xff) {
  VAR_21 = VAR_15[VAR_17][0];
  VAR_14->reg_e94 = VAR_21;
  VAR_22 = VAR_15[VAR_17][1];
  VAR_14->reg_e9c = VAR_22;
  VAR_23 = VAR_15[VAR_17][2];
  VAR_24 = VAR_15[VAR_17][3];
  VAR_25 = VAR_15[VAR_17][4];
  VAR_14->reg_eb4 = VAR_25;
  VAR_26 = VAR_15[VAR_17][5];
  VAR_14->reg_ebc = VAR_26;
  VAR_27 = VAR_15[VAR_17][6];
  VAR_28 = VAR_15[VAR_17][7];
  VAR_19 = 1;
  VAR_20 = 1;
 } else {
  VAR_14->reg_e94 = 0x100;
  VAR_14->reg_eb4 = 0x100;
  VAR_14->reg_e9c = 0x0;
  VAR_14->reg_ebc = 0x0;
 }
 if (VAR_21 != 0)
  FUNC_4(VAR_11, VAR_19, VAR_15,
         VAR_17,
         (VAR_23 == 0));
 if (VAR_25 != 0)
  FUNC_2(VAR_11, VAR_20, VAR_15,
            VAR_17,
            (VAR_27 == 0));

 VAR_18 = FUNC_0(VAR_14->current_channel);

 if (VAR_17 < 4) {
  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
   VAR_14->iqk_matrix[VAR_18].value[0][VAR_16] =
      VAR_15[VAR_17][VAR_16];
  VAR_14->iqk_matrix[VAR_18].iqk_done = 1;

 }
 FUNC_6(VAR_11, VAR_33,
        VAR_14->iqk_bb_backup, 9);

 FUNC_9(VAR_11, 0x948, VAR_1, VAR_34);


label_done:
 FUNC_10(&VAR_13->locks.iqk_lock);
 VAR_14->lck_inprogress = 0;
 FUNC_11(&VAR_13->locks.iqk_lock);
}
