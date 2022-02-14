
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;


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
 int VAR_41 ;
 int VAR_42 ;
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
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct rtw_dev*,char*,int) ;
 int FUNC_2 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct rtw_dev *VAR_66,
      u32 VAR_67, u32 VAR_68, u32 VAR_69, u8 *VAR_70,
      u8 *VAR_71, u8 *VAR_72)
{
 int VAR_73;

 switch (VAR_67) {
 case 0xE00:
 case 0x830:
  VAR_70[0] = VAR_10;
  VAR_70[1] = VAR_11;
  VAR_70[2] = VAR_1;
  VAR_70[3] = VAR_2;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xE04:
 case 0x834:
  VAR_70[0] = VAR_4;
  VAR_70[1] = VAR_6;
  VAR_70[2] = VAR_7;
  VAR_70[3] = VAR_8;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xE08:
  VAR_70[0] = VAR_3;
  VAR_71[0] = FUNC_0(VAR_69, 1);
  *VAR_72 = 1;
  break;
 case 0x86C:
  if (VAR_68 == 0xffffff00) {
   VAR_70[0] = VAR_5;
   VAR_70[1] = VAR_9;
   VAR_70[2] = VAR_0;
   for (VAR_73 = 1; VAR_73 < 4; ++VAR_73)
    VAR_71[VAR_73 - 1] =
     FUNC_2(VAR_66, VAR_69, VAR_73);
   *VAR_72 = 3;
  } else if (VAR_68 == 0x000000ff) {
   VAR_70[0] = VAR_0;
   VAR_71[0] = FUNC_0(VAR_69, 0);
   *VAR_72 = 1;
  }
  break;
 case 0xE10:
 case 0x83C:
  VAR_70[0] = VAR_12;
  VAR_70[1] = VAR_13;
  VAR_70[2] = VAR_24;
  VAR_70[3] = VAR_29;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xE14:
 case 0x848:
  VAR_70[0] = VAR_30;
  VAR_70[1] = VAR_31;
  VAR_70[2] = VAR_32;
  VAR_70[3] = VAR_33;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xE18:
 case 0x84C:
  VAR_70[0] = VAR_34;
  VAR_70[1] = VAR_35;
  VAR_70[2] = VAR_14;
  VAR_70[3] = VAR_15;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xE1C:
 case 0x868:
  VAR_70[0] = VAR_16;
  VAR_70[1] = VAR_17;
  VAR_70[2] = VAR_18;
  VAR_70[3] = VAR_19;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0x838:
  VAR_70[0] = VAR_3;
  VAR_70[1] = VAR_5;
  VAR_70[2] = VAR_9;
  for (VAR_73 = 1; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73 - 1] = FUNC_2(VAR_66,
            VAR_69, VAR_73);
  *VAR_72 = 3;
  break;
 case 0xC20:
 case 0xE20:
 case 0x1820:
 case 0x1A20:
  VAR_70[0] = VAR_3;
  VAR_70[1] = VAR_5;
  VAR_70[2] = VAR_9;
  VAR_70[3] = VAR_0;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xC24:
 case 0xE24:
 case 0x1824:
 case 0x1A24:
  VAR_70[0] = VAR_10;
  VAR_70[1] = VAR_11;
  VAR_70[2] = VAR_1;
  VAR_70[3] = VAR_2;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xC28:
 case 0xE28:
 case 0x1828:
 case 0x1A28:
  VAR_70[0] = VAR_4;
  VAR_70[1] = VAR_6;
  VAR_70[2] = VAR_7;
  VAR_70[3] = VAR_8;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xC2C:
 case 0xE2C:
 case 0x182C:
 case 0x1A2C:
  VAR_70[0] = VAR_12;
  VAR_70[1] = VAR_13;
  VAR_70[2] = VAR_24;
  VAR_70[3] = VAR_29;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xC30:
 case 0xE30:
 case 0x1830:
 case 0x1A30:
  VAR_70[0] = VAR_30;
  VAR_70[1] = VAR_31;
  VAR_70[2] = VAR_32;
  VAR_70[3] = VAR_33;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xC34:
 case 0xE34:
 case 0x1834:
 case 0x1A34:
  VAR_70[0] = VAR_34;
  VAR_70[1] = VAR_35;
  VAR_70[2] = VAR_14;
  VAR_70[3] = VAR_15;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xC38:
 case 0xE38:
 case 0x1838:
 case 0x1A38:
  VAR_70[0] = VAR_16;
  VAR_70[1] = VAR_17;
  VAR_70[2] = VAR_18;
  VAR_70[3] = VAR_19;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xC3C:
 case 0xE3C:
 case 0x183C:
 case 0x1A3C:
  VAR_70[0] = VAR_36;
  VAR_70[1] = VAR_37;
  VAR_70[2] = VAR_38;
  VAR_70[3] = VAR_39;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xC40:
 case 0xE40:
 case 0x1840:
 case 0x1A40:
  VAR_70[0] = VAR_40;
  VAR_70[1] = VAR_41;
  VAR_70[2] = VAR_42;
  VAR_70[3] = VAR_43;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xC44:
 case 0xE44:
 case 0x1844:
 case 0x1A44:
  VAR_70[0] = VAR_44;
  VAR_70[1] = VAR_45;
  VAR_70[2] = VAR_46;
  VAR_70[3] = VAR_47;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xC48:
 case 0xE48:
 case 0x1848:
 case 0x1A48:
  VAR_70[0] = VAR_48;
  VAR_70[1] = VAR_49;
  VAR_70[2] = VAR_50;
  VAR_70[3] = VAR_51;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xC4C:
 case 0xE4C:
 case 0x184C:
 case 0x1A4C:
  VAR_70[0] = VAR_52;
  VAR_70[1] = VAR_53;
  VAR_70[2] = VAR_54;
  VAR_70[3] = VAR_55;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xCD8:
 case 0xED8:
 case 0x18D8:
 case 0x1AD8:
  VAR_70[0] = VAR_20;
  VAR_70[1] = VAR_21;
  VAR_70[2] = VAR_22;
  VAR_70[3] = VAR_23;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xCDC:
 case 0xEDC:
 case 0x18DC:
 case 0x1ADC:
  VAR_70[0] = VAR_25;
  VAR_70[1] = VAR_26;
  VAR_70[2] = VAR_27;
  VAR_70[3] = VAR_28;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xCE0:
 case 0xEE0:
 case 0x18E0:
 case 0x1AE0:
  VAR_70[0] = VAR_56;
  VAR_70[1] = VAR_57;
  VAR_70[2] = VAR_58;
  VAR_70[3] = VAR_59;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xCE4:
 case 0xEE4:
 case 0x18E4:
 case 0x1AE4:
  VAR_70[0] = VAR_60;
  VAR_70[1] = VAR_61;
  VAR_70[2] = VAR_62;
  VAR_70[3] = VAR_63;
  for (VAR_73 = 0; VAR_73 < 4; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 4;
  break;
 case 0xCE8:
 case 0xEE8:
 case 0x18E8:
 case 0x1AE8:
  VAR_70[0] = VAR_64;
  VAR_70[1] = VAR_65;
  for (VAR_73 = 0; VAR_73 < 2; ++VAR_73)
   VAR_71[VAR_73] = FUNC_2(VAR_66, VAR_69, VAR_73);
  *VAR_72 = 2;
  break;
 default:
  FUNC_1(VAR_66, "invalid tx power index addr 0x%08x\n", VAR_67);
  break;
 }
}
