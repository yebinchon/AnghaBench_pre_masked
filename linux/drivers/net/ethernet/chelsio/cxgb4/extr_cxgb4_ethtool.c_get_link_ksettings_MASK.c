
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pcaps; int lpacaps; scalar_t__ autoneg; int speed; } ;
struct port_info {scalar_t__ port_type; scalar_t__ mdio_addr; TYPE_2__ link_cfg; int lport; int adapter; int mod_type; } ;
struct net_device {int dummy; } ;
struct ethtool_link_settings {int phy_address; scalar_t__ autoneg; int duplex; int speed; scalar_t__ mdio_support; int port; } ;
struct TYPE_3__ {int lp_advertising; int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; struct ethtool_link_settings base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int,int ) ;
 int VAR_8 ;
 struct port_info* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_7 (int ,int ,TYPE_2__*) ;
 int FUNC_8 (struct port_info*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_10,
         struct ethtool_link_ksettings *VAR_11)
{
 struct port_info *VAR_12 = FUNC_4(VAR_10);
 struct ethtool_link_settings *VAR_13 = &VAR_11->base;





 if (!FUNC_6(VAR_10))
  (void)FUNC_8(VAR_12);

 FUNC_1(VAR_11, VAR_9);
 FUNC_1(VAR_11, VAR_7);
 FUNC_1(VAR_11, VAR_8);

 VAR_13->port = FUNC_2(VAR_12->port_type, VAR_12->mod_type);

 if (VAR_12->mdio_addr >= 0) {
  VAR_13->phy_address = VAR_12->mdio_addr;
  VAR_13->mdio_support = (VAR_12->port_type == VAR_5
          ? VAR_2
          : VAR_3);
 } else {
  VAR_13->phy_address = 255;
  VAR_13->mdio_support = 0;
 }

 FUNC_3(VAR_12->port_type, VAR_12->link_cfg.pcaps,
         VAR_11->link_modes.supported);
 FUNC_3(VAR_12->port_type,
         FUNC_7(VAR_12->adapter,
         VAR_12->lport,
         &VAR_12->link_cfg),
         VAR_11->link_modes.advertising);
 FUNC_3(VAR_12->port_type, VAR_12->link_cfg.lpacaps,
         VAR_11->link_modes.lp_advertising);

 VAR_13->speed = (FUNC_5(VAR_10)
         ? VAR_12->link_cfg.speed
         : VAR_6);
 VAR_13->duplex = VAR_1;

 VAR_13->autoneg = VAR_12->link_cfg.autoneg;
 if (VAR_12->link_cfg.pcaps & VAR_4)
  FUNC_0(VAR_11,
           VAR_9, VAR_0);
 if (VAR_12->link_cfg.autoneg)
  FUNC_0(VAR_11,
           VAR_7, VAR_0);

 return 0;
}
