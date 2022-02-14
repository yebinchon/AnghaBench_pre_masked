
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int autoneg; scalar_t__ phy_address; int port; int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_7,
      struct ethtool_link_ksettings *VAR_8)
{
 FUNC_1(VAR_8, VAR_6);
 FUNC_0(VAR_8, VAR_6, VAR_1);
 FUNC_1(VAR_8, VAR_5);
 FUNC_0(VAR_8, VAR_5, VAR_1);

 VAR_8->base.speed = VAR_4;
 VAR_8->base.duplex = VAR_2;
 VAR_8->base.port = VAR_3;
 VAR_8->base.phy_address = 0;
 VAR_8->base.autoneg = VAR_0;

 return 0;
}
