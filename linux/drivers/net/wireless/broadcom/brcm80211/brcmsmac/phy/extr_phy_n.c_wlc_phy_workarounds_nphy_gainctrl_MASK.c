
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {int radiorev; int phy_corenum; int phy_rev; } ;
struct TYPE_6__ {int triso; } ;
struct TYPE_5__ {int triso; } ;
struct brcms_phy {int radio_chanspec; TYPE_4__ pubpi; scalar_t__ nphy_elna_gain_config; scalar_t__ nphy_gain_boost; TYPE_3__* sh; TYPE_2__ srom_fem2g; TYPE_1__ srom_fem5g; } ;
typedef int s8 ;
struct TYPE_7__ {int boardflags; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
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
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (struct brcms_phy*,int,int,int) ;
 int FUNC_8 (struct brcms_phy*,int) ;
 int FUNC_9 (struct brcms_phy*) ;
 int FUNC_10 (struct brcms_phy*,int ,int*,int const*,int ) ;
 int FUNC_11 (struct brcms_phy*,int,int,int,int,...) ;
 int FUNC_12 (struct brcms_phy*) ;
 int FUNC_13 (struct brcms_phy*) ;
 int FUNC_14 (struct brcms_phy*,int,int) ;
 int FUNC_15 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_16(struct brcms_phy *VAR_23)
{
 u16 VAR_24, VAR_25, VAR_26;
 int VAR_27;
 u8 VAR_28[] = {
  VAR_5,
  VAR_4,
  VAR_6
 };
 static const u8 VAR_29[] = { 10, 30, 1 };
 static const s8 VAR_30[] = { 7, 11, 16, 23 };
 static const s8 VAR_31[] = { 8, 12, 17, 25 };
 static const s8 VAR_32[] = { 9, 13, 18, 26 };
 static const s8 VAR_33[] = { 8, 13, 18, 25 };
 static const s8 VAR_34[] = { 10, 14, 19, 27 };
 static const s8 VAR_35[] = { 7, 11, 17, 23 };
 static const s8 VAR_36[] = { 8, 12, 18, 23 };
 static const s8 VAR_37[] = { 6, 10, 16, 21 };
 static const s8 VAR_38[] = { 6, 10, 16, 21 };
 const s8 *VAR_39 = ((void*)0);
 static const s8 VAR_40[] = { -5, 6, 10, 14 };
 static const s8 VAR_41[] = { -3, 7, 11, 16 };
 static const s8 VAR_42[] = { -5, 6, 10, 14 };
 static const s8 VAR_43[] = { -5, 6, 10, 15 };
 static const s8 VAR_44[] = { -6, 2, 6, 10 };
 static const s8 VAR_45[] = { -5, 2, 6, 10 };
 static const s8 VAR_46[] = { -7, 0, 4, 8 };
 static const s8 VAR_47[] = { -7, 0, 4, 8 };
 const s8 *VAR_48 = ((void*)0);
 static const s8 VAR_49[] = {
  0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A };
 static const s8 VAR_50[] = {
  0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13 };
 static const s8 VAR_51[] = {
  0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d };
 static const s8 VAR_52[] = {
  0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d };
 static const s8 VAR_53[] = {
  0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d };
 const s8 *VAR_54;
 static const s8 VAR_55[] = {
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03 };
 static const s8 VAR_56[] = {
  0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06 };
 static const s8 VAR_57[] = {
  0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 };
 static const s8 VAR_58[] = {
  0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 };
 static const s8 VAR_59[] = {
  0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 };
 const s8 *VAR_60;
 static const s8 VAR_61[] = { 0x00, 0x06, 0x0c, 0x12, 0x12, 0x12 };
 static const s8 VAR_62[] = { 0x00, 0x01, 0x02, 0x03, 0x03, 0x03 };
 static const u16 VAR_63[] = { 0x613f, 0x613f, 0x613f, 0x613f };
 static const u16 VAR_64[] = { 0x513f, 0x513f, 0x513f, 0x513f };
 static const u16 VAR_65[] = { 0x413f, 0x413f, 0x413f, 0x413f };
 static const u16 VAR_66[] = {
  0x013f, 0x013f, 0x013f, 0x013f };
 static const u16 VAR_67[] = { 0x513f, 0x513f };
 static const u16 VAR_68[] = { 0x413f, 0x413f };
 static const u16 VAR_69[] = { 0x113f, 0x113f };
 static const u16 VAR_70[] = { 0x516f, 0x516f, 0x516f, 0x516f };
 static const u16 VAR_71[] = { 0x614f, 0x614f, 0x614f, 0x614f };
 static const u16 VAR_72[] = {
  0x314f, 0x314f, 0x314f, 0x314f };
 static const u16 VAR_73[] = { 0x714f, 0x714f, 0x714f, 0x714f };
 static const u16 VAR_74[] = { 0x714f, 0x714f };
 const u16 *VAR_75;
 u16 VAR_76 = 0x627e;
 u16 VAR_77 = 0x527e;
 u16 VAR_78 = 0x427e;
 u16 VAR_79 = 0x027e;
 u16 VAR_80 = 0x527e;
 u16 VAR_81 = 0x427e;
 u16 VAR_82 = 0x127e;
 u16 VAR_83 = 0x52de;
 u16 VAR_84 = 0x629e;
 u16 VAR_85 = 0x329e;
 u16 VAR_86 = 0x729e;
 u16 VAR_87 = 0x729e;
 u16 VAR_88;
 u16 VAR_89 = 0x107e;
 u16 VAR_90 = 0x007e;
 u16 VAR_91 = 0x1076;
 u16 VAR_92 = 0x007e;
 u16 VAR_93 = 0x00de;
 u16 VAR_94 = 0x029e;
 u16 VAR_95 = 0x029e;
 u16 VAR_96 = 0x029e;
 u16 VAR_97;
 u16 VAR_98 = 0x0066;
 u16 VAR_99 = 0x00ca;
 u16 VAR_100 = 0x1084;
 u16 VAR_101 = 0x2084;
 u16 VAR_102 = 0x2084;
 u16 VAR_103 = 0;
 u16 VAR_104 = 0x0074;
 static const u16 VAR_105[] = {
  0x0062, 0x0064, 0x006a, 0x106a, 0x106c, 0x1074, 0x107c, 0x207c
 };
 static const u16 VAR_106[] = {
  0x106a, 0x106c, 0x1074, 0x107c, 0x007e, 0x107e, 0x207e, 0x307e
 };
 u16 VAR_107 = 0x1074;
 u16 VAR_108 = 0x00cc;
 u16 VAR_109 = 0x0086;
 u16 VAR_110 = 0x2086;
 u16 VAR_111 = 0x2086;
 u16 VAR_112;
 u8 VAR_113 = 0x18;
 u8 VAR_114 = 0x18;
 u8 VAR_115 = 0x18;
 u8 VAR_116 = 0x1e;
 u8 VAR_117 = 0x24;
 u8 VAR_118 = 0x24;
 u8 VAR_119 = 0x24;
 u8 VAR_120;
 u8 VAR_121 = 0x18;
 u8 VAR_122 = 0x18;
 u8 VAR_123 = 0x18;
 u8 VAR_124 = 0x1e;
 u8 VAR_125 = 0x24;
 u8 VAR_126 = 0x24;
 u8 VAR_127 = 0x24;
 u8 VAR_128 = 0;
 u8 VAR_129 = 0x18;
 u8 VAR_130 = 0x18;
 u8 VAR_131 = 0x18;
 u8 VAR_132 = 0x1e;
 u8 VAR_133 = 0x24;
 u8 VAR_134 = 0x24;
 u8 VAR_135 = 0x24;
 u8 VAR_136 = 0x2d;
 u8 VAR_137;
 u16 VAR_138 = 0x20d;
 u16 VAR_139 = 0x1a1;
 u16 VAR_140 = 0x1d0;
 u16 VAR_141 = 0x1d0;
 u16 VAR_142 = 0x1a1;
 u16 VAR_143 = 0x107;
 u16 VAR_144 = 0x0a9;
 u16 VAR_145 = 0x0f0;
 u16 VAR_146 = 0;
 u8 VAR_147 = 5;
 u8 VAR_148 = 9;
 u8 VAR_149 = 5;
 u8 VAR_150 = 25, VAR_151;
 u8 VAR_152 = 0x50;
 u8 VAR_153 = 0x50;
 u8 VAR_154 = 0x90;
 u8 VAR_155 = 0x90;
 u8 VAR_156;
 u16 VAR_157[21];
 u8 VAR_158;

 VAR_158 = (FUNC_4(VAR_23->radio_chanspec)) ? VAR_23->srom_fem5g.triso :
  VAR_23->srom_fem2g.triso;

 if (FUNC_5(VAR_23->pubpi.phy_rev, 7)) {
  if (VAR_23->pubpi.radiorev == 5) {
   FUNC_12(VAR_23);
  } else if (VAR_23->pubpi.radiorev == 7) {
   FUNC_13(VAR_23);

   FUNC_7(VAR_23, 0x283, (0xff << 0), (0x44 << 0));
   FUNC_7(VAR_23, 0x280, (0xff << 0), (0x44 << 0));

  } else if ((VAR_23->pubpi.radiorev == 3)
      || (VAR_23->pubpi.radiorev == 8)) {
   FUNC_13(VAR_23);

   if (VAR_23->pubpi.radiorev == 8) {
    FUNC_7(VAR_23, 0x283,
         (0xff << 0), (0x44 << 0));
    FUNC_7(VAR_23, 0x280,
         (0xff << 0), (0x44 << 0));
   }
  } else {
   FUNC_13(VAR_23);
  }
 } else if (FUNC_5(VAR_23->pubpi.phy_rev, 3)) {

  FUNC_7(VAR_23, 0xa0, (0x1 << 6), (1 << 6));

  FUNC_7(VAR_23, 0x1c, (0x1 << 13), (1 << 13));
  FUNC_7(VAR_23, 0x32, (0x1 << 13), (1 << 13));

  VAR_26 =
   FUNC_8(VAR_23, 0x09) & VAR_3;
  if (VAR_26 == 0) {
   if (FUNC_5(VAR_23->pubpi.phy_rev, 6)) {
    if (VAR_23->pubpi.radiorev == 11) {
     VAR_39 = VAR_34;
     VAR_48 = VAR_43;
     VAR_75 =
      VAR_68;
     VAR_88 =
      VAR_81;
     VAR_97 =
      VAR_92;
     VAR_112 =
      VAR_107;
     VAR_146 = VAR_141;
     VAR_151 = VAR_149;
     VAR_120 = VAR_115;
     VAR_128 = VAR_123;
     VAR_137 = VAR_131;
     VAR_156 = VAR_153;
    } else {
     VAR_39 = VAR_33;
     VAR_48 = VAR_42;
     if (VAR_23->sh->boardflags & VAR_0) {

      VAR_75 =
           VAR_69;
      VAR_88 =
             VAR_82;
     } else {
      VAR_75 =
       VAR_67;
      VAR_88 =
       VAR_80;
     }
     VAR_97 =
      VAR_92;
     switch (VAR_158) {
     case 0:
      VAR_112 =
       VAR_106
       [0];
      break;
     case 1:
      VAR_112 =
       VAR_106
       [1];
      break;
     case 2:
      VAR_112 =
       VAR_106
       [2];
      break;
     case 3:
     default:

      VAR_112 =
       VAR_106
       [3];
      break;
     case 4:
      VAR_112 =
       VAR_106
       [4];
      break;
     case 5:
      VAR_112 =
       VAR_106
       [5];
      break;
     case 6:
      VAR_112 =
       VAR_106
       [6];
      break;
     case 7:
      VAR_112 =
       VAR_106
       [7];
      break;
     }
     VAR_146 = VAR_141;
     VAR_151 = VAR_149;
     VAR_120 = VAR_115;
     VAR_128 = VAR_123;
     VAR_137 = VAR_131;
     VAR_156 = VAR_152;
    }
   } else if (FUNC_6(VAR_23->pubpi.phy_rev, 5)) {
    VAR_39 = VAR_32;
    VAR_48 = VAR_41;
    if (VAR_23->sh->boardflags & VAR_0) {

     VAR_75 =
      VAR_66;
     VAR_88 =
      VAR_79;
    } else {
     VAR_75 = VAR_65;
     VAR_88 = VAR_78;
    }
    VAR_97 = VAR_91;
    switch (VAR_158) {
    case 0:
     VAR_112 =
      VAR_105[0];
     break;
    case 1:
     VAR_112 =
      VAR_105[1];
     break;
    case 2:
     VAR_112 =
      VAR_105[2];
     break;
    case 3:

     VAR_112 =
      VAR_105[3];
     break;
    case 4:
     VAR_112 =
      VAR_105[4];
     break;
    case 5:
     VAR_112 =
      VAR_105[5];
     break;
    case 6:
     VAR_112 =
      VAR_105[6];
     break;
    case 7:
     VAR_112 =
      VAR_105[7];
     break;
    default:
     VAR_112 =
      VAR_105[3];
     break;
    }
    VAR_146 = VAR_140;
    VAR_151 = VAR_148;
    VAR_120 = VAR_114;
    VAR_128 = VAR_122;
    VAR_137 = VAR_130;
    VAR_156 = VAR_152;
   } else if (FUNC_6(VAR_23->pubpi.phy_rev, 4)) {
    VAR_39 = VAR_31;
    VAR_48 = VAR_40;
    VAR_75 = VAR_64;
    VAR_88 = VAR_77;
    VAR_97 = VAR_90;
    VAR_112 = VAR_104;
    VAR_146 = VAR_139;
    VAR_151 = VAR_147;
    VAR_120 = VAR_113;
    VAR_128 = VAR_121;
    VAR_137 = VAR_129;
    VAR_156 = VAR_152;
   } else {
    VAR_39 = VAR_30;
    VAR_48 = VAR_40;
    VAR_75 = VAR_63;
    VAR_88 = VAR_76;
    VAR_97 = VAR_89;
    VAR_112 = VAR_104;
    VAR_146 = VAR_138;
    VAR_151 = VAR_147;
    VAR_120 = VAR_113;
    VAR_128 = VAR_121;
    VAR_137 = VAR_129;
    VAR_156 = VAR_152;
   }
   VAR_54 = VAR_49;
   VAR_60 = VAR_55;
   VAR_103 = VAR_98;
  } else {
   if (FUNC_5(VAR_23->pubpi.phy_rev, 6)) {
    VAR_39 = VAR_38;
    VAR_48 = VAR_47;
    VAR_54 = VAR_53;
    VAR_60 = VAR_59;
    VAR_75 = VAR_74;
    VAR_88 = VAR_87;
    VAR_97 = VAR_96;
    VAR_103 = VAR_102;
    VAR_112 = VAR_111;
    VAR_120 = VAR_119;
    VAR_128 = VAR_127;
    if ((VAR_23->pubpi.radiorev == 11) &&
        (FUNC_3(VAR_23->radio_chanspec) == 0))
     VAR_137 = VAR_136;
    else
     VAR_137 = VAR_135;

    VAR_146 = VAR_145;
    VAR_156 = VAR_155;
   } else if (FUNC_6(VAR_23->pubpi.phy_rev, 5)) {
    VAR_39 = VAR_37;
    VAR_48 = VAR_46;
    VAR_54 = VAR_52;
    VAR_60 = VAR_58;
    VAR_75 = VAR_73;
    VAR_88 = VAR_86;
    VAR_97 = VAR_95;
    VAR_103 = VAR_101;
    VAR_112 = VAR_110;
    VAR_120 = VAR_118;
    VAR_128 = VAR_126;
    VAR_137 = VAR_134;
    VAR_146 = VAR_144;
    VAR_156 = VAR_154;
   } else if (FUNC_6(VAR_23->pubpi.phy_rev, 4)) {
    VAR_39 = VAR_36;
    VAR_48 = VAR_45;
    VAR_54 = VAR_51;
    VAR_60 = VAR_57;
    if (VAR_23->sh->boardflags & VAR_1) {

     VAR_75 =
      VAR_72;
     VAR_88 =
      VAR_85;
    } else {
     VAR_75 = VAR_71;
     VAR_88 = VAR_84;
    }
    VAR_97 = VAR_94;
    VAR_103 = VAR_100;
    VAR_112 = VAR_109;
    VAR_120 = VAR_117;
    VAR_128 = VAR_125;
    VAR_137 = VAR_133;
    VAR_146 = VAR_143;
    VAR_156 = VAR_152;
   } else {
    VAR_39 = VAR_35;
    VAR_48 = VAR_44;
    VAR_54 = VAR_50;
    VAR_60 = VAR_56;
    VAR_75 = VAR_70;
    VAR_88 = VAR_83;
    VAR_97 = VAR_93;
    VAR_103 = VAR_99;
    VAR_112 = VAR_108;
    VAR_120 = VAR_116;
    VAR_128 = VAR_124;
    VAR_137 = VAR_132;
    VAR_146 = VAR_142;
    VAR_156 = VAR_152;
   }
   VAR_151 = VAR_150;
  }

  FUNC_15(VAR_23,
    (VAR_18 |
     VAR_15), 0x17);
  FUNC_15(VAR_23,
    (VAR_18 |
     VAR_16), 0x17);

  FUNC_15(VAR_23, (VAR_20 | VAR_15),
    0xf0);
  FUNC_15(VAR_23, (VAR_20 | VAR_16),
    0xf0);

  FUNC_15(VAR_23, (VAR_22 | VAR_15),
    0x0);
  FUNC_15(VAR_23, (VAR_22 | VAR_16),
    0x0);

  FUNC_15(VAR_23, (VAR_21 | VAR_15),
    VAR_156);
  FUNC_15(VAR_23, (VAR_21 | VAR_16),
    VAR_156);

  FUNC_15(VAR_23,
    (VAR_17 |
     VAR_15), 0x17);
  FUNC_15(VAR_23,
    (VAR_17 |
     VAR_16), 0x17);

  FUNC_15(VAR_23, (VAR_19 | VAR_15),
    0xFF);
  FUNC_15(VAR_23, (VAR_19 | VAR_16),
    0xFF);

  FUNC_11(VAR_23, VAR_9, 4, 8,
      8, VAR_39);
  FUNC_11(VAR_23, VAR_10, 4, 8,
      8, VAR_39);

  FUNC_11(VAR_23, VAR_9, 4, 0x10,
      8, VAR_48);
  FUNC_11(VAR_23, VAR_10, 4, 0x10,
      8, VAR_48);

  FUNC_11(VAR_23, VAR_9, 10, 0x20,
      8, VAR_54);
  FUNC_11(VAR_23, VAR_10, 10, 0x20,
      8, VAR_54);

  FUNC_11(VAR_23, VAR_11, 10, 0x20,
      8, VAR_60);
  FUNC_11(VAR_23, VAR_12, 10, 0x20,
      8, VAR_60);

  FUNC_11(VAR_23, VAR_9, 6, 0x40,
      8, &VAR_61);
  FUNC_11(VAR_23, VAR_10, 6, 0x40,
      8, &VAR_61);
  FUNC_11(VAR_23, VAR_11, 6, 0x40,
      8, &VAR_62);
  FUNC_11(VAR_23, VAR_12, 6, 0x40,
      8, &VAR_62);

  FUNC_14(VAR_23, 0x20, VAR_88);
  FUNC_14(VAR_23, 0x2a7, VAR_88);

  FUNC_11(VAR_23, VAR_13,
      VAR_23->pubpi.phy_corenum, 0x106, 16,
      VAR_75);

  FUNC_14(VAR_23, 0x22, VAR_97);
  FUNC_14(VAR_23, 0x2a9, VAR_97);

  FUNC_14(VAR_23, 0x24, VAR_103);
  FUNC_14(VAR_23, 0x2ab, VAR_103);

  FUNC_14(VAR_23, 0x37, VAR_112);
  FUNC_14(VAR_23, 0x2ad, VAR_112);

  FUNC_7(VAR_23, 0x27d, (0xff << 0), (VAR_120 << 0));
  FUNC_7(VAR_23, 0x280, (0xff << 0), (VAR_128 << 0));
  FUNC_7(VAR_23, 0x283, (0xff << 0), (VAR_137 << 0));

  FUNC_14(VAR_23, 0x2b, VAR_146);
  FUNC_14(VAR_23, 0x41, VAR_146);

  FUNC_7(VAR_23, 0x27, (0x3f << 0), (VAR_151 << 0));
  FUNC_7(VAR_23, 0x3d, (0x3f << 0), (VAR_151 << 0));

  FUNC_14(VAR_23, 0x150, 0x809c);

 } else {

  FUNC_7(VAR_23, 0x1c, (0x1 << 13), (1 << 13));
  FUNC_7(VAR_23, 0x32, (0x1 << 13), (1 << 13));

  FUNC_14(VAR_23, 0x2b, 0x84);
  FUNC_14(VAR_23, 0x41, 0x84);

  if (FUNC_1(VAR_23->radio_chanspec)) {
   FUNC_14(VAR_23, 0x6b, 0x2b);
   FUNC_14(VAR_23, 0x6c, 0x2b);
   FUNC_14(VAR_23, 0x6d, 0x9);
   FUNC_14(VAR_23, 0x6e, 0x9);
  }

  VAR_24 = VAR_8 - 4;
  FUNC_7(VAR_23, 0x27, (0x3f << 0), (VAR_24 << 0));
  FUNC_7(VAR_23, 0x3d, (0x3f << 0), (VAR_24 << 0));

  if (FUNC_1(VAR_23->radio_chanspec)) {
   FUNC_7(VAR_23, 0x1c, (0x1f << 0), (0x1 << 0));
   FUNC_7(VAR_23, 0x32, (0x1f << 0), (0x1 << 0));

   FUNC_7(VAR_23, 0x1d, (0x1f << 0), (0x1 << 0));
   FUNC_7(VAR_23, 0x33, (0x1f << 0), (0x1 << 0));
  }

  FUNC_14(VAR_23, 0x150, 0x809c);

  if (VAR_23->nphy_gain_boost)
   if ((FUNC_2(VAR_23->radio_chanspec)) &&
       (FUNC_3(VAR_23->radio_chanspec)))
    VAR_25 = 4;
   else
    VAR_25 = 5;
  else if (FUNC_3(VAR_23->radio_chanspec))
   VAR_25 = 6;
  else
   VAR_25 = 7;

  FUNC_7(VAR_23, 0x20, (0x1f << 7), (VAR_25 << 7));
  FUNC_7(VAR_23, 0x36, (0x1f << 7), (VAR_25 << 7));

  for (VAR_27 = 0; VAR_27 < 4; VAR_27++)
   VAR_157[VAR_27] = (VAR_25 << 8) | 0x7c;
  FUNC_11(VAR_23, 7, 4, 0x106, 16, VAR_157);

  FUNC_9(VAR_23);

  if (VAR_23->nphy_elna_gain_config) {
   VAR_157[0] = 0;
   VAR_157[1] = 1;
   VAR_157[2] = 1;
   VAR_157[3] = 1;
   FUNC_11(VAR_23, 2, 4, 8, 16, VAR_157);
   FUNC_11(VAR_23, 3, 4, 8, 16, VAR_157);

   for (VAR_27 = 0; VAR_27 < 4; VAR_27++)
    VAR_157[VAR_27] = (VAR_25 << 8) | 0x74;
   FUNC_11(VAR_23, 7, 4, 0x106, 16, VAR_157);
  }

  if (FUNC_6(VAR_23->pubpi.phy_rev, 2)) {
   for (VAR_27 = 0; VAR_27 < 21; VAR_27++)
    VAR_157[VAR_27] = 3 * VAR_27;
   FUNC_11(VAR_23, 0, 21, 32, 16, VAR_157);
   FUNC_11(VAR_23, 1, 21, 32, 16, VAR_157);

   for (VAR_27 = 0; VAR_27 < 21; VAR_27++)
    VAR_157[VAR_27] = (u16) VAR_27;
   FUNC_11(VAR_23, 2, 21, 32, 16, VAR_157);
   FUNC_11(VAR_23, 3, 21, 32, 16, VAR_157);
  }

  FUNC_10(VAR_23, VAR_7,
           VAR_28,
           VAR_29,
           FUNC_0(VAR_28));

  FUNC_7(VAR_23, 0x153, (0xff << 8), (90 << 8));

  if (FUNC_2(VAR_23->radio_chanspec))
   FUNC_7(VAR_23,
        (VAR_14 + VAR_2),
        0x7f, 0x4);
 }
}
