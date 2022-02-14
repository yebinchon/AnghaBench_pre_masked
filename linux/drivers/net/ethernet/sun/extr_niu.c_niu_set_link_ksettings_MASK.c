
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct niu_link_config {int autoneg; int duplex; int speed; int advertising; } ;
struct niu {struct niu_link_config link_config; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int autoneg; int duplex; int speed; } ;
struct TYPE_4__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_1__ base; TYPE_2__ link_modes; } ;


 int FUNC_0 (int *,int ) ;
 struct niu* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct niu*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
      const struct ethtool_link_ksettings *VAR_1)
{
 struct niu *VAR_2 = FUNC_1(VAR_0);
 struct niu_link_config *VAR_3 = &VAR_2->link_config;

 FUNC_0(&VAR_3->advertising,
      VAR_1->link_modes.advertising);
 VAR_3->speed = VAR_1->base.speed;
 VAR_3->duplex = VAR_1->base.duplex;
 VAR_3->autoneg = VAR_1->base.autoneg;
 return FUNC_2(VAR_2);
}
