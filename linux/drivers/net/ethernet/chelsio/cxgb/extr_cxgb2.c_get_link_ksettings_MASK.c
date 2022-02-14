
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
struct TYPE_9__ {int supported; int advertising; int autoneg; int duplex; int speed; } ;
struct port_info {TYPE_4__ link_config; TYPE_2__* phy; } ;
struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct TYPE_10__ {int advertising; int supported; } ;
struct TYPE_8__ {int autoneg; int phy_address; int port; int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_5__ link_modes; TYPE_3__ base; } ;
struct adapter {struct port_info* port; } ;
struct TYPE_6__ {int prtad; } ;
struct TYPE_7__ {TYPE_1__ mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5,
         struct ethtool_link_ksettings *VAR_6)
{
 struct adapter *VAR_7 = VAR_5->ml_priv;
 struct port_info *VAR_8 = &VAR_7->port[VAR_5->if_port];
 u32 VAR_9, VAR_10;

 VAR_9 = VAR_8->link_config.supported;
 VAR_10 = VAR_8->link_config.advertising;

 if (FUNC_1(VAR_5)) {
  VAR_6->base.speed = VAR_8->link_config.speed;
  VAR_6->base.duplex = VAR_8->link_config.duplex;
 } else {
  VAR_6->base.speed = VAR_3;
  VAR_6->base.duplex = VAR_0;
 }

 VAR_6->base.port = (VAR_9 & VAR_4) ? VAR_2 : VAR_1;
 VAR_6->base.phy_address = VAR_8->phy->mdio.prtad;
 VAR_6->base.autoneg = VAR_8->link_config.autoneg;

 FUNC_0(VAR_6->link_modes.supported,
      VAR_9);
 FUNC_0(VAR_6->link_modes.advertising,
      VAR_10);

 return 0;
}
