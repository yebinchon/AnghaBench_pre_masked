
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {struct adapter* ml_priv; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ rx_jumbo_pending; int tx_pending; scalar_t__ rx_mini_pending; } ;
struct TYPE_3__ {scalar_t__* freelQ_size; int* cmdQ_size; } ;
struct TYPE_4__ {int nports; TYPE_1__ sge; } ;
struct adapter {int flags; TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct adapter*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_9, struct ethtool_ringparam *VAR_10)
{
 struct adapter *VAR_11 = VAR_9->ml_priv;
 int VAR_12 = FUNC_0(VAR_11) ? 1 : 0;

 if (VAR_10->rx_pending > VAR_5 || VAR_10->rx_mini_pending ||
     VAR_10->rx_jumbo_pending > VAR_6 ||
     VAR_10->tx_pending > VAR_4 ||
     VAR_10->rx_pending < VAR_8 ||
     VAR_10->rx_jumbo_pending < VAR_8 ||
     VAR_10->tx_pending < (VAR_11->params.nports + 1) * (VAR_7 + 1))
  return -VAR_1;

 if (VAR_11->flags & VAR_2)
  return -VAR_0;

 VAR_11->params.sge.freelQ_size[!VAR_12] = VAR_10->rx_pending;
 VAR_11->params.sge.freelQ_size[VAR_12] = VAR_10->rx_jumbo_pending;
 VAR_11->params.sge.cmdQ_size[0] = VAR_10->tx_pending;
 VAR_11->params.sge.cmdQ_size[1] = VAR_10->tx_pending > VAR_3 ?
  VAR_3 : VAR_10->tx_pending;
 return 0;
}
