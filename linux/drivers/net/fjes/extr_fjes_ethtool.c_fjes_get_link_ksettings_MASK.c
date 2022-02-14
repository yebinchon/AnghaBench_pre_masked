
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int speed; int port; int autoneg; int duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5,
       struct ethtool_link_ksettings *VAR_6)
{
 FUNC_0(VAR_6, VAR_4);
 FUNC_0(VAR_6, VAR_3);
 VAR_6->base.duplex = VAR_1;
 VAR_6->base.autoneg = VAR_0;
 VAR_6->base.port = VAR_2;
 VAR_6->base.speed = 20000;

 return 0;
}
