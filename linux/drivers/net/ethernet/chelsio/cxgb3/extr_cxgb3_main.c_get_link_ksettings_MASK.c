
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int autoneg; int duplex; int speed; int advertising; int supported; } ;
struct TYPE_7__ {int prtad; } ;
struct TYPE_8__ {TYPE_2__ mdio; } ;
struct port_info {TYPE_5__ link_config; TYPE_3__ phy; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int autoneg; int phy_address; int port; int duplex; int speed; } ;
struct TYPE_6__ {int supported; int advertising; } ;
struct ethtool_link_ksettings {TYPE_4__ base; TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int*,int ) ;
 struct port_info* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
         struct ethtool_link_ksettings *VAR_6)
{
 struct port_info *VAR_7 = FUNC_2(VAR_5);
 u32 VAR_8;

 FUNC_0(VAR_6->link_modes.supported,
      VAR_7->link_config.supported);
 FUNC_0(VAR_6->link_modes.advertising,
      VAR_7->link_config.advertising);

 if (FUNC_3(VAR_5)) {
  VAR_6->base.speed = VAR_7->link_config.speed;
  VAR_6->base.duplex = VAR_7->link_config.duplex;
 } else {
  VAR_6->base.speed = VAR_3;
  VAR_6->base.duplex = VAR_0;
 }

 FUNC_1(&VAR_8,
      VAR_6->link_modes.supported);

 VAR_6->base.port = (VAR_8 & VAR_4) ? VAR_2 : VAR_1;
 VAR_6->base.phy_address = VAR_7->phy.mdio.prtad;
 VAR_6->base.autoneg = VAR_7->link_config.autoneg;
 return 0;
}
