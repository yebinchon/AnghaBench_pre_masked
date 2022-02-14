
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int speed; int duplex; scalar_t__ autoneg; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
         struct ethtool_link_ksettings *VAR_2)
{
 VAR_2->base.autoneg = 0;
 VAR_2->base.duplex = VAR_0;
 VAR_2->base.speed = 10000;
 FUNC_0(VAR_2->link_modes.supported, 0);
 FUNC_0(VAR_2->link_modes.advertising, 0);
 return 0;
}
