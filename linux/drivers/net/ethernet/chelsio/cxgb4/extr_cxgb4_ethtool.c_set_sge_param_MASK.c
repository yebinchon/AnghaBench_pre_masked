
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sge {TYPE_5__* ethrxq; TYPE_2__* ethtxq; } ;
struct port_info {int nqsets; int first_qset; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; scalar_t__ rx_mini_pending; scalar_t__ rx_jumbo_pending; } ;
struct adapter {int flags; struct sge sge; } ;
struct TYPE_9__ {scalar_t__ size; } ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_10__ {TYPE_4__ rspq; TYPE_3__ fl; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_7__ {TYPE_1__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_9, struct ethtool_ringparam *VAR_10)
{
 int VAR_11;
 const struct port_info *VAR_12 = FUNC_0(VAR_9);
 struct adapter *VAR_13 = VAR_12->adapter;
 struct sge *VAR_14 = &VAR_13->sge;

 if (VAR_10->rx_pending > VAR_4 || VAR_10->rx_jumbo_pending ||
     VAR_10->tx_pending > VAR_5 ||
     VAR_10->rx_mini_pending > VAR_3 ||
     VAR_10->rx_mini_pending < VAR_7 ||
     VAR_10->rx_pending < VAR_6 || VAR_10->tx_pending < VAR_8)
  return -VAR_2;

 if (VAR_13->flags & VAR_0)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_12->nqsets; ++VAR_11) {
  VAR_14->ethtxq[VAR_12->first_qset + VAR_11].q.size = VAR_10->tx_pending;
  VAR_14->ethrxq[VAR_12->first_qset + VAR_11].fl.size = VAR_10->rx_pending + 8;
  VAR_14->ethrxq[VAR_12->first_qset + VAR_11].rspq.size = VAR_10->rx_mini_pending;
 }
 return 0;
}
