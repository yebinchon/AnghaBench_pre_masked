
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int advertising; int autoneg; int duplex; int speed; } ;
struct tg3 {int phy_flags; TYPE_1__ link_config; int phy_addr; int mdio_bus; } ;
struct phy_device {int advertising; int autoneg; int duplex; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct phy_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_2)
{
 struct phy_device *VAR_3;

 if (!(VAR_2->phy_flags & VAR_0))
  return;

 VAR_3 = FUNC_1(VAR_2->mdio_bus, VAR_2->phy_addr);

 if (VAR_2->phy_flags & VAR_1) {
  VAR_2->phy_flags &= ~VAR_1;
  VAR_3->speed = VAR_2->link_config.speed;
  VAR_3->duplex = VAR_2->link_config.duplex;
  VAR_3->autoneg = VAR_2->link_config.autoneg;
  FUNC_0(
   VAR_3->advertising, VAR_2->link_config.advertising);
 }

 FUNC_2(VAR_3);

 FUNC_3(VAR_3);
}
