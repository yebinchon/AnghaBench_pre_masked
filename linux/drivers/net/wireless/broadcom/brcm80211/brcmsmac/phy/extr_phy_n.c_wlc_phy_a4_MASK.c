
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct nphy_papd_restore_state {int mm; } ;
struct TYPE_5__ {int* pad; int* pga; } ;
struct nphy_ipa_txcalgains {int useindex; int index; TYPE_1__ gains; } ;
struct TYPE_6__ {size_t phy_corenum; int radiorev; int phy_rev; } ;
struct brcms_phy {int nphy_papd_skip; int nphy_force_papd_cal; size_t nphy_txpwrctrl; int* nphy_papd_cal_gain_index; int nphy_papd_cal_type; size_t* nphy_papd_epsilon_offset; int nphy_papdcomp; TYPE_4__* sh; TYPE_3__* nphy_txpwrindex; TYPE_2__ pubpi; int radio_chanspec; int nphy_papd_recal_counter; int nphy_papd_last_cal; int * nphy_papd_tx_gain_at_last_cal; int d11core; } ;
typedef int s8 ;
typedef int s32 ;
typedef size_t s16 ;
struct TYPE_8__ {int physhim; int now; } ;
struct TYPE_7__ {scalar_t__ index_internal; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_4 (int ,int ) ;
 int VAR_10 ;
 int FUNC_5 (struct brcms_phy*,int,int,int) ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int FUNC_6 (struct brcms_phy*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct brcms_phy*,struct nphy_ipa_txcalgains*,int ,size_t) ;
 void* FUNC_10 (struct brcms_phy*,int,size_t) ;
 int FUNC_11 (struct brcms_phy*) ;
 int FUNC_12 (struct brcms_phy*) ;
 int FUNC_13 (struct brcms_phy*) ;
 int FUNC_14 (struct brcms_phy*,struct nphy_papd_restore_state*) ;
 int FUNC_15 (struct brcms_phy*,struct nphy_papd_restore_state*,size_t) ;
 int FUNC_16 (struct brcms_phy*,int) ;
 int FUNC_17 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_18 (struct brcms_phy*,size_t) ;
 int FUNC_19 (struct brcms_phy*,int,int ,int) ;
 int FUNC_20 (struct brcms_phy*,size_t) ;
 int FUNC_21 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void FUNC_22(struct brcms_phy *VAR_19, bool VAR_20)
{
 struct nphy_ipa_txcalgains VAR_21[2];
 struct nphy_papd_restore_state VAR_22;
 bool VAR_23;
 u8 VAR_24;
 u8 VAR_25;
 s16 VAR_26, VAR_27, VAR_28;
 u16 VAR_29;
 s16 VAR_30, VAR_31, VAR_32;

 VAR_31 = 0;
 VAR_32 = 0;
 VAR_27 = 0;
 VAR_28 = 0;
 VAR_26 = 0;

 if (VAR_19->nphy_papd_skip == 1)
  return;

 VAR_23 = (0 == (FUNC_4(VAR_19->d11core, FUNC_1(VAR_10)) &
   VAR_2));
 if (!VAR_23)
  FUNC_8(VAR_19->sh->physhim);

 FUNC_16(VAR_19, 1);

 VAR_19->nphy_force_papd_cal = 0;

 for (VAR_25 = 0; VAR_25 < VAR_19->pubpi.phy_corenum; VAR_25++)
  VAR_19->nphy_papd_tx_gain_at_last_cal[VAR_25] =
   FUNC_18(VAR_19, VAR_25);

 VAR_19->nphy_papd_last_cal = VAR_19->sh->now;
 VAR_19->nphy_papd_recal_counter++;

 VAR_24 = VAR_19->nphy_txpwrctrl;
 FUNC_20(VAR_19, VAR_9);

 FUNC_17(VAR_19, VAR_6, 64, 0, 32,
     VAR_18);
 FUNC_17(VAR_19, VAR_7, 64, 0, 32,
     VAR_18);

 VAR_29 = FUNC_6(VAR_19, 0x01);
 FUNC_5(VAR_19, 0x01, (0x1 << 15), 0);

 for (VAR_25 = 0; VAR_25 < VAR_19->pubpi.phy_corenum; VAR_25++) {
  s32 VAR_33, VAR_34 = 0;
  for (VAR_33 = 0; VAR_33 < 64; VAR_33++)
   FUNC_17(VAR_19,
       ((VAR_25 ==
         VAR_8) ?
        VAR_4 :
        VAR_5), 1,
       VAR_33, 32, &VAR_34);
 }

 FUNC_12(VAR_19);

 VAR_22 = FUNC_11(VAR_19);
 for (VAR_25 = 0; VAR_25 < VAR_19->pubpi.phy_corenum; VAR_25++) {
  FUNC_15(VAR_19, &VAR_22, VAR_25);

  if (FUNC_2(VAR_19->pubpi.phy_rev, 7)) {
   if (FUNC_0(VAR_19->radio_chanspec)) {
    if ((VAR_19->pubpi.radiorev == 3)
        || (VAR_19->pubpi.radiorev == 4)
        || (VAR_19->pubpi.radiorev == 6)) {
     VAR_19->nphy_papd_cal_gain_index[VAR_25] =
      23;
    } else if (VAR_19->pubpi.radiorev == 5) {
     VAR_19->nphy_papd_cal_gain_index[VAR_25] =
      0;
     VAR_19->nphy_papd_cal_gain_index[VAR_25] =
      FUNC_10(
       VAR_19,
       VAR_19->
       nphy_papd_cal_gain_index
       [VAR_25],
       VAR_25);

    } else if ((VAR_19->pubpi.radiorev == 7)
        || (VAR_19->pubpi.radiorev == 8)) {

     VAR_19->nphy_papd_cal_gain_index[VAR_25] =
      0;
     VAR_19->nphy_papd_cal_gain_index[VAR_25] =
      FUNC_10(
       VAR_19,
       VAR_19->
       nphy_papd_cal_gain_index
       [VAR_25],
       VAR_25);

    }

    VAR_21[VAR_25].gains.pad[VAR_25] =
     VAR_19->nphy_papd_cal_gain_index[VAR_25];

   } else {
    VAR_19->nphy_papd_cal_gain_index[VAR_25] = 0;
    VAR_19->nphy_papd_cal_gain_index[VAR_25] =
     FUNC_10(
      VAR_19,
      VAR_19->
      nphy_papd_cal_gain_index
      [VAR_25], VAR_25);
    VAR_21[VAR_25].gains.pga[VAR_25] =
     VAR_19->nphy_papd_cal_gain_index[VAR_25];
   }
  } else {
   VAR_21[VAR_25].useindex = 1;
   VAR_21[VAR_25].index = 16;
   VAR_21[VAR_25].index =
    FUNC_10(VAR_19, VAR_21[VAR_25].index,
      VAR_25);

   VAR_19->nphy_papd_cal_gain_index[VAR_25] =
    15 - ((VAR_21[VAR_25].index) >> 3);
  }

  switch (VAR_19->nphy_papd_cal_type) {
  case 0:
   FUNC_9(VAR_19, &VAR_21[VAR_25], VAR_0, VAR_25);
   break;
  case 1:
   FUNC_9(VAR_19, &VAR_21[VAR_25], VAR_1, VAR_25);
   break;
  }

  if (FUNC_2(VAR_19->pubpi.phy_rev, 7))
   FUNC_14(VAR_19, &VAR_22);
 }

 if (FUNC_3(VAR_19->pubpi.phy_rev, 7))
  FUNC_14(VAR_19, &VAR_22);

 for (VAR_25 = 0; VAR_25 < VAR_19->pubpi.phy_corenum; VAR_25++) {
  int VAR_35 = 0;

  if (FUNC_2(VAR_19->pubpi.phy_rev, 7)) {
   if (FUNC_0(VAR_19->radio_chanspec)) {
    if (VAR_19->pubpi.radiorev == 3)
     VAR_35 = -2;
    else if (VAR_19->pubpi.radiorev == 5)
     VAR_35 = 3;
    else
     VAR_35 = -1;
   } else {
    VAR_35 = 2;
   }

   if (FUNC_0(VAR_19->radio_chanspec)) {
    VAR_28 = VAR_21[VAR_25].gains.pad[VAR_25];
    VAR_30 = 0;
    if ((VAR_19->pubpi.radiorev == 3) ||
        (VAR_19->pubpi.radiorev == 4) ||
        (VAR_19->pubpi.radiorev == 6)) {
     VAR_32 = -(
         VAR_11
            [VAR_28] + 1) / 2;
     VAR_30 = -1;
    } else if (VAR_19->pubpi.radiorev == 5) {
     VAR_32 = -(
         VAR_12
            [VAR_28] + 1) / 2;
    } else if ((VAR_19->pubpi.radiorev == 7) ||
        (VAR_19->pubpi.radiorev == 8)) {
     VAR_32 = -(
         VAR_13
            [VAR_28] + 1) / 2;
    }
   } else {
    VAR_27 = VAR_21[VAR_25].gains.pga[VAR_25];
    if ((VAR_19->pubpi.radiorev == 3) ||
        (VAR_19->pubpi.radiorev == 4) ||
        (VAR_19->pubpi.radiorev == 6))
     VAR_31 =
      -(VAR_16
        [VAR_27]
        + 1) / 2;
    else if ((VAR_19->pubpi.radiorev == 7)
      || (VAR_19->pubpi.radiorev == 8))
     VAR_31 = -(
           VAR_17
            [VAR_27] + 1) / 2;

    VAR_30 = -9;
   }

   if (FUNC_0(VAR_19->radio_chanspec))
    VAR_26 =
     -60 + 27 + VAR_35 + VAR_32 +
     VAR_30;
   else
    VAR_26 =
     -60 + 27 + VAR_35 + VAR_31 +
     VAR_30;

   FUNC_5(VAR_19, (VAR_25 == VAR_8) ? 0x298 :
        0x29c, (0x1ff << 7), (VAR_26) << 7);

   VAR_19->nphy_papd_epsilon_offset[VAR_25] = VAR_26;
  } else {
   if (FUNC_3(VAR_19->pubpi.phy_rev, 5))
    VAR_35 = 4;
   else
    VAR_35 = 2;

   VAR_27 = 15 - ((VAR_21[VAR_25].index) >> 3);

   if (FUNC_0(VAR_19->radio_chanspec)) {
    VAR_31 =
     -(VAR_14[
        VAR_27] +
       1) / 2;
    VAR_30 = 0;
   } else {
    VAR_31 =
     -(VAR_15[
        VAR_27] +
       1) / 2;
    VAR_30 = -9;
   }

   VAR_26 = -60 + 27 + VAR_35 + VAR_31 + VAR_30;

   FUNC_5(VAR_19, (VAR_25 == VAR_8) ? 0x298 :
        0x29c, (0x1ff << 7), (VAR_26) << 7);

   VAR_19->nphy_papd_epsilon_offset[VAR_25] = VAR_26;
  }
 }

 FUNC_5(VAR_19, (0 == VAR_8) ? 0x297 :
      0x29b, (0x1 << 0), (VAR_3) << 0);

 FUNC_5(VAR_19, (1 == VAR_8) ? 0x297 :
      0x29b, (0x1 << 0), (VAR_3) << 0);

 if (FUNC_2(VAR_19->pubpi.phy_rev, 6)) {
  FUNC_5(VAR_19, (0 == VAR_8) ? 0x2a3 :
       0x2a4, (0x1 << 13), (0) << 13);

  FUNC_5(VAR_19, (1 == VAR_8) ? 0x2a3 :
       0x2a4, (0x1 << 13), (0) << 13);

 } else {
  FUNC_5(VAR_19, (0 == VAR_8) ? 0x2a3 :
       0x2a4, (0x1 << 11), (0) << 11);

  FUNC_5(VAR_19, (1 == VAR_8) ? 0x2a3 :
       0x2a4, (0x1 << 11), (0) << 11);

 }
 VAR_19->nphy_papdcomp = VAR_3;

 FUNC_21(VAR_19, 0x01, VAR_29);

 FUNC_13(VAR_19);

 FUNC_20(VAR_19, VAR_24);
 if (VAR_24 == VAR_9) {
  FUNC_19(VAR_19, (1 << 0),
      (s8) (VAR_19->nphy_txpwrindex[0].
            index_internal), 0);
  FUNC_19(VAR_19, (1 << 1),
      (s8) (VAR_19->nphy_txpwrindex[1].
            index_internal), 0);
 }

 FUNC_16(VAR_19, 0);

 if (!VAR_23)
  FUNC_7(VAR_19->sh->physhim);
}
