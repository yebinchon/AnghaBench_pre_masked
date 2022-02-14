
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct param_range {int count; int max; } ;
struct TYPE_2__ {struct param_range cbs; struct param_range rfds; } ;
struct nic {TYPE_1__ params; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; int tx_max_pending; int rx_max_pending; } ;


 struct nic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
 struct ethtool_ringparam *VAR_1)
{
 struct nic *VAR_2 = FUNC_0(VAR_0);
 struct param_range *VAR_3 = &VAR_2->params.rfds;
 struct param_range *VAR_4 = &VAR_2->params.cbs;

 VAR_1->rx_max_pending = VAR_3->max;
 VAR_1->tx_max_pending = VAR_4->max;
 VAR_1->rx_pending = VAR_3->count;
 VAR_1->tx_pending = VAR_4->count;
}
