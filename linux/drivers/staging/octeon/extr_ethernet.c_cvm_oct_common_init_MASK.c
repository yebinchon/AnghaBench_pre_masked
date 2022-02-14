
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct octeon_ethernet {int queue; scalar_t__ of_node; } ;
struct net_device_stats {int dummy; } ;
struct net_device {int features; TYPE_1__* netdev_ops; int mtu; int * ethtool_ops; int name; int dev_addr; } ;
struct TYPE_2__ {int (* ndo_stop ) (struct net_device*) ;int (* ndo_get_stats ) (struct net_device*) ;} ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int const*) ;
 int FUNC_5 (int ,int ,int) ;
 struct octeon_ethernet* FUNC_6 (struct net_device*) ;
 int * FUNC_7 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

int FUNC_11(struct net_device *VAR_7)
{
 struct octeon_ethernet *VAR_8 = FUNC_6(VAR_7);
 const u8 *VAR_9 = ((void*)0);

 if (VAR_8->of_node)
  VAR_9 = FUNC_7(VAR_8->of_node);

 if (!FUNC_0(VAR_9))
  FUNC_4(VAR_7->dev_addr, VAR_9);
 else
  FUNC_3(VAR_7);





 if ((VAR_5 != -1) &&
     (VAR_3 || FUNC_8(VAR_6, VAR_7->name)))
  VAR_8->queue = -1;

 if (VAR_8->queue != -1)
  VAR_7->features |= VAR_2 | VAR_0;


 VAR_7->features |= VAR_1;
 VAR_7->ethtool_ops = &VAR_4;

 FUNC_1(VAR_7);
 FUNC_2(VAR_7, VAR_7->mtu);





 FUNC_5(VAR_7->netdev_ops->ndo_get_stats(VAR_7), 0,
        sizeof(struct net_device_stats));

 if (VAR_7->netdev_ops->ndo_stop)
  VAR_7->netdev_ops->ndo_stop(VAR_7);

 return 0;
}
