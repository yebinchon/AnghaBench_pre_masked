
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct phy_reg {int member_0; int member_1; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl8169_private*) ;
 int FUNC_2 (struct rtl8169_private*,int,int) ;
 int FUNC_3 (struct rtl8169_private*,struct phy_reg const*) ;

__attribute__((used)) static void FUNC_4(struct rtl8169_private *VAR_0)
{
 static const struct phy_reg VAR_1[] = {
  { 0x1f, 0x0005 },
  { 0x1a, 0x0000 },
  { 0x1f, 0x0000 },

  { 0x1f, 0x0004 },
  { 0x1c, 0x0000 },
  { 0x1f, 0x0000 },

  { 0x1f, 0x0001 },
  { 0x15, 0x7701 },
  { 0x1f, 0x0000 }
 };


 FUNC_2(VAR_0, 0x1f, 0x0000);
 FUNC_2(VAR_0, 0x18, 0x0310);
 FUNC_0(100);

 FUNC_1(VAR_0);

 FUNC_3(VAR_0, VAR_1);
}
