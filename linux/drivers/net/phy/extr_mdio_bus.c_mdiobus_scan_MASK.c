
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int mdio; } ;
struct mii_bus {int dummy; } ;


 int VAR_0 ;
 struct phy_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct phy_device*) ;
 struct phy_device* FUNC_2 (struct mii_bus*,int,int) ;
 int FUNC_3 (struct mii_bus*,int *) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*) ;

struct phy_device *FUNC_6(struct mii_bus *VAR_1, int VAR_2)
{
 struct phy_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_1, VAR_2, 0);
 if (FUNC_1(VAR_3))
  return VAR_3;





 FUNC_3(VAR_1, &VAR_3->mdio);

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4) {
  FUNC_4(VAR_3);
  return FUNC_0(-VAR_0);
 }

 return VAR_3;
}
