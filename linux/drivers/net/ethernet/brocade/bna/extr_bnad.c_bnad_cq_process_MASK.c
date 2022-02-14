
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int features; int ip_summed; } ;
struct bnad_rx_unmap_q {int type; struct bnad_rx_unmap* unmap; } ;
struct bnad_rx_unmap {struct sk_buff* skb; } ;
struct bnad_rx_ctrl {int napi; } ;
struct bnad {struct sk_buff* netdev; } ;
struct bna_rcb {int consumer_index; int flags; int q_depth; TYPE_1__* rxq; struct bnad_rx_unmap_q* unmap_q; } ;
struct bna_pkt_rate {int dummy; } ;
struct bna_cq_entry {scalar_t__ valid; int vlan_tag; int flags; int length; int rxq_id; } ;
struct bna_ccb {size_t producer_index; struct bna_rcb** rcb; int i_dbell; int q_depth; int bytes_per_intr; struct bna_cq_entry* sw_q; struct bnad_rx_ctrl* ctrl; struct bna_pkt_rate pkt_rate; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_packets_with_error; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct bna_pkt_rate*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct bnad*,struct bna_rcb*,int,int) ;
 int FUNC_9 (struct bnad*,struct sk_buff*,struct bnad_rx_unmap*,int) ;
 int FUNC_10 (struct bna_ccb*,struct sk_buff*,int) ;
 int FUNC_11 (struct bnad*,struct bna_rcb*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;
 struct sk_buff* FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 () ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int ,int *) ;
 scalar_t__ FUNC_24 (int) ;

__attribute__((used)) static u32
FUNC_25(struct bnad *VAR_15, struct bna_ccb *VAR_16, int VAR_17)
{
 struct bna_cq_entry *VAR_18, *VAR_19, *VAR_20;
 struct bna_rcb *VAR_21 = ((void*)0);
 struct bnad_rx_unmap_q *VAR_22;
 struct bnad_rx_unmap *VAR_23 = ((void*)0);
 struct sk_buff *VAR_24 = ((void*)0);
 struct bna_pkt_rate *VAR_25 = &VAR_16->pkt_rate;
 struct bnad_rx_ctrl *VAR_26 = VAR_16->ctrl;
 u32 VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;
 u32 VAR_30, VAR_31, VAR_32 = 0, VAR_33 = 0;
 u32 VAR_34, VAR_35;

 FUNC_20(VAR_15->netdev);

 VAR_18 = VAR_16->sw_q;

 while (VAR_27 < VAR_17) {
  VAR_19 = &VAR_18[VAR_16->producer_index];
  if (!VAR_19->valid)
   break;







  FUNC_21();

  FUNC_4(VAR_25, FUNC_19(VAR_19->length));

  if (FUNC_7(VAR_19->rxq_id))
   VAR_21 = VAR_16->rcb[1];
  else
   VAR_21 = VAR_16->rcb[0];

  VAR_22 = VAR_21->unmap_q;


  VAR_32 = VAR_21->consumer_index;

  if (FUNC_1(VAR_22->type)) {
   VAR_23 = &VAR_22->unmap[VAR_32];
   VAR_24 = VAR_23->skb;
  } else {
   VAR_24 = FUNC_14(&VAR_26->napi);
   if (FUNC_24(!VAR_24))
    break;
  }
  FUNC_20(VAR_24);

  VAR_34 = FUNC_18(VAR_19->flags);
  VAR_28 = FUNC_19(VAR_19->length);
  VAR_29 = VAR_28;
  VAR_33 = 1;




  if (FUNC_0(VAR_22->type) &&
      (VAR_34 & VAR_1) == 0) {
   VAR_30 = VAR_16->producer_index;
   do {
    FUNC_3(VAR_30, VAR_16->q_depth);
    VAR_20 = &VAR_18[VAR_30];

    if (!VAR_20->valid)
     break;
    FUNC_21();

    VAR_28 = FUNC_19(VAR_20->length);
    VAR_34 = FUNC_18(VAR_20->flags);

    VAR_33++;
    VAR_29 += VAR_28;
   } while ((VAR_34 & VAR_1) == 0);

   if (!VAR_20->valid)
    break;
  }
  VAR_27++;


  if (FUNC_24(VAR_34 & (VAR_3 |
      VAR_2 |
      VAR_4))) {
   FUNC_8(VAR_15, VAR_21, VAR_32, VAR_33);
   VAR_21->rxq->rx_packets_with_error++;

   goto next;
  }

  if (FUNC_1(VAR_22->type))
   FUNC_9(VAR_15, VAR_24, VAR_23, VAR_28);
  else
   FUNC_10(VAR_16, VAR_24, VAR_33);

  VAR_21->rxq->rx_packets++;
  VAR_21->rxq->rx_bytes += VAR_29;
  VAR_16->bytes_per_intr += VAR_29;

  VAR_35 = VAR_34 & VAR_10;

  if (FUNC_13
      ((VAR_15->netdev->features & VAR_9) &&
       ((VAR_35 == VAR_11) ||
        (VAR_35 == VAR_13) ||
        (VAR_35 == VAR_12) ||
        (VAR_35 == VAR_14))))
   VAR_24->ip_summed = VAR_6;
  else
   FUNC_22(VAR_24);

  if ((VAR_34 & VAR_5) &&
      (VAR_15->netdev->features & VAR_8))
   FUNC_5(VAR_24, FUNC_12(VAR_7), FUNC_19(VAR_19->vlan_tag));

  if (FUNC_1(VAR_22->type))
   FUNC_17(VAR_24);
  else
   FUNC_16(&VAR_26->napi);

next:
  FUNC_2(VAR_21->consumer_index, VAR_33, VAR_21->q_depth);
  for (VAR_31 = 0; VAR_31 < VAR_33; VAR_31++) {
   VAR_19 = &VAR_18[VAR_16->producer_index];
   VAR_19->valid = 0;
   FUNC_3(VAR_16->producer_index, VAR_16->q_depth);
  }
 }

 FUNC_15(&VAR_26->napi, 0);
 if (FUNC_13(FUNC_23(VAR_0, &VAR_16->rcb[0]->flags)))
  FUNC_6(VAR_16->i_dbell, VAR_27);

 FUNC_11(VAR_15, VAR_16->rcb[0]);
 if (VAR_16->rcb[1])
  FUNC_11(VAR_15, VAR_16->rcb[1]);

 return VAR_27;
}
