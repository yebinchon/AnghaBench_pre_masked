
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int autoneg; int port; int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_4,
       struct ethtool_link_ksettings *VAR_5)
{
 VAR_5->base.speed = VAR_3;
 VAR_5->base.duplex = VAR_1;
 VAR_5->base.port = VAR_2;
 VAR_5->base.autoneg = VAR_0;
 return 0;
}
