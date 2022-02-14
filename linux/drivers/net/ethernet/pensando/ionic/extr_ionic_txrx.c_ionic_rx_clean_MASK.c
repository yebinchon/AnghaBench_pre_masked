
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ csum; int ip_summed; int protocol; } ;
struct net_device {int features; } ;
struct ionic_rxq_comp {int pkt_type_color; int csum_flags; int vlan_tci; int csum; int rss_hash; int len; scalar_t__ status; } ;
struct ionic_rx_stats {int csum_error; int csum_none; int csum_complete; int bytes; int pkts; } ;
struct ionic_queue {int index; TYPE_1__* lif; } ;
struct ionic_qcq {int napi; } ;
struct ionic_desc_info {int dummy; } ;
struct ionic_cq_info {struct ionic_rxq_comp* cq_desc; } ;
typedef scalar_t__ __wsum ;
struct TYPE_2__ {int state; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ionic_queue*,struct ionic_desc_info*,struct ionic_cq_info*,struct sk_buff**) ;
 int FUNC_4 (struct ionic_queue*,struct ionic_desc_info*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 struct ionic_qcq* FUNC_8 (struct ionic_queue*) ;
 struct ionic_rx_stats* FUNC_9 (struct ionic_queue*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct ionic_queue *VAR_14, struct ionic_desc_info *VAR_15,
      struct ionic_cq_info *VAR_16, void *VAR_17)
{
 struct ionic_rxq_comp *VAR_18 = VAR_16->cq_desc;
 struct ionic_qcq *VAR_19 = FUNC_8(VAR_14);
 struct sk_buff *VAR_20 = VAR_17;
 struct ionic_rx_stats *VAR_21;
 struct net_device *VAR_22;

 VAR_21 = FUNC_9(VAR_14);
 VAR_22 = VAR_14->lif->netdev;

 if (VAR_18->status) {
  FUNC_4(VAR_14, VAR_15, VAR_20);
  return;
 }

 if (FUNC_14(FUNC_13(VAR_2, VAR_14->lif->state))) {

  FUNC_4(VAR_14, VAR_15, VAR_20);
  return;
 }

 VAR_21->pkts++;
 VAR_21->bytes += FUNC_5(VAR_18->len);

 FUNC_3(VAR_14, VAR_15, VAR_16, &VAR_20);

 FUNC_10(VAR_20, FUNC_5(VAR_18->len));
 VAR_20->protocol = FUNC_1(VAR_20, VAR_22);

 FUNC_11(VAR_20, VAR_14->index);

 if (VAR_22->features & VAR_11) {
  switch (VAR_18->pkt_type_color & VAR_8) {
  case 133:
  case 130:
   FUNC_12(VAR_20, FUNC_6(VAR_18->rss_hash),
         VAR_12);
   break;
  case 132:
  case 129:
  case 131:
  case 128:
   FUNC_12(VAR_20, FUNC_6(VAR_18->rss_hash),
         VAR_13);
   break;
  }
 }

 if (VAR_22->features & VAR_10) {
  if (VAR_18->csum_flags & VAR_3) {
   VAR_20->ip_summed = VAR_0;
   VAR_20->csum = (__wsum)FUNC_5(VAR_18->csum);
   VAR_21->csum_complete++;
  }
 } else {
  VAR_21->csum_none++;
 }

 if ((VAR_18->csum_flags & VAR_5) ||
     (VAR_18->csum_flags & VAR_6) ||
     (VAR_18->csum_flags & VAR_4))
  VAR_21->csum_error++;

 if (VAR_22->features & VAR_9) {
  if (VAR_18->csum_flags & VAR_7)
   FUNC_0(VAR_20, FUNC_2(VAR_1),
            FUNC_5(VAR_18->vlan_tci));
 }

 FUNC_7(&VAR_19->napi, VAR_20);
}
