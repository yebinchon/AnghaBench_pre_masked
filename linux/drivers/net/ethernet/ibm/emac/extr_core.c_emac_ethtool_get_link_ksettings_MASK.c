
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int advertising; int supported; } ;
struct TYPE_4__ {int duplex; int speed; int autoneg; int phy_address; int port; } ;
struct ethtool_link_ksettings {TYPE_3__ link_modes; TYPE_1__ base; } ;
struct TYPE_5__ {int duplex; int speed; int autoneg; int advertising; int address; int features; } ;
struct emac_instance {int link_lock; TYPE_2__ phy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct emac_instance* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
        struct ethtool_link_ksettings *VAR_2)
{
 struct emac_instance *VAR_3 = FUNC_3(VAR_1);
 u32 VAR_4, VAR_5;

 VAR_4 = VAR_3->phy.features;
 VAR_2->base.port = VAR_0;
 VAR_2->base.phy_address = VAR_3->phy.address;

 FUNC_1(&VAR_3->link_lock);
 VAR_5 = VAR_3->phy.advertising;
 VAR_2->base.autoneg = VAR_3->phy.autoneg;
 VAR_2->base.speed = VAR_3->phy.speed;
 VAR_2->base.duplex = VAR_3->phy.duplex;
 FUNC_2(&VAR_3->link_lock);

 FUNC_0(VAR_2->link_modes.supported,
      VAR_4);
 FUNC_0(VAR_2->link_modes.advertising,
      VAR_5);

 return 0;
}
