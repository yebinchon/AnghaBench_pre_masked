
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct ephy_info {int member_0; int member_1; int member_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ,int) ;
 int FUNC_3 (struct rtl8169_private*,int ,int) ;
 int FUNC_4 (struct rtl8169_private*,struct ephy_info const*) ;
 int FUNC_5 (struct rtl8169_private*,int,int ,int) ;
 int FUNC_6 (struct rtl8169_private*) ;
 int FUNC_7 (struct rtl8169_private*) ;
 int FUNC_8 (struct rtl8169_private*) ;
 int FUNC_9 (struct rtl8169_private*,int,int,int,int) ;
 int FUNC_10 (struct rtl8169_private*,int ) ;
 int FUNC_11 (struct rtl8169_private*,int,int ,int,int) ;

__attribute__((used)) static void FUNC_12(struct rtl8169_private *VAR_5)
{
 static const struct ephy_info VAR_6[] = {
  { 0x19, 0xffff, 0xff64 },
  { 0x1e, 0, 0x4000 }
 };

 FUNC_8(VAR_5);


 FUNC_2(VAR_5, VAR_1, FUNC_0(VAR_5, VAR_1) | 0x002800);

 FUNC_3(VAR_5, VAR_2, FUNC_1(VAR_5, VAR_2) & ~VAR_3);

 FUNC_4(VAR_5, VAR_6);

 FUNC_10(VAR_5, VAR_4);

 FUNC_9(VAR_5, 0x00, 0x00, 0x02, 0x06);
 FUNC_7(VAR_5);
 FUNC_5(VAR_5, 0xc0, VAR_0, 0x0000);
 FUNC_5(VAR_5, 0xb8, VAR_0, 0x0000);
 FUNC_11(VAR_5, 0x0d4, VAR_0, 0x0e00, 0xff00);

 FUNC_6(VAR_5);
}
