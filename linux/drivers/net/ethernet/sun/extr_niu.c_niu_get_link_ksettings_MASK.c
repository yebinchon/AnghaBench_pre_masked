
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct niu_link_config {int active_duplex; int active_speed; int active_autoneg; int active_advertising; int supported; } ;
struct niu {int flags; int phy_addr; struct niu_link_config link_config; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int port; int duplex; int speed; int autoneg; int phy_address; } ;
struct TYPE_3__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ,int) ;
 struct niu* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
      struct ethtool_link_ksettings *VAR_4)
{
 struct niu *VAR_5 = FUNC_2(VAR_3);
 struct niu_link_config *VAR_6;

 VAR_6 = &VAR_5->link_config;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->base.phy_address = VAR_5->phy_addr;
 FUNC_0(VAR_4->link_modes.supported,
      VAR_6->supported);
 FUNC_0(VAR_4->link_modes.advertising,
      VAR_6->active_advertising);
 VAR_4->base.autoneg = VAR_6->active_autoneg;
 VAR_4->base.speed = VAR_6->active_speed;
 VAR_4->base.duplex = VAR_6->active_duplex;
 VAR_4->base.port = (VAR_5->flags & VAR_0) ? VAR_1 : VAR_2;

 return 0;
}
