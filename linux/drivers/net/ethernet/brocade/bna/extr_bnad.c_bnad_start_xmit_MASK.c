
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct net_device {int dummy; } ;
struct bnad_tx_unmap {scalar_t__ nvecs; int * vectors; struct sk_buff* skb; } ;
struct bnad {TYPE_5__* pcidev; TYPE_2__* tx_info; } ;
struct TYPE_8__ {void* opcode; } ;
struct TYPE_10__ {scalar_t__ num_vectors; scalar_t__ reserved; } ;
struct TYPE_11__ {TYPE_1__ wi_ext; TYPE_3__ wi; } ;
struct bna_txq_entry {TYPE_6__* vector; TYPE_4__ hdr; } ;
struct bna_tcb {scalar_t__ q_depth; scalar_t__ producer_index; scalar_t__* hw_consumer_index; scalar_t__ consumer_index; int flags; scalar_t__ sw_q; int i_dbell; struct bnad_tx_unmap* unmap_q; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;
struct TYPE_14__ {scalar_t__ nr_frags; int * frags; } ;
struct TYPE_13__ {void* length; int host_addr; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_9__ {struct bna_tcb** tcb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnad*,int ) ;
 scalar_t__ FUNC_1 (struct bna_tcb*,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct bna_tcb*) ;
 int FUNC_7 (struct bnad*,struct bnad_tx_unmap*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct bnad*,struct bna_tcb*) ;
 scalar_t__ FUNC_9 (struct bnad*,struct bna_tcb*,struct sk_buff*,struct bna_txq_entry*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct sk_buff*) ;
 int VAR_10 ;
 int FUNC_12 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *,int ,scalar_t__) ;
 void* FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (int) ;
 struct bnad* FUNC_18 (struct net_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (int *,int const*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_22 (int const*) ;
 scalar_t__ FUNC_23 (struct sk_buff*) ;
 TYPE_7__* FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 (int ,int *) ;
 int FUNC_29 (int ,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_30 (int) ;
 int FUNC_31 () ;

__attribute__((used)) static netdev_tx_t
FUNC_32(struct sk_buff *VAR_20, struct net_device *VAR_21)
{
 struct bnad *VAR_22 = FUNC_18(VAR_21);
 u32 VAR_23 = 0;
 struct bna_tcb *VAR_24 = ((void*)0);
 struct bnad_tx_unmap *VAR_25, *VAR_26, *VAR_27;
 u32 VAR_28, VAR_29, VAR_30;
 u32 VAR_31, VAR_32, VAR_33;
 int VAR_34;
 dma_addr_t VAR_35;
 struct bna_txq_entry *VAR_36;

 VAR_33 = FUNC_23(VAR_20);



 if (FUNC_30(VAR_20->len <= VAR_7)) {
  FUNC_11(VAR_20);
  FUNC_0(VAR_22, VAR_19);
  return VAR_9;
 }
 if (FUNC_30(VAR_33 > VAR_0)) {
  FUNC_11(VAR_20);
  FUNC_0(VAR_22, VAR_14);
  return VAR_9;
 }
 if (FUNC_30(VAR_33 == 0)) {
  FUNC_11(VAR_20);
  FUNC_0(VAR_22, VAR_14);
  return VAR_9;
 }

 VAR_24 = VAR_22->tx_info[0].tcb[VAR_23];





 if (FUNC_30(!VAR_24 || !FUNC_29(VAR_4, &VAR_24->flags))) {
  FUNC_11(VAR_20);
  FUNC_0(VAR_22, VAR_18);
  return VAR_9;
 }

 VAR_29 = VAR_24->q_depth;
 VAR_28 = VAR_24->producer_index;
 VAR_25 = VAR_24->unmap_q;

 VAR_32 = 1 + FUNC_24(VAR_20)->nr_frags;
 VAR_31 = FUNC_4(VAR_32);

 if (FUNC_30(VAR_32 > VAR_1)) {
  FUNC_11(VAR_20);
  FUNC_0(VAR_22, VAR_17);
  return VAR_9;
 }


 if (FUNC_30(VAR_31 > FUNC_1(VAR_24, VAR_29))) {
  if ((*VAR_24->hw_consumer_index != VAR_24->consumer_index) &&
      !FUNC_28(VAR_3, &VAR_24->flags)) {
   u32 VAR_37;
   VAR_37 = FUNC_8(VAR_22, VAR_24);
   if (FUNC_17(FUNC_29(VAR_4, &VAR_24->flags)))
    FUNC_5(VAR_24->i_dbell, VAR_37);
   FUNC_27();
   FUNC_10(VAR_3, &VAR_24->flags);
  } else {
   FUNC_19(VAR_21);
   FUNC_0(VAR_22, VAR_11);
  }

  FUNC_26();





  if (FUNC_17(VAR_31 > FUNC_1(VAR_24, VAR_29))) {
   FUNC_0(VAR_22, VAR_11);
   return VAR_8;
  } else {
   FUNC_20(VAR_21);
   FUNC_0(VAR_22, VAR_12);
  }
 }

 VAR_36 = &((struct bna_txq_entry *)VAR_24->sw_q)[VAR_28];
 VAR_27 = &VAR_25[VAR_28];


 if (FUNC_9(VAR_22, VAR_24, VAR_20, VAR_36)) {
  FUNC_11(VAR_20);
  return VAR_9;
 }
 VAR_36->hdr.wi.reserved = 0;
 VAR_36->hdr.wi.num_vectors = VAR_32;

 VAR_27->skb = VAR_20;
 VAR_27->nvecs = 0;


 VAR_26 = VAR_27;
 VAR_35 = FUNC_12(&VAR_22->pcidev->dev, VAR_20->data,
      VAR_33, VAR_6);
 if (FUNC_13(&VAR_22->pcidev->dev, VAR_35)) {
  FUNC_11(VAR_20);
  FUNC_0(VAR_22, VAR_16);
  return VAR_9;
 }
 FUNC_3(VAR_35, &VAR_36->vector[0].host_addr);
 VAR_36->vector[0].length = FUNC_16(VAR_33);
 FUNC_14(&VAR_26->vectors[0], VAR_35, VAR_35);
 VAR_27->nvecs++;

 for (VAR_34 = 0, VAR_30 = 0; VAR_34 < VAR_32 - 1; VAR_34++) {
  const skb_frag_t *VAR_38 = &FUNC_24(VAR_20)->frags[VAR_34];
  u32 VAR_39 = FUNC_22(VAR_38);

  if (FUNC_30(VAR_39 == 0)) {

   FUNC_7(VAR_22, VAR_25, VAR_29,
    VAR_24->producer_index);
   FUNC_11(VAR_20);
   FUNC_0(VAR_22, VAR_13);
   return VAR_9;
  }

  VAR_33 += VAR_39;

  VAR_30++;
  if (VAR_30 == VAR_2) {
   VAR_30 = 0;
   FUNC_2(VAR_28, VAR_29);
   VAR_36 = &((struct bna_txq_entry *)VAR_24->sw_q)[VAR_28];
   VAR_36->hdr.wi_ext.opcode = FUNC_16(VAR_5);
   VAR_26 = &VAR_25[VAR_28];
  }

  VAR_35 = FUNC_21(&VAR_22->pcidev->dev, VAR_38,
         0, VAR_39, VAR_6);
  if (FUNC_13(&VAR_22->pcidev->dev, VAR_35)) {

   FUNC_7(VAR_22, VAR_25, VAR_29,
        VAR_24->producer_index);
   FUNC_11(VAR_20);
   FUNC_0(VAR_22, VAR_16);
   return VAR_9;
  }

  FUNC_15(&VAR_26->vectors[VAR_30], VAR_10, VAR_39);
  FUNC_3(VAR_35, &VAR_36->vector[VAR_30].host_addr);
  VAR_36->vector[VAR_30].length = FUNC_16(VAR_39);
  FUNC_14(&VAR_26->vectors[VAR_30], VAR_35,
       VAR_35);
  VAR_27->nvecs++;
 }

 if (FUNC_30(VAR_33 != VAR_20->len)) {

  FUNC_7(VAR_22, VAR_25, VAR_29, VAR_24->producer_index);
  FUNC_11(VAR_20);
  FUNC_0(VAR_22, VAR_15);
  return VAR_9;
 }

 FUNC_2(VAR_28, VAR_29);
 VAR_24->producer_index = VAR_28;

 FUNC_31();

 if (FUNC_30(!FUNC_29(VAR_4, &VAR_24->flags)))
  return VAR_9;

 FUNC_25(VAR_20);

 FUNC_6(VAR_24);

 return VAR_9;
}
