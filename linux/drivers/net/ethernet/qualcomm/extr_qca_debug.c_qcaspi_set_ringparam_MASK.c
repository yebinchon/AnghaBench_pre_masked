
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct qcaspi {TYPE_1__ txr; } ;
struct net_device_ops {int (* ndo_open ) (struct net_device*) ;int (* ndo_stop ) (struct net_device*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;
struct ethtool_ringparam {int tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; scalar_t__ rx_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct qcaspi* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_5, struct ethtool_ringparam *VAR_6)
{
 const struct net_device_ops *VAR_7 = VAR_5->netdev_ops;
 struct qcaspi *VAR_8 = FUNC_2(VAR_5);

 if ((VAR_6->rx_pending) ||
     (VAR_6->rx_mini_pending) ||
     (VAR_6->rx_jumbo_pending))
  return -VAR_0;

 if (FUNC_3(VAR_5))
  VAR_7->ndo_stop(VAR_5);

 VAR_8->txr.count = FUNC_0(VAR_4, VAR_6->tx_pending, VAR_2);
 VAR_8->txr.count = FUNC_1(VAR_3, VAR_8->txr.count, VAR_1);

 if (FUNC_3(VAR_5))
  VAR_7->ndo_open(VAR_5);

 return 0;
}
