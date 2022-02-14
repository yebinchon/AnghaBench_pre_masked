
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ supports_gmii; int dev; struct phy_device* phydev; } ;
struct phy_device {int dummy; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int ,struct phy_device*,int ,int ) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct rtl8169_private *VAR_4)
{
 struct phy_device *VAR_5 = VAR_4->phydev;
 phy_interface_t VAR_6;
 int VAR_7;

 VAR_6 = VAR_4->supports_gmii ? VAR_0 :
     VAR_1;

 VAR_7 = FUNC_1(VAR_4->dev, VAR_5, VAR_3,
     VAR_6);
 if (VAR_7)
  return VAR_7;

 if (!VAR_4->supports_gmii)
  FUNC_2(VAR_5, VAR_2);

 FUNC_3(VAR_5);

 FUNC_0(VAR_5);

 return 0;
}
