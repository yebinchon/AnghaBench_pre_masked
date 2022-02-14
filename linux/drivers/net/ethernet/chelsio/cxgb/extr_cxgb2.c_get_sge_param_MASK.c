
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {struct adapter* ml_priv; } ;
struct ethtool_ringparam {int tx_pending; int rx_jumbo_pending; int rx_pending; int tx_max_pending; int rx_jumbo_max_pending; int rx_max_pending; } ;
struct TYPE_3__ {int * cmdQ_size; int * freelQ_size; } ;
struct TYPE_4__ {TYPE_1__ sge; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct adapter*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3, struct ethtool_ringparam *VAR_4)
{
 struct adapter *VAR_5 = VAR_3->ml_priv;
 int VAR_6 = FUNC_0(VAR_5) ? 1 : 0;

 VAR_4->rx_max_pending = VAR_1;
 VAR_4->rx_jumbo_max_pending = VAR_2;
 VAR_4->tx_max_pending = VAR_0;

 VAR_4->rx_pending = VAR_5->params.sge.freelQ_size[!VAR_6];
 VAR_4->rx_jumbo_pending = VAR_5->params.sge.freelQ_size[VAR_6];
 VAR_4->tx_pending = VAR_5->params.sge.cmdQ_size[0];
}
