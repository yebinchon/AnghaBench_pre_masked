
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_dev {TYPE_1__* ndev; scalar_t__ xdp_prog; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct qede_dev* FUNC_0 (struct net_device*) ;

netdev_features_t FUNC_1(struct net_device *VAR_3,
        netdev_features_t VAR_4)
{
 struct qede_dev *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->xdp_prog || VAR_5->ndev->mtu > VAR_2 ||
     !(VAR_4 & VAR_0))
  VAR_4 &= ~VAR_1;

 return VAR_4;
}
