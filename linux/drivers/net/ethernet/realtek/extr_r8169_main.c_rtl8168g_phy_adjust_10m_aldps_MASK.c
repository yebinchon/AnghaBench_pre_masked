
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {struct phy_device* phydev; } ;
struct phy_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct phy_device*,int,int) ;
 int FUNC_2 (struct phy_device*,int,int,int,int) ;
 int FUNC_3 (struct phy_device*,int,int) ;
 int FUNC_4 (struct phy_device*,int,int) ;

__attribute__((used)) static void FUNC_5(struct rtl8169_private *VAR_0)
{
 struct phy_device *VAR_1 = VAR_0->phydev;

 FUNC_2(VAR_1, 0x0bcc, 0x14, FUNC_0(8), 0);
 FUNC_2(VAR_1, 0x0a44, 0x11, 0, FUNC_0(7) | FUNC_0(6));
 FUNC_4(VAR_1, 0x1f, 0x0a43);
 FUNC_4(VAR_1, 0x13, 0x8084);
 FUNC_1(VAR_1, 0x14, FUNC_0(14) | FUNC_0(13));
 FUNC_3(VAR_1, 0x10, FUNC_0(12) | FUNC_0(1) | FUNC_0(0));

 FUNC_4(VAR_1, 0x1f, 0x0000);
}
