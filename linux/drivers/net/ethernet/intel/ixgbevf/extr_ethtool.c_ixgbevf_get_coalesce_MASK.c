
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbevf_adapter {int rx_itr_setting; int tx_itr_setting; TYPE_3__** q_vector; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int tx_coalesce_usecs; } ;
struct TYPE_5__ {scalar_t__ count; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_6__ {TYPE_2__ rx; TYPE_1__ tx; } ;


 struct ixgbevf_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
    struct ethtool_coalesce *VAR_1)
{
 struct ixgbevf_adapter *VAR_2 = FUNC_0(VAR_0);


 if (VAR_2->rx_itr_setting <= 1)
  VAR_1->rx_coalesce_usecs = VAR_2->rx_itr_setting;
 else
  VAR_1->rx_coalesce_usecs = VAR_2->rx_itr_setting >> 2;


 if (VAR_2->q_vector[0]->tx.count && VAR_2->q_vector[0]->rx.count)
  return 0;


 if (VAR_2->tx_itr_setting <= 1)
  VAR_1->tx_coalesce_usecs = VAR_2->tx_itr_setting;
 else
  VAR_1->tx_coalesce_usecs = VAR_2->tx_itr_setting >> 2;

 return 0;
}
