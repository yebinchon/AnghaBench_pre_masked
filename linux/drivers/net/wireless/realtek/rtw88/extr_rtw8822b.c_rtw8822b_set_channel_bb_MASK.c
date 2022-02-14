
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_efuse {int rfe_option; } ;
struct rtw_dev {struct rtw_efuse efuse; } ;


 int const FUNC_0 (int) ;
 int const VAR_0 ;
 int const VAR_1 ;
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





 int FUNC_1 (struct rtw_dev*,int,int const) ;
 int FUNC_2 (struct rtw_dev*,int ,int const) ;
 int FUNC_3 (struct rtw_dev*,int,int const,int) ;
 int FUNC_4 (struct rtw_dev*,int ,int const) ;

__attribute__((used)) static void FUNC_5(struct rtw_dev *VAR_16, u8 VAR_17, u8 VAR_18,
        u8 VAR_19)
{
 struct rtw_efuse *VAR_20 = &VAR_16->efuse;
 u8 VAR_21 = VAR_20->rfe_option;
 u32 VAR_22;

 if (VAR_17 <= 14) {
  FUNC_3(VAR_16, VAR_12, FUNC_0(28), 0x1);
  FUNC_3(VAR_16, VAR_6, FUNC_0(7), 0x0);
  FUNC_3(VAR_16, VAR_8, FUNC_0(18), 0x0);
  FUNC_3(VAR_16, VAR_11, 0x0000FC00, 15);

  FUNC_3(VAR_16, VAR_2, 0x1f, 0x0);
  FUNC_3(VAR_16, VAR_7, 0x1ffe0000, 0x96a);
  if (VAR_17 == 14) {
   FUNC_3(VAR_16, VAR_14, VAR_0, 0x00006577);
   FUNC_3(VAR_16, VAR_15, VAR_1, 0x0000);
  } else {
   FUNC_3(VAR_16, VAR_14, VAR_0, 0x384f6577);
   FUNC_3(VAR_16, VAR_15, VAR_1, 0x1525);
  }

  FUNC_3(VAR_16, VAR_10, 0x300, 0x2);
 } else if (VAR_17 > 35) {
  FUNC_3(VAR_16, VAR_8, FUNC_0(18), 0x1);
  FUNC_3(VAR_16, VAR_6, FUNC_0(7), 0x1);
  FUNC_3(VAR_16, VAR_12, FUNC_0(28), 0x0);
  FUNC_3(VAR_16, VAR_11, 0x0000FC00, 34);

  if (VAR_17 >= 36 && VAR_17 <= 64)
   FUNC_3(VAR_16, VAR_2, 0x1f, 0x1);
  else if (VAR_17 >= 100 && VAR_17 <= 144)
   FUNC_3(VAR_16, VAR_2, 0x1f, 0x2);
  else if (VAR_17 >= 149)
   FUNC_3(VAR_16, VAR_2, 0x1f, 0x3);

  if (VAR_17 >= 36 && VAR_17 <= 48)
   FUNC_3(VAR_16, VAR_7, 0x1ffe0000, 0x494);
  else if (VAR_17 >= 52 && VAR_17 <= 64)
   FUNC_3(VAR_16, VAR_7, 0x1ffe0000, 0x453);
  else if (VAR_17 >= 100 && VAR_17 <= 116)
   FUNC_3(VAR_16, VAR_7, 0x1ffe0000, 0x452);
  else if (VAR_17 >= 118 && VAR_17 <= 177)
   FUNC_3(VAR_16, VAR_7, 0x1ffe0000, 0x412);

  FUNC_3(VAR_16, 0xcbc, 0x300, 0x1);
 }

 switch (VAR_18) {
 case 131:
 default:
  VAR_22 = FUNC_1(VAR_16, VAR_5, VAR_0);
  VAR_22 &= 0xFFCFFC00;
  VAR_22 |= (131);
  FUNC_3(VAR_16, VAR_5, VAR_0, VAR_22);

  FUNC_3(VAR_16, VAR_3, FUNC_0(30), 0x1);
  break;
 case 130:
  if (VAR_19 == 1)
   FUNC_4(VAR_16, VAR_13, FUNC_0(4));
  else
   FUNC_2(VAR_16, VAR_13, FUNC_0(4));

  VAR_22 = FUNC_1(VAR_16, VAR_5, VAR_0);
  VAR_22 &= 0xFF3FF300;
  VAR_22 |= (((VAR_19 & 0xf) << 2) | 130);
  FUNC_3(VAR_16, VAR_5, VAR_0, VAR_22);

  FUNC_3(VAR_16, VAR_3, FUNC_0(30), 0x1);
  break;
 case 128:
  VAR_22 = FUNC_1(VAR_16, VAR_5, VAR_0);
  VAR_22 &= 0xFCEFCF00;
  VAR_22 |= (((VAR_19 & 0xf) << 2) | 128);
  FUNC_3(VAR_16, VAR_5, VAR_0, VAR_22);

  FUNC_3(VAR_16, VAR_3, FUNC_0(30), 0x1);

  if (VAR_21 == 2) {
   FUNC_3(VAR_16, VAR_9, 0x0000f000, 0x6);
   FUNC_3(VAR_16, VAR_4, FUNC_0(10), 0x1);
  }
  break;
 case 129:
  VAR_22 = FUNC_1(VAR_16, VAR_5, VAR_0);
  VAR_22 &= 0xEFEEFE00;
  VAR_22 |= ((FUNC_0(6) | 131));
  FUNC_3(VAR_16, VAR_5, VAR_0, VAR_22);

  FUNC_3(VAR_16, VAR_3, FUNC_0(30), 0x0);
  FUNC_3(VAR_16, VAR_4, FUNC_0(31), 0x1);
  break;
 case 132:
  VAR_22 = FUNC_1(VAR_16, VAR_5, VAR_0);
  VAR_22 &= 0xEFFEFF00;
  VAR_22 |= ((FUNC_0(7) | 131));
  FUNC_3(VAR_16, VAR_5, VAR_0, VAR_22);

  FUNC_3(VAR_16, VAR_3, FUNC_0(30), 0x0);
  FUNC_3(VAR_16, VAR_4, FUNC_0(31), 0x1);
  break;
 }
}
