
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {struct phy_device* phydev; } ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct phy_device*,int ,int ) ;
 int FUNC_1 (struct phy_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rtl8169_private *VAR_4)
{
 struct phy_device *VAR_5 = VAR_4->phydev;
 int VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3);

 if (VAR_6 > 0)
  FUNC_1(VAR_5, VAR_1, VAR_0, VAR_6);
}
