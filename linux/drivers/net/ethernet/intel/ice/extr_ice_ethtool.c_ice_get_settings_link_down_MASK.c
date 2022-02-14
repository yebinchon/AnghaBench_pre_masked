
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct ethtool_link_ksettings*) ;

__attribute__((used)) static void
FUNC_1(struct ethtool_link_ksettings *VAR_2,
      struct net_device *VAR_3)
{



 FUNC_0(VAR_3, VAR_2);


 VAR_2->base.speed = VAR_1;
 VAR_2->base.duplex = VAR_0;
}
