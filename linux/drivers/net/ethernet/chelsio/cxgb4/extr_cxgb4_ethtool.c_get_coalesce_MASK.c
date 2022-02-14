
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_rspq {int intr_params; size_t pktcnt_idx; } ;
struct port_info {size_t first_qset; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int tx_coalesce_usecs_irq; int use_adaptive_rx_coalesce; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;
struct TYPE_4__ {int * counter_val; TYPE_1__* ethrxq; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_3__ {struct sge_rspq rspq; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct adapter const*,struct sge_rspq const*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct ethtool_coalesce *VAR_2)
{
 const struct port_info *VAR_3 = FUNC_3(VAR_1);
 const struct adapter *VAR_4 = VAR_3->adapter;
 const struct sge_rspq *VAR_5 = &VAR_4->sge.ethrxq[VAR_3->first_qset].rspq;

 VAR_2->rx_coalesce_usecs = FUNC_4(VAR_4, VAR_5);
 VAR_2->rx_max_coalesced_frames = (VAR_5->intr_params & VAR_0) ?
  VAR_4->sge.counter_val[VAR_5->pktcnt_idx] : 0;
 VAR_2->use_adaptive_rx_coalesce = FUNC_0(VAR_1);
 VAR_2->tx_coalesce_usecs_irq = FUNC_2(VAR_1);
 VAR_2->tx_coalesce_usecs = FUNC_1(VAR_1);
 return 0;
}
