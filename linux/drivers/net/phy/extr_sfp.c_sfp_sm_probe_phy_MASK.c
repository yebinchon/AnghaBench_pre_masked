
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {struct phy_device* mod_phy; int dev; int sfp_bus; int i2c_mii; } ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 struct phy_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 struct phy_device* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct phy_device*) ;
 int FUNC_8 (struct phy_device*) ;
 int FUNC_9 (struct phy_device*) ;
 int FUNC_10 (int ,struct phy_device*) ;

__attribute__((used)) static void FUNC_11(struct sfp *VAR_3)
{
 struct phy_device *VAR_4;
 int VAR_5;

 FUNC_6(VAR_2);

 VAR_4 = FUNC_5(VAR_3->i2c_mii, VAR_1);
 if (VAR_4 == FUNC_0(-VAR_0)) {
  FUNC_4(VAR_3->dev, "no PHY detected\n");
  return;
 }
 if (FUNC_1(VAR_4)) {
  FUNC_3(VAR_3->dev, "mdiobus scan returned %ld\n", FUNC_2(VAR_4));
  return;
 }

 VAR_5 = FUNC_10(VAR_3->sfp_bus, VAR_4);
 if (VAR_5) {
  FUNC_8(VAR_4);
  FUNC_7(VAR_4);
  FUNC_3(VAR_3->dev, "sfp_add_phy failed: %d\n", VAR_5);
  return;
 }

 VAR_3->mod_phy = VAR_4;
 FUNC_9(VAR_4);
}
