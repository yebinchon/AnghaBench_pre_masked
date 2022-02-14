
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int duplex; int speed; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int FUNC_0 (struct net_device*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_0,
         const struct ethtool_link_ksettings *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->base.autoneg,
      VAR_1->base.speed, VAR_1->base.duplex);
}
