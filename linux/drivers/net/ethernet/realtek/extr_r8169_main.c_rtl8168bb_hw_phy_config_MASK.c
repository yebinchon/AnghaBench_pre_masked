
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct phy_reg {int member_0; int member_1; } ;


 int FUNC_0 (struct rtl8169_private*,int,int) ;
 int FUNC_1 (struct rtl8169_private*,int,int) ;
 int FUNC_2 (struct rtl8169_private*,struct phy_reg const*) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_0)
{
 static const struct phy_reg VAR_1[] = {
  { 0x10, 0xf41b },
  { 0x1f, 0x0000 }
 };

 FUNC_1(VAR_0, 0x1f, 0x0001);
 FUNC_0(VAR_0, 0x16, 1 << 0);

 FUNC_2(VAR_0, VAR_1);
}
