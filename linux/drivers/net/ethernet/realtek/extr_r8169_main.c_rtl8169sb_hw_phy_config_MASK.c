
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct phy_reg {int member_0; int member_1; } ;


 int FUNC_0 (struct rtl8169_private*,struct phy_reg const*) ;

__attribute__((used)) static void FUNC_1(struct rtl8169_private *VAR_0)
{
 static const struct phy_reg VAR_1[] = {
  { 0x1f, 0x0002 },
  { 0x01, 0x90d0 },
  { 0x1f, 0x0000 }
 };

 FUNC_0(VAR_0, VAR_1);
}
