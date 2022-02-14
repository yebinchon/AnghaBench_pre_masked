
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct b43_phy {int rev; TYPE_5__* chandef; struct b43_phy_n* n; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;
struct TYPE_8__ {int center_freq; } ;
struct TYPE_7__ {int center_freq; } ;
struct TYPE_6__ {int* rssical_radio_regs_2G; int* rssical_phy_regs_2G; int* rssical_radio_regs_5G; int* rssical_phy_regs_5G; } ;
struct b43_phy_n {TYPE_3__ rssical_chanspec_5G; TYPE_2__ rssical_chanspec_2G; TYPE_1__ rssical_cache; } ;
typedef int s32 ;
struct TYPE_10__ {TYPE_4__* chan; } ;
struct TYPE_9__ {int center_freq; } ;


 int FUNC_0 (int*) ;
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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int ) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int,int*,int) ;
 int FUNC_8 (struct b43_wldev*,int*) ;
 int FUNC_9 (struct b43_wldev*,int ,int,int) ;
 int FUNC_10 (struct b43_wldev*,int,int,int ,int) ;
 int FUNC_11 (struct b43_wldev*,int ,int,int ,int) ;
 int FUNC_12 (struct b43_wldev*,int,int,int ,int,int ) ;
 int FUNC_13 (struct b43_wldev*,int ,int,int,int,int) ;
 int FUNC_14 (struct b43_wldev*,int*) ;
 int FUNC_15 (struct b43_wldev*,int,int) ;
 int FUNC_16 (struct b43_wldev*,int) ;
 int FUNC_17 (struct b43_wldev*,int,int) ;
 int FUNC_18 (struct b43_wldev*,int,int) ;
 int FUNC_19 (struct b43_wldev*,int,int,int) ;
 int FUNC_20 (struct b43_wldev*,int) ;

