
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_4__ {void** rssical_phyregs_5G; void** rssical_radio_regs_5G; void** rssical_phyregs_2G; void** rssical_radio_regs_2G; } ;
struct TYPE_3__ {int phy_corenum; int phy_rev; } ;
struct brcms_phy {int radio_chanspec; int nphy_rssical_chanspec_5G; TYPE_2__ rssical_cache; TYPE_1__ pubpi; int nphy_rssical_chanspec_2G; } ;
typedef int s8 ;
typedef int s32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct brcms_phy*,int,int,int) ;
 int FUNC_5 (struct brcms_phy*,int,int ,int) ;
 void* FUNC_6 (struct brcms_phy*,int) ;
 void* FUNC_7 (struct brcms_phy*,int) ;
 int FUNC_8 (struct brcms_phy*,int,int) ;
 int FUNC_9 (struct brcms_phy*,int,int*) ;
 int FUNC_10 (struct brcms_phy*,int ) ;
 int FUNC_11 (struct brcms_phy*,int,int*,int) ;
 int FUNC_12 (struct brcms_phy*,int ,int,int ,int ) ;
 int FUNC_13 (struct brcms_phy*,int,int,int ,int ) ;
 int FUNC_14 (struct brcms_phy*,int,int,int ,int ,int ) ;
 int FUNC_15 (struct brcms_phy*,int ,int,int ) ;
 int FUNC_16 (struct brcms_phy_pub*) ;
 int FUNC_17 (struct brcms_phy*,int,int,int ,int ,int) ;
 int FUNC_18 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_19(struct brcms_phy *VAR_29)
{
 u16 VAR_30;
 u16 VAR_31[2];
 u16 VAR_32[] = { 0xffff, 0xffff };
 s32 VAR_33;
 u8 VAR_34, VAR_35;
 u8 VAR_36 = 0;
 u8 VAR_37;
 s32 VAR_38[8][4] = {
  {0, 0, 0, 0},
  {0, 0, 0, 0},
  {0, 0, 0, 0},
  {0, 0, 0, 0},
  {0, 0, 0, 0},
  {0, 0, 0, 0},
  {0, 0, 0, 0},
  {0, 0, 0, 0}
 };
 s32 VAR_39[4] = { 0, 0, 0, 0 };
 s32 VAR_40 = VAR_6, VAR_41;
 s32 VAR_42[4];
 s32 VAR_43[4] = { 0, 0, 0, 0 };
 s32 VAR_44;
 u8 VAR_45;
 u8 VAR_46;
 u8 VAR_47;
 u8 VAR_48;
 u16 VAR_49, VAR_50;
 u16 VAR_51, VAR_52;
 u16 VAR_53, VAR_54;
 u16 VAR_55, VAR_56;
 u16 VAR_57, VAR_58;
 u16 VAR_59;
 u16 VAR_60, VAR_61;
 u16 VAR_62, VAR_63;
 u8 VAR_64;
 u16 VAR_65, VAR_66;
 u16 VAR_67, VAR_68;
 u16 VAR_69, VAR_70;
 u16 VAR_71, VAR_72;

 VAR_65 =
  VAR_66 =
  VAR_67 =
  VAR_68 =
  VAR_69 =
  VAR_70 =
  VAR_71 =
  VAR_72 = 0;

 VAR_30 = FUNC_8(VAR_29, 0, 0);
 FUNC_8(VAR_29, (0x7 << 0), 4);
 FUNC_9(VAR_29, 0, VAR_31);
 FUNC_9(VAR_29, 1, VAR_32);

 VAR_49 = FUNC_6(VAR_29, 0x91);
 VAR_50 = FUNC_6(VAR_29, 0x92);
 VAR_51 = FUNC_6(VAR_29, 0x8f);
 VAR_52 = FUNC_6(VAR_29, 0xa5);
 VAR_53 = FUNC_6(VAR_29, 0xa6);
 VAR_54 = FUNC_6(VAR_29, 0xa7);
 VAR_55 = FUNC_6(VAR_29, 0xe7);
 VAR_56 = FUNC_6(VAR_29, 0xec);
 if (FUNC_2(VAR_29->pubpi.phy_rev, 7)) {
  VAR_65 = FUNC_6(VAR_29, 0x342);
  VAR_66 = FUNC_6(VAR_29, 0x343);
  VAR_67 = FUNC_6(VAR_29, 0x346);
  VAR_68 = FUNC_6(VAR_29, 0x347);
 }
 VAR_57 = FUNC_6(VAR_29, 0xe5);
 VAR_58 = FUNC_6(VAR_29, 0xe6);
 VAR_59 = FUNC_6(VAR_29, 0x78);
 VAR_60 = FUNC_6(VAR_29, 0xf9);
 VAR_61 = FUNC_6(VAR_29, 0xfb);
 if (FUNC_2(VAR_29->pubpi.phy_rev, 7)) {
  VAR_69 = FUNC_6(VAR_29, 0x340);
  VAR_70 = FUNC_6(VAR_29, 0x341);
  VAR_71 = FUNC_6(VAR_29, 0x344);
  VAR_72 = FUNC_6(VAR_29, 0x345);
 }
 VAR_62 = FUNC_6(VAR_29, 0x7a);
 VAR_63 = FUNC_6(VAR_29, 0x7d);

 FUNC_15(VAR_29, VAR_15, 0,
      VAR_26);
 FUNC_15(VAR_29, VAR_16, 1,
      VAR_26);

 if (FUNC_2(VAR_29->pubpi.phy_rev, 7))
  FUNC_12(
   VAR_29,
   VAR_4,
   0, 0, 0);
 else
  FUNC_13(VAR_29, (0x1 << 0), 0, 0, 0);

 if (FUNC_2(VAR_29->pubpi.phy_rev, 7))
  FUNC_12(
   VAR_29,
   VAR_3,
   1, 0, 0);
 else
  FUNC_13(VAR_29, (0x1 << 1), 1, 0, 0);

 if (FUNC_2(VAR_29->pubpi.phy_rev, 7)) {
  FUNC_14(VAR_29, (0x1 << 7),
        1, 0, 0,
        VAR_2);
  FUNC_14(VAR_29, (0x1 << 6), 1, 0, 0,
        VAR_2);
 } else {
  FUNC_13(VAR_29, (0x1 << 7), 1, 0, 0);
  FUNC_13(VAR_29, (0x1 << 6), 1, 0, 0);
 }

 if (FUNC_1(VAR_29->radio_chanspec)) {
  if (FUNC_2(VAR_29->pubpi.phy_rev, 7)) {
   FUNC_14(
    VAR_29, (0x1 << 5),
    0, 0, 0,
    VAR_2);
   FUNC_14(
    VAR_29, (0x1 << 4), 1, 0,
    0,
    VAR_2);
  } else {
   FUNC_13(VAR_29, (0x1 << 5), 0, 0, 0);
   FUNC_13(VAR_29, (0x1 << 4), 1, 0, 0);
  }

 } else {
  if (FUNC_2(VAR_29->pubpi.phy_rev, 7)) {
   FUNC_14(
    VAR_29, (0x1 << 4),
    0, 0, 0,
    VAR_2);
   FUNC_14(
    VAR_29, (0x1 << 5), 1, 0,
    0,
    VAR_2);
  } else {
   FUNC_13(VAR_29, (0x1 << 4), 0, 0, 0);
   FUNC_13(VAR_29, (0x1 << 5), 1, 0, 0);
  }
 }

 VAR_64 = FUNC_16(
  (struct brcms_phy_pub *) VAR_29);

 VAR_45 = 8;

 for (VAR_46 = 0; VAR_46 < VAR_29->pubpi.phy_corenum; VAR_46++) {

  if ((VAR_64 & (1 << VAR_46)) == 0)
   continue;

  FUNC_17(VAR_29, 0x0, 0x0,
            VAR_46 ==
            VAR_17 ?
            VAR_27 :
            VAR_28,
            VAR_0, VAR_12);
  FUNC_17(VAR_29, 0x0, 0x0,
            VAR_46 ==
            VAR_17 ?
            VAR_27 :
            VAR_28,
            VAR_1, VAR_12);

  for (VAR_34 = 0; VAR_34 < VAR_45; VAR_34++) {
   if (FUNC_2(VAR_29->pubpi.phy_rev, 7))
    FUNC_5(VAR_29, (VAR_46 == VAR_17) ?
           VAR_23 :
           VAR_24,
           VAR_25, VAR_34);
   else
    FUNC_5(VAR_29, VAR_21 |
           ((VAR_46 ==
      VAR_17) ? VAR_19 :
            VAR_20),
           VAR_22,
           VAR_34 << VAR_18);

   FUNC_11(VAR_29, VAR_12,
            &VAR_38[VAR_34][0],
            VAR_9);
  }

  for (VAR_37 = 0; VAR_37 < 4; VAR_37++) {
   if ((VAR_46 == VAR_37 / 2) &&
       (VAR_37 % 2 == 0)) {

    VAR_40 = VAR_6;
    VAR_35 = 0;
    VAR_44 =
     VAR_7 *
     VAR_9 + 1;
    for (VAR_34 = 0; VAR_34 < VAR_45; VAR_34++) {
     VAR_41 =
      VAR_38[VAR_34][VAR_37] *
      VAR_38[VAR_34][VAR_37] +
      VAR_38[VAR_34][VAR_37 +
          1] *
      VAR_38[VAR_34][VAR_37 +
          1];
     if (VAR_41 < VAR_40) {
      VAR_40 = VAR_41;
      VAR_35 = VAR_34;
     }
     if (VAR_38[VAR_34][VAR_37] <
         VAR_44)
      VAR_44 =
       VAR_38[VAR_34]
       [VAR_37];
    }
    VAR_36 = VAR_35;
    VAR_43[VAR_37] = VAR_44;
   }
  }

  if (FUNC_2(VAR_29->pubpi.phy_rev, 7))
   FUNC_5(VAR_29, (VAR_46 == VAR_17) ?
          VAR_23 :
          VAR_24,
          VAR_25, VAR_36);
  else
   FUNC_5(VAR_29, VAR_21 |
          ((VAR_46 ==
     VAR_17) ? VAR_19 :
           VAR_20), VAR_22,
          VAR_36 << VAR_18);

  for (VAR_37 = 0; VAR_37 < 4; VAR_37++) {
   if (VAR_46 == VAR_37 / 2) {
    VAR_42[VAR_37] =
     (VAR_8 *
      VAR_9) -
     VAR_38[VAR_36][VAR_37];
    if (VAR_42[VAR_37] < 0) {
     VAR_42[VAR_37] =
      FUNC_3(VAR_42
          [VAR_37]);
     VAR_42[VAR_37] +=
      (VAR_9 / 2);
     VAR_42[VAR_37] /=
      VAR_9;
     VAR_42[VAR_37] =
      -VAR_42[
            VAR_37];
    } else {
     VAR_42[VAR_37] +=
      (VAR_9 / 2);
     VAR_42[VAR_37] /=
      VAR_9;
    }

    if (VAR_43[VAR_37] ==
        VAR_7 * VAR_9)
     VAR_42[VAR_37] =
      (VAR_8 -
       VAR_7 - 1);

    FUNC_17(
     VAR_29, 0x0,
     (s8)
     VAR_42
     [VAR_37],
     (VAR_37 / 2 == 0) ?
     VAR_27 :
     VAR_28,
     (VAR_37 % 2 == 0) ?
     VAR_0 : VAR_1,
     VAR_12);
   }
  }

 }

 for (VAR_46 = 0; VAR_46 < VAR_29->pubpi.phy_corenum; VAR_46++) {

  if ((VAR_64 & (1 << VAR_46)) == 0)
   continue;

  for (VAR_47 = 0; VAR_47 < 2; VAR_47++) {
   if (VAR_47 == 0) {
    VAR_48 = VAR_13;
    VAR_33 = VAR_10;
   } else {
    VAR_48 = VAR_14;
    VAR_33 = VAR_11;
   }

   FUNC_17(VAR_29, 0x0, 0x0,
             VAR_46 ==
             VAR_17 ?
             VAR_27
             :
             VAR_28,
             VAR_0, VAR_48);
   FUNC_17(VAR_29, 0x0, 0x0,
             VAR_46 ==
             VAR_17 ?
             VAR_27
             :
             VAR_28,
             VAR_1, VAR_48);

   FUNC_11(VAR_29, VAR_48, VAR_39,
            VAR_9);

   for (VAR_37 = 0; VAR_37 < 4; VAR_37++) {
    if (VAR_46 == VAR_37 / 2) {
     VAR_42[VAR_37] =
      (VAR_33 *
       VAR_9) -
      VAR_39[VAR_37];
     if (VAR_42[VAR_37] <
         0) {
      VAR_42[VAR_37]
       = FUNC_3(
           VAR_42
           [VAR_37]);
      VAR_42[VAR_37]
       += (VAR_9
           / 2);
      VAR_42[VAR_37]
       /= VAR_9;
      VAR_42[VAR_37]
       = -VAR_42
        [VAR_37];
     } else {
      VAR_42[VAR_37]
       += (VAR_9
           / 2);
      VAR_42[VAR_37]
       /= VAR_9;
     }

     FUNC_17(
      VAR_29, 0x0,
      (s8)
      VAR_42
      [VAR_46 *
       2],
      (VAR_46 == VAR_17) ?
      VAR_27 :
      VAR_28,
      (VAR_37 % 2 == 0) ?
      VAR_0 :
      VAR_1,
      VAR_48);
    }
   }

  }
 }

 FUNC_18(VAR_29, 0x91, VAR_49);
 FUNC_18(VAR_29, 0x92, VAR_50);

 FUNC_10(VAR_29, VAR_5);

 FUNC_4(VAR_29, 0xe7, (0x1 << 0), 1 << 0);
 FUNC_4(VAR_29, 0x78, (0x1 << 0), 1 << 0);
 FUNC_4(VAR_29, 0xe7, (0x1 << 0), 0);

 FUNC_4(VAR_29, 0xec, (0x1 << 0), 1 << 0);
 FUNC_4(VAR_29, 0x78, (0x1 << 1), 1 << 1);
 FUNC_4(VAR_29, 0xec, (0x1 << 0), 0);

 FUNC_18(VAR_29, 0x8f, VAR_51);
 FUNC_18(VAR_29, 0xa5, VAR_52);
 FUNC_18(VAR_29, 0xa6, VAR_53);
 FUNC_18(VAR_29, 0xa7, VAR_54);
 FUNC_18(VAR_29, 0xe7, VAR_55);
 FUNC_18(VAR_29, 0xec, VAR_56);
 if (FUNC_2(VAR_29->pubpi.phy_rev, 7)) {
  FUNC_18(VAR_29, 0x342, VAR_65);
  FUNC_18(VAR_29, 0x343, VAR_66);
  FUNC_18(VAR_29, 0x346, VAR_67);
  FUNC_18(VAR_29, 0x347, VAR_68);
 }
 FUNC_18(VAR_29, 0xe5, VAR_57);
 FUNC_18(VAR_29, 0xe6, VAR_58);
 FUNC_18(VAR_29, 0x78, VAR_59);
 FUNC_18(VAR_29, 0xf9, VAR_60);
 FUNC_18(VAR_29, 0xfb, VAR_61);
 if (FUNC_2(VAR_29->pubpi.phy_rev, 7)) {
  FUNC_18(VAR_29, 0x340, VAR_69);
  FUNC_18(VAR_29, 0x341, VAR_70);
  FUNC_18(VAR_29, 0x344, VAR_71);
  FUNC_18(VAR_29, 0x345, VAR_72);
 }
 FUNC_18(VAR_29, 0x7a, VAR_62);
 FUNC_18(VAR_29, 0x7d, VAR_63);

 if (FUNC_0(VAR_29->radio_chanspec)) {
  if (FUNC_2(VAR_29->pubpi.phy_rev, 7)) {
   VAR_29->rssical_cache.rssical_radio_regs_2G[0] =
    FUNC_7(VAR_29, VAR_23);
   VAR_29->rssical_cache.rssical_radio_regs_2G[1] =
    FUNC_7(VAR_29, VAR_24);
  } else {
   VAR_29->rssical_cache.rssical_radio_regs_2G[0] =
    FUNC_7(VAR_29,
            VAR_21 |
            VAR_19);
   VAR_29->rssical_cache.rssical_radio_regs_2G[1] =
    FUNC_7(VAR_29,
            VAR_21 |
            VAR_20);
  }

  VAR_29->rssical_cache.rssical_phyregs_2G[0] =
   FUNC_6(VAR_29, 0x1a6);
  VAR_29->rssical_cache.rssical_phyregs_2G[1] =
   FUNC_6(VAR_29, 0x1ac);
  VAR_29->rssical_cache.rssical_phyregs_2G[2] =
   FUNC_6(VAR_29, 0x1b2);
  VAR_29->rssical_cache.rssical_phyregs_2G[3] =
   FUNC_6(VAR_29, 0x1b8);
  VAR_29->rssical_cache.rssical_phyregs_2G[4] =
   FUNC_6(VAR_29, 0x1a4);
  VAR_29->rssical_cache.rssical_phyregs_2G[5] =
   FUNC_6(VAR_29, 0x1aa);
  VAR_29->rssical_cache.rssical_phyregs_2G[6] =
   FUNC_6(VAR_29, 0x1b0);
  VAR_29->rssical_cache.rssical_phyregs_2G[7] =
   FUNC_6(VAR_29, 0x1b6);
  VAR_29->rssical_cache.rssical_phyregs_2G[8] =
   FUNC_6(VAR_29, 0x1a5);
  VAR_29->rssical_cache.rssical_phyregs_2G[9] =
   FUNC_6(VAR_29, 0x1ab);
  VAR_29->rssical_cache.rssical_phyregs_2G[10] =
   FUNC_6(VAR_29, 0x1b1);
  VAR_29->rssical_cache.rssical_phyregs_2G[11] =
   FUNC_6(VAR_29, 0x1b7);

  VAR_29->nphy_rssical_chanspec_2G = VAR_29->radio_chanspec;
 } else {
  if (FUNC_2(VAR_29->pubpi.phy_rev, 7)) {
   VAR_29->rssical_cache.rssical_radio_regs_5G[0] =
    FUNC_7(VAR_29, VAR_23);
   VAR_29->rssical_cache.rssical_radio_regs_5G[1] =
    FUNC_7(VAR_29, VAR_24);
  } else {
   VAR_29->rssical_cache.rssical_radio_regs_5G[0] =
    FUNC_7(VAR_29,
            VAR_21 |
            VAR_19);
   VAR_29->rssical_cache.rssical_radio_regs_5G[1] =
    FUNC_7(VAR_29,
            VAR_21 |
            VAR_20);
  }

  VAR_29->rssical_cache.rssical_phyregs_5G[0] =
   FUNC_6(VAR_29, 0x1a6);
  VAR_29->rssical_cache.rssical_phyregs_5G[1] =
   FUNC_6(VAR_29, 0x1ac);
  VAR_29->rssical_cache.rssical_phyregs_5G[2] =
   FUNC_6(VAR_29, 0x1b2);
  VAR_29->rssical_cache.rssical_phyregs_5G[3] =
   FUNC_6(VAR_29, 0x1b8);
  VAR_29->rssical_cache.rssical_phyregs_5G[4] =
   FUNC_6(VAR_29, 0x1a4);
  VAR_29->rssical_cache.rssical_phyregs_5G[5] =
   FUNC_6(VAR_29, 0x1aa);
  VAR_29->rssical_cache.rssical_phyregs_5G[6] =
   FUNC_6(VAR_29, 0x1b0);
  VAR_29->rssical_cache.rssical_phyregs_5G[7] =
   FUNC_6(VAR_29, 0x1b6);
  VAR_29->rssical_cache.rssical_phyregs_5G[8] =
   FUNC_6(VAR_29, 0x1a5);
  VAR_29->rssical_cache.rssical_phyregs_5G[9] =
   FUNC_6(VAR_29, 0x1ab);
  VAR_29->rssical_cache.rssical_phyregs_5G[10] =
   FUNC_6(VAR_29, 0x1b1);
  VAR_29->rssical_cache.rssical_phyregs_5G[11] =
   FUNC_6(VAR_29, 0x1b7);

  VAR_29->nphy_rssical_chanspec_5G = VAR_29->radio_chanspec;
 }

 FUNC_8(VAR_29, (0x7 << 0), VAR_30);
 FUNC_9(VAR_29, 1, VAR_31);
}
