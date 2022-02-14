
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct net_device *VAR_4,
   const struct ethtool_link_ksettings *VAR_5)
{

 if (VAR_5->base.autoneg == VAR_0)
  return -VAR_2;

 if ((VAR_5->base.speed == VAR_3) &&
     (VAR_5->base.duplex == VAR_1))
  return 0;

 return -VAR_2;
}
