
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ port_type; } ;
struct netxen_adapter {int capabilities; int link_autoneg; int link_duplex; int link_speed; TYPE_1__ ahw; } ;
struct net_device {TYPE_3__* netdev_ops; } ;
struct TYPE_5__ {int autoneg; int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct TYPE_6__ {int (* ndo_open ) (struct net_device*) ;int (* ndo_stop ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct netxen_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netxen_adapter*,int ,int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_5,
         const struct ethtool_link_ksettings *VAR_6)
{
 struct netxen_adapter *VAR_7 = FUNC_0(VAR_5);
 u32 VAR_8 = VAR_6->base.speed;
 int VAR_9;

 if (VAR_7->ahw.port_type != VAR_2)
  return -VAR_1;

 if (!(VAR_7->capabilities & VAR_3))
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_6->base.duplex,
         VAR_6->base.autoneg);
 if (VAR_9 == VAR_4)
  return -VAR_1;
 else if (VAR_9)
  return -VAR_0;

 VAR_7->link_speed = VAR_8;
 VAR_7->link_duplex = VAR_6->base.duplex;
 VAR_7->link_autoneg = VAR_6->base.autoneg;

 if (!FUNC_1(VAR_5))
  return 0;

 VAR_5->netdev_ops->ndo_stop(VAR_5);
 return VAR_5->netdev_ops->ndo_open(VAR_5);
}
