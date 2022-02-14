
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {struct phy_device* phydev; } ;
struct phy_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct phy_device*,int,int ) ;
 int FUNC_2 (struct phy_device*,int,int) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_0)
{
 struct phy_device *VAR_1 = VAR_0->phydev;

 FUNC_2(VAR_1, 0x1f, 0x0007);
 FUNC_2(VAR_1, 0x1e, 0x0020);
 FUNC_1(VAR_1, 0x15, FUNC_0(8));

 FUNC_2(VAR_1, 0x1f, 0x0005);
 FUNC_2(VAR_1, 0x05, 0x8b85);
 FUNC_1(VAR_1, 0x06, FUNC_0(13));

 FUNC_2(VAR_1, 0x1f, 0x0000);
}
