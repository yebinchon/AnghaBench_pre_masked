
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct rtl8169_private*,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ) ;
 int FUNC_3 (struct rtl8169_private*,int ,int) ;
 int FUNC_4 (struct rtl8169_private*,int ,int) ;
 int VAR_10 ;
 int FUNC_5 (struct rtl8169_private*) ;
 int FUNC_6 (struct rtl8169_private*) ;
 int FUNC_7 (struct rtl8169_private*,struct ephy_info const*) ;
 int FUNC_8 (struct rtl8169_private*,int,int ,int ) ;
 int FUNC_9 (struct rtl8169_private*,int,int ,int) ;
 int FUNC_10 (struct rtl8169_private*,int) ;
 int FUNC_11 (struct rtl8169_private*) ;
 int FUNC_12 (struct rtl8169_private*,int,int,int,int) ;
 int FUNC_13 (struct rtl8169_private*,int,int ,int,int) ;

__attribute__((used)) static void FUNC_14(struct rtl8169_private *VAR_11)
{
 static const struct ephy_info VAR_12[] = {
  { 0x09, 0x0000, 0x0080 },
  { 0x19, 0x0000, 0x0224 },
  { 0x00, 0x0000, 0x0004 },
  { 0x0c, 0x3df0, 0x0200 },
 };

 FUNC_11(VAR_11);

 FUNC_7(VAR_11, VAR_12);

 FUNC_9(VAR_11, 0xc0, VAR_3, 0x0000);
 FUNC_9(VAR_11, 0xb8, VAR_3, 0x0000);
 FUNC_12(VAR_11, 0x10, 0x10, 0x02, 0x06);
 FUNC_9(VAR_11, 0xcc, VAR_4, 0x00000050);
 FUNC_9(VAR_11, 0xd0, VAR_4, 0x07ff0060);
 FUNC_8(VAR_11, 0x1b0, VAR_2, FUNC_0(4));
 FUNC_13(VAR_11, 0x0d4, VAR_3, 0x0c00, 0xff00);

 FUNC_6(VAR_11);

 FUNC_4(VAR_11, VAR_5, FUNC_2(VAR_11, VAR_5) & ~VAR_7);

 FUNC_5(VAR_11);

 FUNC_4(VAR_11, VAR_1, FUNC_2(VAR_11, VAR_1) | VAR_8);
 FUNC_3(VAR_11, VAR_6, FUNC_1(VAR_11, VAR_6) | VAR_9);
 FUNC_4(VAR_11, VAR_0, FUNC_2(VAR_11, VAR_0) & ~VAR_10);

 FUNC_10(VAR_11, 1);
}
