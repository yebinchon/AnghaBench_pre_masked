
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qset_params {scalar_t__ rspq_size; scalar_t__ fl_size; scalar_t__ jumbo_size; int* txq_size; } ;
struct port_info {size_t first_qset; int nqsets; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ rx_jumbo_pending; int tx_pending; scalar_t__ rx_mini_pending; } ;
struct TYPE_3__ {struct qset_params* qset; } ;
struct TYPE_4__ {int nports; TYPE_1__ sge; } ;
struct adapter {int flags; TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_10, struct ethtool_ringparam *VAR_11)
{
 struct port_info *VAR_12 = FUNC_0(VAR_10);
 struct adapter *VAR_13 = VAR_12->adapter;
 struct qset_params *VAR_14;
 int VAR_15;

 if (VAR_11->rx_pending > VAR_4 ||
     VAR_11->rx_jumbo_pending > VAR_5 ||
     VAR_11->tx_pending > VAR_6 ||
     VAR_11->rx_mini_pending > VAR_3 ||
     VAR_11->rx_mini_pending < VAR_8 ||
     VAR_11->rx_pending < VAR_7 ||
     VAR_11->rx_jumbo_pending < VAR_7 ||
     VAR_11->tx_pending < VAR_13->params.nports * VAR_9)
  return -VAR_1;

 if (VAR_13->flags & VAR_2)
  return -VAR_0;

 VAR_14 = &VAR_13->params.sge.qset[VAR_12->first_qset];
 for (VAR_15 = 0; VAR_15 < VAR_12->nqsets; ++VAR_15, ++VAR_14) {
  VAR_14->rspq_size = VAR_11->rx_mini_pending;
  VAR_14->fl_size = VAR_11->rx_pending;
  VAR_14->jumbo_size = VAR_11->rx_jumbo_pending;
  VAR_14->txq_size[0] = VAR_11->tx_pending;
  VAR_14->txq_size[1] = VAR_11->tx_pending;
  VAR_14->txq_size[2] = VAR_11->tx_pending;
 }
 return 0;
}
