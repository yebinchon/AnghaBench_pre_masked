
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl8169_private {int dummy; } ;
struct ephy_info {int member_0; int member_1; int member_2; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct rtl8169_private*,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ) ;
 int FUNC_3 (struct rtl8169_private*,int ,int) ;
 int FUNC_4 (struct rtl8169_private*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct rtl8169_private*,int,int,int) ;
 int FUNC_6 (struct rtl8169_private*,int,int) ;
 int FUNC_7 (struct rtl8169_private*) ;
 int FUNC_8 (struct rtl8169_private*,int,int) ;
 int FUNC_9 (struct rtl8169_private*,struct ephy_info const*) ;
 int FUNC_10 (struct rtl8169_private*,int,int ,int) ;
 int FUNC_11 (struct rtl8169_private*,int,int ,int) ;
 int FUNC_12 (struct rtl8169_private*,int,int ,int) ;
 int FUNC_13 (struct rtl8169_private*,int) ;
 int FUNC_14 (struct rtl8169_private*) ;
 int FUNC_15 (struct rtl8169_private*,int) ;
 int FUNC_16 (struct rtl8169_private*) ;
 int FUNC_17 (struct rtl8169_private*) ;
 int FUNC_18 (struct rtl8169_private*,int,int,int,int) ;
 int FUNC_19 (struct rtl8169_private*,int ) ;
 int FUNC_20 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static void FUNC_21(struct rtl8169_private *VAR_10)
{
 static const struct ephy_info VAR_11[] = {
  { 0x1e, 0x0800, 0x0001 },
  { 0x1d, 0x0000, 0x0800 },
  { 0x05, 0xffff, 0x2089 },
  { 0x06, 0xffff, 0x5881 },
  { 0x04, 0xffff, 0x854a },
  { 0x01, 0xffff, 0x068b }
 };
 int VAR_12;


 FUNC_13(VAR_10, 0);
 FUNC_9(VAR_10, VAR_11);

 FUNC_18(VAR_10, 0x08, 0x10, 0x02, 0x06);
 FUNC_8(VAR_10, 0x38, 0x48);

 FUNC_17(VAR_10);

 FUNC_19(VAR_10, VAR_5);

 FUNC_16(VAR_10);

 FUNC_11(VAR_10, 0xdc, VAR_2, FUNC_0(4));

 FUNC_11(VAR_10, 0xd4, VAR_2, 0x1f00);

 FUNC_12(VAR_10, 0x5f0, VAR_1, 0x4f87);

 FUNC_3(VAR_10, VAR_3, FUNC_1(VAR_10, VAR_3) & ~VAR_8);

 FUNC_12(VAR_10, 0xc0, VAR_1, 0x0000);
 FUNC_12(VAR_10, 0xb8, VAR_1, 0x0000);

 FUNC_7(VAR_10);

 FUNC_4(VAR_10, VAR_0, FUNC_2(VAR_10, VAR_0) & ~VAR_7);
 FUNC_4(VAR_10, VAR_4, FUNC_2(VAR_10, VAR_4) & ~VAR_6);

 FUNC_4(VAR_10, VAR_0, FUNC_2(VAR_10, VAR_0) & ~VAR_9);

 FUNC_10(VAR_10, 0x1b0, VAR_1, FUNC_0(12));

 FUNC_14(VAR_10);

 FUNC_20(VAR_10, 0x1f, 0x0c42);
 VAR_12 = (FUNC_15(VAR_10, 0x13) & 0x3fff);
 FUNC_20(VAR_10, 0x1f, 0x0000);
 if (VAR_12 > 0) {
  u16 VAR_13;

  VAR_13 = 16000000/VAR_12;
  VAR_13 &= 0x0fff;
  FUNC_5(VAR_10, 0xd412, 0x0fff, VAR_13);
 }

 FUNC_5(VAR_10, 0xe056, 0x00f0, 0x0070);
 FUNC_5(VAR_10, 0xe052, 0x6000, 0x8008);
 FUNC_5(VAR_10, 0xe0d6, 0x01ff, 0x017f);
 FUNC_5(VAR_10, 0xd420, 0x0fff, 0x047f);

 FUNC_6(VAR_10, 0xe63e, 0x0001);
 FUNC_6(VAR_10, 0xe63e, 0x0000);
 FUNC_6(VAR_10, 0xc094, 0x0000);
 FUNC_6(VAR_10, 0xc09e, 0x0000);

 FUNC_13(VAR_10, 1);
}
