
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pcaps; int acaps; int lpacaps; scalar_t__ autoneg; int speed; } ;
struct port_info {scalar_t__ port_type; scalar_t__ mdio_addr; TYPE_2__ link_cfg; int mod_type; } ;
struct net_device {int dummy; } ;
struct ethtool_link_settings {int phy_address; scalar_t__ autoneg; int duplex; int speed; scalar_t__ mdio_support; int port; } ;
struct TYPE_3__ {int lp_advertising; int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; struct ethtool_link_settings base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int,int ) ;
 int VAR_9 ;
 struct port_info* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_10 ;
 int FUNC_7 (struct port_info*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_11,
      struct ethtool_link_ksettings *VAR_12)
{
 struct port_info *VAR_13 = FUNC_4(VAR_11);
 struct ethtool_link_settings *VAR_14 = &VAR_12->base;





 if (!FUNC_6(VAR_11))
  (void)FUNC_7(VAR_13);

 FUNC_1(VAR_12, VAR_10);
 FUNC_1(VAR_12, VAR_8);
 FUNC_1(VAR_12, VAR_9);

 VAR_14->port = FUNC_2(VAR_13->port_type, VAR_13->mod_type);

 if (VAR_13->mdio_addr >= 0) {
  VAR_14->phy_address = VAR_13->mdio_addr;
  VAR_14->mdio_support = (VAR_13->port_type == VAR_6
          ? VAR_3
          : VAR_4);
 } else {
  VAR_14->phy_address = 255;
  VAR_14->mdio_support = 0;
 }

 FUNC_3(VAR_13->port_type, VAR_13->link_cfg.pcaps,
         VAR_12->link_modes.supported);
 FUNC_3(VAR_13->port_type, VAR_13->link_cfg.acaps,
         VAR_12->link_modes.advertising);
 FUNC_3(VAR_13->port_type, VAR_13->link_cfg.lpacaps,
         VAR_12->link_modes.lp_advertising);

 if (FUNC_5(VAR_11)) {
  VAR_14->speed = VAR_13->link_cfg.speed;
  VAR_14->duplex = VAR_1;
 } else {
  VAR_14->speed = VAR_7;
  VAR_14->duplex = VAR_2;
 }

 VAR_14->autoneg = VAR_13->link_cfg.autoneg;
 if (VAR_13->link_cfg.pcaps & VAR_5)
  FUNC_0(VAR_12,
           VAR_10, VAR_0);
 if (VAR_13->link_cfg.autoneg)
  FUNC_0(VAR_12,
           VAR_8, VAR_0);

 return 0;
}
