
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int phy_rev; } ;
struct TYPE_6__ {int pdetrange; int triso; } ;
struct TYPE_5__ {int pdetrange; int triso; } ;
struct brcms_phy {TYPE_4__* sh; TYPE_3__ pubpi; int edcrs_threshold_lock; int radio_chanspec; TYPE_2__ srom_fem2g; TYPE_1__ srom_fem5g; } ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_8__ {int hw_phyrxchain; int hw_phytxchain; int boardflags2; int physhim; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (struct brcms_phy*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;



 int FUNC_7 (struct brcms_phy*,int,int,int) ;
 int* VAR_26 ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct brcms_phy*,int ) ;
 int FUNC_10 (struct brcms_phy*,int ,int const*,int const*,int ) ;
 int FUNC_11 (struct brcms_phy*,int ,int,int ,int,int*) ;
 int FUNC_12 (struct brcms_phy*,int ,int,int,int,int const*) ;
 int FUNC_13 (struct brcms_phy*,int ) ;
 int FUNC_14 (struct brcms_phy*,int) ;
 int FUNC_15 (struct brcms_phy*) ;
 int FUNC_16 (struct brcms_phy*,int,int) ;
 int FUNC_17 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_18(struct brcms_phy *VAR_27)
{
 static const u8 VAR_28[] = {
  137,
  136,
  131,
  133,
  132,
  134,
  140,
  138
 };
 static const u8 VAR_29[] = { 8, 4, 2, 2, 4, 4, 6, 1 };
 u8 VAR_30[] = {
  135,
  134,
  132,
  140,
  133,
  131,
  136,
  137,
  138
 };
 u8 VAR_31[] = { 8, 6, 6, 4, 4, 18, 42, 1, 1 };
 static const u8 VAR_32[] = {
  135,
  134,
  132,
  140,
  133,
  131,
  139,
  136,
  138
 };
 static const u8 VAR_33[] =
     { 8, 6, 6, 4, 4, 16, 43, 1, 1 };
 s16 VAR_34, VAR_35, VAR_36;
 s16 VAR_37, VAR_38, VAR_39;
 u32 VAR_40, VAR_41, VAR_42,
     VAR_43;
 u8 VAR_44 = 0;
 static const u16 VAR_45 = 0x0002;
 u16 VAR_46[] = { 0xa2, 0xb4, 0xb4, 0x89 };
 u16 VAR_47[] = { 0xa2, 0xb4, 0xb4, 0x89 };
 u16 *VAR_48;
 u16 VAR_49[] = { 0x02, 0x02, 0x02, 0x00 };
 u16 VAR_50[] = { 0x02, 0x02, 0x02, 0x00 };
 u16 *VAR_51;
 static const u16 VAR_52[] = { 0xb4, 0xb4, 0xb4, 0x24 };
 static const u16 VAR_53[] = { 0x02, 0x02, 0x02, 0x02 };
 s32 VAR_54 = 0x18d;
 u8 VAR_55;
 u8 VAR_56;

 FUNC_16(VAR_27, 0x23f, 0x1f8);
 FUNC_16(VAR_27, 0x240, 0x1f8);

 FUNC_11(VAR_27, VAR_10,
    1, 0, 32, &VAR_40);
 VAR_40 = VAR_40 & 0xffffff;
 FUNC_12(VAR_27, VAR_10,
     1, 0, 32, &VAR_40);

 VAR_34 = 293;
 VAR_35 = 435;
 VAR_36 = 261;
 VAR_37 = 366;
 VAR_38 = 205;
 VAR_39 = 32;
 FUNC_16(VAR_27, 0x145, VAR_34);
 FUNC_16(VAR_27, 0x146, VAR_35);
 FUNC_16(VAR_27, 0x147, VAR_36);
 FUNC_16(VAR_27, 0x148, VAR_37);
 FUNC_16(VAR_27, 0x149, VAR_38);
 FUNC_16(VAR_27, 0x14a, VAR_39);

 FUNC_16(VAR_27, 0x38, 0xC);
 FUNC_16(VAR_27, 0x2ae, 0xC);

 FUNC_10(VAR_27, VAR_8,
          VAR_28,
          VAR_29,
          FUNC_0(VAR_28));

 if (FUNC_6(VAR_27))
  FUNC_10(VAR_27, VAR_7,
           VAR_32,
           VAR_33,
           FUNC_0 (VAR_32));

 if ((VAR_27->sh->hw_phyrxchain != 0x3) &&
     (VAR_27->sh->hw_phyrxchain != VAR_27->sh->hw_phytxchain)) {

  if (FUNC_6(VAR_27)) {
   VAR_31[5] = 59;
   VAR_31[6] = 1;
   VAR_30[7] = 138;
  }

  FUNC_10(VAR_27, VAR_7,
           VAR_30,
           VAR_31,
           FUNC_0 (VAR_30));
 }

 if (FUNC_1(VAR_27->radio_chanspec))
  FUNC_16(VAR_27, 0x6a, 0x2);
 else
  FUNC_16(VAR_27, 0x6a, 0x9c40);

 FUNC_7(VAR_27, 0x294, (0xf << 8), (7 << 8));

 if (FUNC_2(VAR_27->radio_chanspec) == 0) {
  FUNC_12(VAR_27, VAR_11, 1, 3,
      32, &VAR_54);
  FUNC_12(VAR_27, VAR_11, 1,
      127, 32, &VAR_54);
 } else {
  VAR_54 = VAR_26[3];
  FUNC_12(VAR_27, VAR_11, 1, 3,
      32, &VAR_54);

  VAR_54 = VAR_26[127];
  FUNC_12(VAR_27, VAR_11, 1,
      127, 32, &VAR_54);
 }

 FUNC_15(VAR_27);

 FUNC_12(VAR_27, VAR_9, 1, 0x00, 16,
     &VAR_45);
 FUNC_12(VAR_27, VAR_9, 1, 0x10, 16,
     &VAR_45);

 VAR_55 = (FUNC_3(VAR_27->radio_chanspec)) ?
   VAR_27->srom_fem5g.pdetrange : VAR_27->srom_fem2g.pdetrange;

 if (VAR_55 == 0) {
  if (FUNC_4(VAR_27->pubpi.phy_rev, 4)) {
   VAR_48 = VAR_46;
   VAR_51 = VAR_49;
  } else {
   VAR_48 = VAR_47;
   VAR_51 = VAR_50;
  }
  VAR_44 = FUNC_9(VAR_27, 0);
  if (VAR_44 != VAR_25) {
   switch (VAR_44) {
   case 129:
    VAR_48[3] = 0x89;
    VAR_51[3] = 0;
    break;
   case 128:
    VAR_48[3] = 0x89;
    VAR_51[3] = 0;
    break;
   case 130:
    VAR_48[3] = 0x89;
    VAR_51[3] = 0;
    break;
   default:
    break;
   }
  }
  FUNC_12(VAR_27, VAR_9, 4,
      0x08, 16, VAR_48);
  FUNC_12(VAR_27, VAR_9, 4,
      0x18, 16, VAR_48);
  FUNC_12(VAR_27, VAR_9, 4,
      0x0c, 16, VAR_51);
  FUNC_12(VAR_27, VAR_9, 4,
      0x1c, 16, VAR_51);
 } else if (VAR_55 == 1) {
  FUNC_12(VAR_27, VAR_9, 4,
      0x08, 16, VAR_52);
  FUNC_12(VAR_27, VAR_9, 4,
      0x18, 16, VAR_52);
  FUNC_12(VAR_27, VAR_9, 4,
      0x0c, 16, VAR_53);
  FUNC_12(VAR_27, VAR_9, 4,
      0x1c, 16, VAR_53);
 } else if (VAR_55 == 2) {

  u16 VAR_57[] = { 0xa2, 0xb4, 0xb4, 0x74 };
  u16 VAR_58[] = { 0x02, 0x02, 0x02, 0x04 };

  if (FUNC_4(VAR_27->pubpi.phy_rev, 6)) {
   VAR_44 =
       FUNC_9(VAR_27, 0);
   if (VAR_44 != VAR_25) {
    VAR_57[3] = 0x8e;
    VAR_58[3] = 0x03;
   } else {
    VAR_57[3] = 0x94;
    VAR_58[3] = 0x03;
   }
  } else if (FUNC_5(VAR_27->pubpi.phy_rev, 5)) {
   VAR_57[3] = 0x84;
   VAR_58[3] = 0x02;
  }

  FUNC_12(VAR_27, VAR_9, 4,
      0x08, 16, VAR_57);
  FUNC_12(VAR_27, VAR_9, 4,
      0x18, 16, VAR_57);
  FUNC_12(VAR_27, VAR_9, 4,
      0x0c, 16, VAR_58);
  FUNC_12(VAR_27, VAR_9, 4,
      0x1c, 16, VAR_58);
 } else if (VAR_55 == 3) {
  VAR_44 = FUNC_9(VAR_27, 0);
  if ((FUNC_4(VAR_27->pubpi.phy_rev, 4)) &&
      (VAR_44 == VAR_25)) {
   u16 VAR_59[] = { 0xa2, 0xb4, 0xb4, 0x270 };
   u16 VAR_60[] = { 0x02, 0x02, 0x02, 0x00 };

   FUNC_12(VAR_27, VAR_9, 4,
       0x08, 16, VAR_59);
   FUNC_12(VAR_27, VAR_9, 4,
       0x18, 16, VAR_59);
   FUNC_12(VAR_27, VAR_9, 4,
       0x0c, 16, VAR_60);
   FUNC_12(VAR_27, VAR_9, 4,
       0x1c, 16, VAR_60);
  }
 } else if ((VAR_55 == 4) || (VAR_55 == 5)) {
  u16 VAR_61[] = { 0xa2, 0xb4, 0xb4, 0x0 };
  u16 VAR_62[] = { 0x02, 0x02, 0x02, 0x0 };
  u16 VAR_63[2], VAR_64[2];

  VAR_44 = FUNC_9(VAR_27, 0);
  if (VAR_44 != VAR_25) {
   VAR_63[0] = (VAR_55 == 4) ? 0x8e : 0x89;
   VAR_63[1] = (VAR_55 == 4) ? 0x96 : 0x89;
   VAR_64[0] = (VAR_55 == 4) ? 2 : 0;
   VAR_64[1] = (VAR_55 == 4) ? 2 : 0;
  } else {
   VAR_63[0] = (VAR_55 == 4) ? 0x89 : 0x74;
   VAR_63[1] = (VAR_55 == 4) ? 0x8b : 0x70;
   VAR_64[0] = (VAR_55 == 4) ? 2 : 0;
   VAR_64[1] = (VAR_55 == 4) ? 2 : 0;
  }

  VAR_61[3] = VAR_63[0];
  VAR_62[3] = VAR_64[0];
  FUNC_12(VAR_27, VAR_9, 4,
      0x08, 16, VAR_61);
  FUNC_12(VAR_27, VAR_9, 4,
      0x0c, 16, VAR_62);

  VAR_61[3] = VAR_63[1];
  VAR_62[3] = VAR_64[1];
  FUNC_12(VAR_27, VAR_9, 4,
      0x18, 16, VAR_61);
  FUNC_12(VAR_27, VAR_9, 4,
      0x1c, 16, VAR_62);
 }

 FUNC_17(VAR_27, (VAR_20 | VAR_14), 0x0);
 FUNC_17(VAR_27, (VAR_20 | VAR_15), 0x0);

 FUNC_17(VAR_27, (VAR_17 | VAR_14), 0x6);
 FUNC_17(VAR_27, (VAR_17 | VAR_15), 0x6);

 FUNC_17(VAR_27, (VAR_16 | VAR_14), 0x7);
 FUNC_17(VAR_27, (VAR_16 | VAR_15), 0x7);

 FUNC_17(VAR_27, (VAR_19 | VAR_14), 0x88);
 FUNC_17(VAR_27, (VAR_19 | VAR_15), 0x88);

 FUNC_17(VAR_27, (VAR_18 | VAR_14), 0x0);
 FUNC_17(VAR_27, (VAR_18 | VAR_15), 0x0);

 FUNC_17(VAR_27, (VAR_21 | VAR_14), 0x0);
 FUNC_17(VAR_27, (VAR_21 | VAR_15), 0x0);

 VAR_56 = (FUNC_3(VAR_27->radio_chanspec)) ?
   VAR_27->srom_fem5g.triso : VAR_27->srom_fem2g.triso;
 if (VAR_56 == 7) {
  FUNC_13(VAR_27, VAR_12);
  FUNC_13(VAR_27, VAR_13);
 }

 FUNC_14(VAR_27, VAR_27->sh->hw_phytxchain);

 if (((VAR_27->sh->boardflags2 & VAR_0) &&
      (FUNC_3(VAR_27->radio_chanspec))) ||
     (((VAR_27->sh->boardflags2 & VAR_1) ||
       (VAR_27->sh->boardflags2 & VAR_2)) &&
      (FUNC_1(VAR_27->radio_chanspec)))) {
  VAR_42 = 0x00088888;
  VAR_41 = 0x00088888;
  VAR_43 = 0x00088888;
 } else {
  VAR_42 = 0x88888888;
  VAR_41 = 0x88888888;
  VAR_43 = 0x88888888;
 }
 FUNC_12(VAR_27, VAR_10,
     1, 1, 32, &VAR_42);
 FUNC_12(VAR_27, VAR_10,
     1, 2, 32, &VAR_41);
 FUNC_12(VAR_27, VAR_10,
     1, 3, 32, &VAR_43);

 if (FUNC_5(VAR_27->pubpi.phy_rev, 4)) {
  if (FUNC_3(VAR_27->radio_chanspec)) {
   FUNC_17(VAR_27,
     VAR_24 |
     VAR_22, 0x70);
   FUNC_17(VAR_27,
     VAR_24 |
     VAR_23, 0x70);
  }
 }

 if (!VAR_27->edcrs_threshold_lock) {
  FUNC_16(VAR_27, 0x224, 0x3eb);
  FUNC_16(VAR_27, 0x225, 0x3eb);
  FUNC_16(VAR_27, 0x226, 0x341);
  FUNC_16(VAR_27, 0x227, 0x341);
  FUNC_16(VAR_27, 0x228, 0x42b);
  FUNC_16(VAR_27, 0x229, 0x42b);
  FUNC_16(VAR_27, 0x22a, 0x381);
  FUNC_16(VAR_27, 0x22b, 0x381);
  FUNC_16(VAR_27, 0x22c, 0x42b);
  FUNC_16(VAR_27, 0x22d, 0x42b);
  FUNC_16(VAR_27, 0x22e, 0x381);
  FUNC_16(VAR_27, 0x22f, 0x381);
 }

 if (FUNC_4(VAR_27->pubpi.phy_rev, 6)) {

  if (VAR_27->sh->boardflags2 & VAR_3)
   FUNC_8(VAR_27->sh->physhim, VAR_5,
           VAR_6,
           VAR_6, VAR_4);
 }
}
