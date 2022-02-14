
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
 int FUNC_0 (struct ethtool_link_ksettings*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_6,
           struct ethtool_link_ksettings *VAR_7)
{
 FUNC_0(VAR_7, VAR_5);
 FUNC_0(VAR_7, VAR_4);
 VAR_7->base.speed = VAR_3;
 VAR_7->base.duplex = VAR_1;
 VAR_7->base.port = VAR_2;
 VAR_7->base.phy_address = 0;
 VAR_7->base.autoneg = VAR_0;
}