__attribute__((used)) static void FUNC_21(struct b43_wldev *VAR_53)
{
 struct b43_phy *VAR_54 = &VAR_53->phy;
 struct b43_phy_n *VAR_55 = VAR_53->phy.n;

 u16 VAR_56[2];
 u16 VAR_57[22];
 u16 VAR_58[] = {
  VAR_6, VAR_5,
  VAR_3, VAR_4,
  VAR_38, VAR_22,
  VAR_37, VAR_39,
  VAR_15,
  VAR_20, VAR_21,
  VAR_23, VAR_24
 };
 u16 VAR_59[] = {
  VAR_6, VAR_5,
  VAR_3, VAR_4,
  VAR_38, VAR_22,
  VAR_11, VAR_12,
  VAR_13, VAR_14,
  0x2ff,
  VAR_37, VAR_39,
  VAR_15,
  VAR_20, VAR_21,
  VAR_7, VAR_8,
  VAR_9, VAR_10,
  VAR_23, VAR_24
 };
 u16 *VAR_60;
 int VAR_61;

 u16 VAR_62;

 u16 VAR_63[2];
 u16 VAR_64[2] = { 0xFFFF, 0xFFFF };

 u8 VAR_65 = 0;
 s32 VAR_66[4];
 s32 VAR_67[8][4] = { };
 s32 VAR_68[4] = { };
 s32 VAR_69[4] = { };

 u16 *VAR_70 = ((void*)0);
 u16 *VAR_71 = ((void*)0);

 u16 VAR_72;
 u8 VAR_73;
 int VAR_74, VAR_75, VAR_76, VAR_77;

 if (VAR_53->phy.rev >= 7) {
  VAR_60 = VAR_59;
  VAR_61 = FUNC_0(VAR_59);
 } else {
  VAR_60 = VAR_58;
  VAR_61 = FUNC_0(VAR_58);
 }
 FUNC_1(VAR_61 > FUNC_0(VAR_57));

 VAR_62 = FUNC_4(VAR_53, 0, 0);
 FUNC_4(VAR_53, 7, 4);
 FUNC_8(VAR_53, VAR_63);
 FUNC_14(VAR_53, VAR_64);

 VAR_56[0] = FUNC_16(VAR_53, VAR_18);
 VAR_56[1] = FUNC_16(VAR_53, VAR_19);
 for (VAR_75 = 0; VAR_75 < VAR_61; VAR_75++)
  VAR_57[VAR_75] = FUNC_16(VAR_53, VAR_60[VAR_75]);

 FUNC_9(VAR_53, VAR_43, 0, 7);
 FUNC_9(VAR_53, VAR_44, 1, 7);

 if (VAR_53->phy.rev >= 7) {
  FUNC_11(VAR_53,
           VAR_47,
           0, 0, 0);
  FUNC_11(VAR_53,
           VAR_48,
           1, 0, 0);
  FUNC_12(VAR_53, 0x80, 1, 0, 0, 0);
  FUNC_12(VAR_53, 0x40, 1, 0, 0, 0);
  if (FUNC_3(VAR_53->wl) == VAR_42) {
   FUNC_12(VAR_53, 0x20, 0, 0, 0,
            0);
   FUNC_12(VAR_53, 0x10, 1, 0, 0,
            0);
  } else {
   FUNC_12(VAR_53, 0x10, 0, 0, 0,
            0);
   FUNC_12(VAR_53, 0x20, 1, 0, 0,
            0);
  }
 } else {
  FUNC_10(VAR_53, 0x1, 0, 0, 0);
  FUNC_10(VAR_53, 0x2, 1, 0, 0);
  FUNC_10(VAR_53, 0x80, 1, 0, 0);
  FUNC_10(VAR_53, 0x40, 1, 0, 0);
  if (FUNC_3(VAR_53->wl) == VAR_42) {
   FUNC_10(VAR_53, 0x20, 0, 0, 0);
   FUNC_10(VAR_53, 0x10, 1, 0, 0);
  } else {
   FUNC_10(VAR_53, 0x10, 0, 0, 0);
   FUNC_10(VAR_53, 0x20, 1, 0, 0);
  }
 }

 VAR_73 = FUNC_6(VAR_53);
 for (VAR_74 = 0; VAR_74 < 2; VAR_74++) {
  if (!(VAR_73 & (1 << VAR_74)))
   continue;
  VAR_72 = VAR_74 ? VAR_1 : VAR_0;
  FUNC_13(VAR_53, 0, 0, VAR_74 + 1, VAR_45,
        VAR_49);
  FUNC_13(VAR_53, 0, 0, VAR_74 + 1, VAR_46,
        VAR_49);


  for (VAR_77 = 0; VAR_77 < 8; VAR_77++) {
   if (VAR_53->phy.rev >= 7)
    FUNC_19(VAR_53,
        VAR_74 ? VAR_51 :
        VAR_50,
        ~VAR_52, VAR_77);
   else
    FUNC_19(VAR_53, VAR_72 | VAR_2,
        0xE3, VAR_77 << 2);
   FUNC_7(VAR_53, VAR_49, VAR_67[VAR_77], 8);
  }


  for (VAR_75 = 0; VAR_75 < 4; VAR_75 += 2) {
   s32 VAR_78;
   s32 VAR_79 = 0x100000;
   s32 VAR_80 = 249;
   u8 VAR_81 = 0;
   if (2 * VAR_74 != VAR_75)
    continue;
   for (VAR_77 = 0; VAR_77 < 8; VAR_77++) {
    VAR_78 = VAR_67[VAR_77][VAR_75] * VAR_67[VAR_77][VAR_75] +
     VAR_67[VAR_77][VAR_75 + 1] * VAR_67[VAR_77][VAR_75];
    if (VAR_78 < VAR_79) {
     VAR_79 = VAR_78;
     VAR_81 = VAR_77;
    }
    if (VAR_67[VAR_77][VAR_75] < VAR_80)
     VAR_80 = VAR_67[VAR_77][VAR_75];
   }
   VAR_65 = VAR_81;
   VAR_68[VAR_75] = VAR_80;
  }


  if (VAR_53->phy.rev >= 7)
   FUNC_19(VAR_53,
       VAR_74 ? VAR_51 :
       VAR_50,
       ~VAR_52, VAR_77);
  else
   FUNC_19(VAR_53, VAR_72 | VAR_2,
       0xE3, VAR_65 << 2);

  for (VAR_75 = 0; VAR_75 < 4; VAR_75++) {
   if (VAR_74 != VAR_75 / 2)
    continue;
   VAR_66[VAR_75] = -VAR_67[VAR_65][VAR_75];
   if (VAR_66[VAR_75] < 0)
    VAR_66[VAR_75] = -((FUNC_2(VAR_66[VAR_75]) + 4) / 8);
   else
    VAR_66[VAR_75] = (VAR_66[VAR_75] + 4) / 8;
   if (VAR_68[VAR_75] == 248)
    VAR_66[VAR_75] = -32;
   FUNC_13(VAR_53, 0, VAR_66[VAR_75],
         (VAR_75 / 2 == 0) ? 1 : 2,
         (VAR_75 % 2 == 0) ? VAR_45 : VAR_46,
         VAR_49);
  }
 }

 for (VAR_74 = 0; VAR_74 < 2; VAR_74++) {
  if (!(VAR_73 & (1 << VAR_74)))
   continue;
  for (VAR_75 = 0; VAR_75 < 2; VAR_75++) {
   FUNC_13(VAR_53, 0, 0, VAR_74 + 1,
         VAR_45, VAR_75);
   FUNC_13(VAR_53, 0, 0, VAR_74 + 1,
         VAR_46, VAR_75);
   FUNC_7(VAR_53, VAR_75, VAR_69, 8);
   for (VAR_76 = 0; VAR_76 < 4; VAR_76++) {
    if (VAR_76 / 2 == VAR_74) {
     VAR_66[VAR_76] = 232 - VAR_69[VAR_76];
     if (VAR_66[VAR_76] < 0)
      VAR_66[VAR_76] = -(FUNC_2(VAR_66[VAR_76] + 4) / 8);
     else
      VAR_66[VAR_76] = (VAR_66[VAR_76] + 4) / 8;
     FUNC_13(VAR_53, 0,
      VAR_66[2 * VAR_74], VAR_74 + 1, VAR_76 % 2, VAR_75);
    }
   }
  }
 }

 FUNC_18(VAR_53, VAR_18, VAR_56[0]);
 FUNC_18(VAR_53, VAR_19, VAR_56[1]);

 FUNC_5(VAR_53, VAR_40);

 FUNC_17(VAR_53, VAR_38, 0x1);
 FUNC_17(VAR_53, VAR_15, VAR_17);
 FUNC_15(VAR_53, VAR_38, ~0x1);

 FUNC_17(VAR_53, VAR_22, 0x1);
 FUNC_17(VAR_53, VAR_15, VAR_16);
 FUNC_15(VAR_53, VAR_22, ~0x1);

 for (VAR_75 = 0; VAR_75 < VAR_61; VAR_75++)
  FUNC_18(VAR_53, VAR_60[VAR_75], VAR_57[VAR_75]);


 if (FUNC_3(VAR_53->wl) == VAR_41) {
  VAR_70 = VAR_55->rssical_cache.rssical_radio_regs_2G;
  VAR_71 = VAR_55->rssical_cache.rssical_phy_regs_2G;
 } else {
  VAR_70 = VAR_55->rssical_cache.rssical_radio_regs_5G;
  VAR_71 = VAR_55->rssical_cache.rssical_phy_regs_5G;
 }
 if (VAR_53->phy.rev >= 7) {
  VAR_70[0] = FUNC_20(VAR_53,
             VAR_50);
  VAR_70[1] = FUNC_20(VAR_53,
             VAR_51);
 } else {
  VAR_70[0] = FUNC_20(VAR_53, VAR_0 |
             VAR_2);
  VAR_70[1] = FUNC_20(VAR_53, VAR_1 |
             VAR_2);
 }
 VAR_71[0] = FUNC_16(VAR_53, VAR_27);
 VAR_71[1] = FUNC_16(VAR_53, VAR_30);
 VAR_71[2] = FUNC_16(VAR_53, VAR_33);
 VAR_71[3] = FUNC_16(VAR_53, VAR_36);
 VAR_71[4] = FUNC_16(VAR_53, VAR_25);
 VAR_71[5] = FUNC_16(VAR_53, VAR_28);
 VAR_71[6] = FUNC_16(VAR_53, VAR_31);
 VAR_71[7] = FUNC_16(VAR_53, VAR_34);
 VAR_71[8] = FUNC_16(VAR_53, VAR_26);
 VAR_71[9] = FUNC_16(VAR_53, VAR_29);
 VAR_71[10] = FUNC_16(VAR_53, VAR_32);
 VAR_71[11] = FUNC_16(VAR_53, VAR_35);


 if (FUNC_3(VAR_53->wl) == VAR_41)
  VAR_55->rssical_chanspec_2G.center_freq = VAR_54->chandef->chan->center_freq;
 else
  VAR_55->rssical_chanspec_5G.center_freq = VAR_54->chandef->chan->center_freq;


 FUNC_4(VAR_53, 7, VAR_62);
 FUNC_14(VAR_53, VAR_63);
}
