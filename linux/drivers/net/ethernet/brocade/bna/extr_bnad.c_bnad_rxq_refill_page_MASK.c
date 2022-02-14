
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct page {int dummy; } ;
struct bnad_rx_unmap_q {size_t alloc_order; size_t reuse_pi; size_t map_size; struct bnad_rx_unmap* unmap; } ;
struct TYPE_6__ {size_t len; } ;
struct bnad_rx_unmap {size_t page_offset; TYPE_3__ vector; struct page* page; } ;
struct bnad {TYPE_1__* pcidev; } ;
struct bna_rxq_entry {int host_addr; } ;
struct bna_rcb {size_t producer_index; size_t q_depth; int flags; scalar_t__ sw_q; TYPE_2__* rxq; struct bnad_rx_unmap_q* unmap_q; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {int rxbuf_map_failed; int rxbuf_alloc_failed; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnad*,int ) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_3 (int,size_t) ;
 int FUNC_4 (struct bna_rcb*) ;
 int FUNC_5 (int *,struct page*,size_t,size_t,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (size_t) ;
 int FUNC_10 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 () ;
 size_t FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static u32
FUNC_14(struct bnad *VAR_7, struct bna_rcb *VAR_8, u32 VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 struct bnad_rx_unmap_q *VAR_13 = VAR_8->unmap_q;
 struct bnad_rx_unmap *VAR_14, *VAR_15;
 struct bna_rxq_entry *VAR_16;
 struct page *VAR_17;
 u32 VAR_18, VAR_19;
 dma_addr_t VAR_20;

 VAR_11 = VAR_8->producer_index;
 VAR_12 = VAR_8->q_depth;

 VAR_19 = VAR_3 << VAR_13->alloc_order;
 VAR_10 = 0;

 while (VAR_9--) {
  VAR_14 = &VAR_13->unmap[VAR_11];

  if (VAR_13->reuse_pi < 0) {
   VAR_17 = FUNC_3(VAR_2 | VAR_4,
     VAR_13->alloc_order);
   VAR_18 = 0;
  } else {
   VAR_15 = &VAR_13->unmap[VAR_13->reuse_pi];
   VAR_17 = VAR_15->page;
   VAR_18 = VAR_15->page_offset + VAR_13->map_size;
   FUNC_8(VAR_17);
  }

  if (FUNC_13(!VAR_17)) {
   FUNC_0(VAR_7, VAR_5);
   VAR_8->rxq->rxbuf_alloc_failed++;
   goto finishing;
  }

  VAR_20 = FUNC_5(&VAR_7->pcidev->dev, VAR_17, VAR_18,
     VAR_13->map_size, VAR_1);
  if (FUNC_6(&VAR_7->pcidev->dev, VAR_20)) {
   FUNC_10(VAR_17);
   FUNC_0(VAR_7, VAR_6);
   VAR_8->rxq->rxbuf_map_failed++;
   goto finishing;
  }

  VAR_14->page = VAR_17;
  VAR_14->page_offset = VAR_18;
  FUNC_7(&VAR_14->vector, VAR_20, VAR_20);
  VAR_14->vector.len = VAR_13->map_size;
  VAR_18 += VAR_13->map_size;

  if (VAR_18 < VAR_19)
   VAR_13->reuse_pi = VAR_11;
  else
   VAR_13->reuse_pi = -1;

  VAR_16 = &((struct bna_rxq_entry *)VAR_8->sw_q)[VAR_11];
  FUNC_2(VAR_20, &VAR_16->host_addr);
  FUNC_1(VAR_11, VAR_12);
  VAR_10++;
 }

finishing:
 if (FUNC_9(VAR_10)) {
  VAR_8->producer_index = VAR_11;
  FUNC_11();
  if (FUNC_9(FUNC_12(VAR_0, &VAR_8->flags)))
   FUNC_4(VAR_8);
 }

 return VAR_10;
}
