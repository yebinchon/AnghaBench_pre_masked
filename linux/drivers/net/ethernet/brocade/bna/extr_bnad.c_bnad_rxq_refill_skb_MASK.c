
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int data; } ;
struct bnad_rx_unmap_q {struct bnad_rx_unmap* unmap; } ;
struct TYPE_6__ {size_t len; } ;
struct bnad_rx_unmap {TYPE_3__ vector; struct sk_buff* skb; } ;
struct bnad {TYPE_1__* pcidev; int netdev; } ;
struct bna_rxq_entry {int host_addr; } ;
struct bna_rcb {size_t producer_index; size_t q_depth; int flags; scalar_t__ sw_q; TYPE_2__* rxq; struct bnad_rx_unmap_q* unmap_q; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {size_t buffer_size; int rxbuf_map_failed; int rxbuf_alloc_failed; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnad*,int ) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct bna_rcb*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int ,size_t,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_8 (size_t) ;
 struct sk_buff* FUNC_9 (int ,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 () ;
 size_t FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static u32
FUNC_13(struct bnad *VAR_4, struct bna_rcb *VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 struct bnad_rx_unmap_q *VAR_11 = VAR_5->unmap_q;
 struct bnad_rx_unmap *VAR_12;
 struct bna_rxq_entry *VAR_13;
 struct sk_buff *VAR_14;
 dma_addr_t VAR_15;

 VAR_10 = VAR_5->rxq->buffer_size;
 VAR_8 = VAR_5->producer_index;
 VAR_9 = VAR_5->q_depth;

 VAR_7 = 0;
 while (VAR_6--) {
  VAR_12 = &VAR_11->unmap[VAR_8];

  VAR_14 = FUNC_9(VAR_4->netdev, VAR_10);

  if (FUNC_12(!VAR_14)) {
   FUNC_0(VAR_4, VAR_2);
   VAR_5->rxq->rxbuf_alloc_failed++;
   goto finishing;
  }

  VAR_15 = FUNC_5(&VAR_4->pcidev->dev, VAR_14->data,
       VAR_10, VAR_1);
  if (FUNC_6(&VAR_4->pcidev->dev, VAR_15)) {
   FUNC_4(VAR_14);
   FUNC_0(VAR_4, VAR_3);
   VAR_5->rxq->rxbuf_map_failed++;
   goto finishing;
  }

  VAR_12->skb = VAR_14;
  FUNC_7(&VAR_12->vector, VAR_15, VAR_15);
  VAR_12->vector.len = VAR_10;

  VAR_13 = &((struct bna_rxq_entry *)VAR_5->sw_q)[VAR_8];
  FUNC_2(VAR_15, &VAR_13->host_addr);
  FUNC_1(VAR_8, VAR_9);
  VAR_7++;
 }

finishing:
 if (FUNC_8(VAR_7)) {
  VAR_5->producer_index = VAR_8;
  FUNC_10();
  if (FUNC_8(FUNC_11(VAR_0, &VAR_5->flags)))
   FUNC_3(VAR_5);
 }

 return VAR_7;
}
