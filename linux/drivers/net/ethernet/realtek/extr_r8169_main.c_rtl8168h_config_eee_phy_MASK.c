
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {struct phy_device* phydev; } ;
struct phy_device {int dummy; } ;


 int FUNC_0 (struct phy_device*,int,int,int,int) ;
 int FUNC_1 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_2(struct rtl8169_private *VAR_0)
{
 struct phy_device *VAR_1 = VAR_0->phydev;

 FUNC_1(VAR_0);

 FUNC_0(VAR_1, 0xa4a, 0x11, 0x0000, 0x0200);
 FUNC_0(VAR_1, 0xa42, 0x14, 0x0000, 0x0080);
}
