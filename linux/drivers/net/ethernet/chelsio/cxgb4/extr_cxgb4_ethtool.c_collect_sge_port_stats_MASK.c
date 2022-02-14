
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_eth_txq {scalar_t__ vlan_ins; scalar_t__ tx_cso; scalar_t__ tso; } ;
struct TYPE_4__ {scalar_t__ lro_merged; scalar_t__ lro_pkts; scalar_t__ vlan_ex; scalar_t__ rx_cso; } ;
struct sge_eth_rxq {TYPE_2__ stats; } ;
struct queue_port_stats {int gro_merged; int gro_pkts; int vlan_ins; int vlan_ex; int rx_csum; int tx_csum; int tso; } ;
struct port_info {size_t first_qset; int nqsets; } ;
struct TYPE_3__ {struct sge_eth_rxq* ethrxq; struct sge_eth_txq* ethtxq; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (struct queue_port_stats*,int ,int) ;

__attribute__((used)) static void FUNC_1(const struct adapter *VAR_0,
       const struct port_info *VAR_1,
       struct queue_port_stats *VAR_2)
{
 int VAR_3;
 const struct sge_eth_txq *VAR_4 = &VAR_0->sge.ethtxq[VAR_1->first_qset];
 const struct sge_eth_rxq *VAR_5 = &VAR_0->sge.ethrxq[VAR_1->first_qset];

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 for (VAR_3 = 0; VAR_3 < VAR_1->nqsets; VAR_3++, VAR_5++, VAR_4++) {
  VAR_2->tso += VAR_4->tso;
  VAR_2->tx_csum += VAR_4->tx_cso;
  VAR_2->rx_csum += VAR_5->stats.rx_cso;
  VAR_2->vlan_ex += VAR_5->stats.vlan_ex;
  VAR_2->vlan_ins += VAR_4->vlan_ins;
  VAR_2->gro_pkts += VAR_5->stats.lro_pkts;
  VAR_2->gro_merged += VAR_5->stats.lro_merged;
 }
}
