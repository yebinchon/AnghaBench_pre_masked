
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_7__ {unsigned int produce_idx; unsigned int count; } ;
struct emac_tx_queue {TYPE_3__ tpd; } ;
struct emac_tpd {int dummy; } ;
struct emac_buffer {unsigned int length; void* dma_addr; struct sk_buff* skb; } ;
struct emac_adapter {TYPE_2__* netdev; } ;
typedef int skb_frag_t ;
struct TYPE_8__ {unsigned int nr_frags; int * frags; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct emac_buffer* FUNC_0 (struct emac_tx_queue*,unsigned int) ;
 int FUNC_1 (struct emac_tpd*,int ) ;
 int FUNC_2 (struct emac_tpd*,int ) ;
 int FUNC_3 (struct emac_tpd*,unsigned int) ;
 scalar_t__ FUNC_4 (struct emac_tpd*) ;
 int FUNC_5 (struct sk_buff*) ;
 void* FUNC_6 (int ,int ,int ,unsigned int,int ) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (int ,void*,unsigned int,int ) ;
 int FUNC_9 (struct emac_adapter*,struct emac_tx_queue*,struct emac_tpd*) ;
 int FUNC_10 (struct emac_adapter*,struct emac_tx_queue*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (scalar_t__) ;
 void* FUNC_13 (int ,int *,int ,unsigned int,int ) ;
 unsigned int FUNC_14 (int *) ;
 unsigned int FUNC_15 (struct sk_buff*) ;
 TYPE_4__* FUNC_16 (struct sk_buff*) ;
 unsigned int FUNC_17 (struct sk_buff*) ;
 unsigned int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 () ;

__attribute__((used)) static void FUNC_22(struct emac_adapter *VAR_1,
        struct emac_tx_queue *VAR_2, struct sk_buff *VAR_3,
        struct emac_tpd *VAR_4)
{
 unsigned int VAR_5 = FUNC_16(VAR_3)->nr_frags;
 unsigned int VAR_6 = VAR_2->tpd.produce_idx;
 unsigned int VAR_7 = FUNC_15(VAR_3);
 struct emac_buffer *VAR_8 = ((void*)0);
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;
 int VAR_11 = 0;
 int VAR_12;


 if (FUNC_4(VAR_4)) {
  VAR_9 = FUNC_17(VAR_3) + FUNC_18(VAR_3);

  VAR_8 = FUNC_0(VAR_2, VAR_2->tpd.produce_idx);
  VAR_8->length = VAR_9;
  VAR_8->dma_addr = FUNC_6(VAR_1->netdev->dev.parent,
            FUNC_20(VAR_3->data),
            FUNC_12(VAR_3->data),
            VAR_8->length,
            VAR_0);
  VAR_12 = FUNC_7(VAR_1->netdev->dev.parent,
     VAR_8->dma_addr);
  if (VAR_12)
   goto error;

  FUNC_2(VAR_4, FUNC_11(VAR_8->dma_addr));
  FUNC_1(VAR_4, FUNC_19(VAR_8->dma_addr));
  FUNC_3(VAR_4, VAR_8->length);
  FUNC_9(VAR_1, VAR_2, VAR_4);
  VAR_11++;
 }

 if (VAR_9 < VAR_7) {
  VAR_8 = FUNC_0(VAR_2, VAR_2->tpd.produce_idx);
  VAR_8->length = VAR_7 - VAR_9;
  VAR_8->dma_addr = FUNC_6(VAR_1->netdev->dev.parent,
            FUNC_20(VAR_3->data +
           VAR_9),
            FUNC_12(VAR_3->data +
             VAR_9),
            VAR_8->length, VAR_0);
  VAR_12 = FUNC_7(VAR_1->netdev->dev.parent,
     VAR_8->dma_addr);
  if (VAR_12)
   goto error;

  FUNC_2(VAR_4, FUNC_11(VAR_8->dma_addr));
  FUNC_1(VAR_4, FUNC_19(VAR_8->dma_addr));
  FUNC_3(VAR_4, VAR_8->length);
  FUNC_9(VAR_1, VAR_2, VAR_4);
  VAR_11++;
 }

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  skb_frag_t *VAR_13 = &FUNC_16(VAR_3)->frags[VAR_10];

  VAR_8 = FUNC_0(VAR_2, VAR_2->tpd.produce_idx);
  VAR_8->length = FUNC_14(VAR_13);
  VAR_8->dma_addr = FUNC_13(VAR_1->netdev->dev.parent,
         VAR_13, 0, VAR_8->length,
         VAR_0);
  VAR_12 = FUNC_7(VAR_1->netdev->dev.parent,
     VAR_8->dma_addr);
  if (VAR_12)
   goto error;

  FUNC_2(VAR_4, FUNC_11(VAR_8->dma_addr));
  FUNC_1(VAR_4, FUNC_19(VAR_8->dma_addr));
  FUNC_3(VAR_4, VAR_8->length);
  FUNC_9(VAR_1, VAR_2, VAR_4);
  VAR_11++;
 }


 FUNC_21();
 FUNC_10(VAR_1, VAR_2);




 VAR_8->skb = VAR_3;

 return;

error:

 VAR_2->tpd.produce_idx = VAR_6;

 while (VAR_11--) {
  VAR_8 = FUNC_0(VAR_2, VAR_6);
  FUNC_8(VAR_1->netdev->dev.parent, VAR_8->dma_addr,
          VAR_8->length, VAR_0);
  VAR_8->dma_addr = 0;
  VAR_8->length = 0;

  if (++VAR_6 == VAR_2->tpd.count)
   VAR_6 = 0;
 }

 FUNC_5(VAR_3);
}
