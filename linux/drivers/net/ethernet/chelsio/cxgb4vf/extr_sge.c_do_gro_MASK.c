
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dev; int ip_summed; scalar_t__ data_len; int truesize; scalar_t__ len; } ;
struct TYPE_4__ {int rx_cso; int pkts; int lro_merged; int lro_pkts; int vlan_ex; int rx_drops; } ;
struct TYPE_3__ {int napi; int idx; struct adapter* adapter; } ;
struct sge_eth_rxq {TYPE_2__ stats; TYPE_1__ rspq; } ;
struct sge {scalar_t__ pktshift; } ;
struct port_info {int vlan_id; } ;
struct pkt_gl {scalar_t__ tot_len; } ;
struct cpl_rx_pkt {int vlan; scalar_t__ vlan_ex; } ;
struct adapter {struct sge sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct pkt_gl const*,scalar_t__) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct port_info* FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct pkt_gl const*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct sge_eth_rxq *VAR_5, const struct pkt_gl *VAR_6,
     const struct cpl_rx_pkt *VAR_7)
{
 struct adapter *VAR_8 = VAR_5->rspq.adapter;
 struct sge *VAR_9 = &VAR_8->sge;
 struct port_info *VAR_10;
 int VAR_11;
 struct sk_buff *VAR_12;

 VAR_12 = FUNC_4(&VAR_5->rspq.napi);
 if (FUNC_9(!VAR_12)) {
  FUNC_8(VAR_6);
  VAR_5->stats.rx_drops++;
  return;
 }

 FUNC_2(VAR_12, VAR_6, VAR_9->pktshift);
 VAR_12->len = VAR_6->tot_len - VAR_9->pktshift;
 VAR_12->data_len = VAR_12->len;
 VAR_12->truesize += VAR_12->data_len;
 VAR_12->ip_summed = VAR_0;
 FUNC_7(VAR_12, VAR_5->rspq.idx);
 VAR_10 = FUNC_6(VAR_12->dev);

 if (VAR_7->vlan_ex && !VAR_10->vlan_id) {
  FUNC_0(VAR_12, FUNC_3(VAR_1),
     FUNC_1(VAR_7->vlan));
  VAR_5->stats.vlan_ex++;
 }
 VAR_11 = FUNC_5(&VAR_5->rspq.napi);

 if (VAR_11 == VAR_2)
  VAR_5->stats.lro_pkts++;
 else if (VAR_11 == VAR_3 || VAR_11 == VAR_4)
  VAR_5->stats.lro_merged++;
 VAR_5->stats.pkts++;
 VAR_5->stats.rx_cso++;
}
