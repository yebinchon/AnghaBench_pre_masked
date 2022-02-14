
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int advertising; int duplex; int speed; int autoneg; } ;
struct mii_phy {int advertising; int duplex; int speed; int autoneg; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct phy_device*) ;

__attribute__((used)) static int FUNC_2(struct mii_phy *VAR_0,
        struct phy_device *VAR_1)
{
 VAR_1->autoneg = VAR_0->autoneg;
 VAR_1->speed = VAR_0->speed;
 VAR_1->duplex = VAR_0->duplex;
 FUNC_0(VAR_1->advertising,
      VAR_0->advertising);
 return FUNC_1(VAR_1);
}
