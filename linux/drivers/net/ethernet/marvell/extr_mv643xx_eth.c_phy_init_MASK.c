
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int speed; int duplex; int advertising; int autoneg; int supported; } ;
struct net_device {struct phy_device* phydev; } ;
struct mv643xx_eth_private {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static void FUNC_4(struct mv643xx_eth_private *VAR_3, int VAR_4, int VAR_5)
{
 struct net_device *VAR_6 = VAR_3->dev;
 struct phy_device *VAR_7 = VAR_6->phydev;

 if (VAR_4 == 0) {
  VAR_7->autoneg = VAR_1;
  VAR_7->speed = 0;
  VAR_7->duplex = 0;
  FUNC_0(VAR_7->advertising, VAR_7->supported);
  FUNC_1(VAR_2,
     VAR_7->advertising);
 } else {
  VAR_7->autoneg = VAR_0;
  FUNC_2(VAR_7->advertising);
  VAR_7->speed = VAR_4;
  VAR_7->duplex = VAR_5;
 }
 FUNC_3(VAR_7);
}
