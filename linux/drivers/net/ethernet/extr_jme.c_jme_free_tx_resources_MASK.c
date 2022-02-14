
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jme_ring {int nr_free; int next_to_clean; scalar_t__ next_to_use; struct jme_buffer_info* bufinf; scalar_t__ dma; scalar_t__ dmaalloc; int * desc; int * alloc; } ;
struct jme_buffer_info {scalar_t__ start_xmit; scalar_t__ nr_desc; scalar_t__ len; scalar_t__ mapping; int * skb; } ;
struct jme_adapter {int tx_ring_size; TYPE_1__* pdev; struct jme_ring* txring; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,scalar_t__) ;
 int FUNC_4 (struct jme_buffer_info*) ;

__attribute__((used)) static void
FUNC_5(struct jme_adapter *VAR_0)
{
 int VAR_1;
 struct jme_ring *VAR_2 = &(VAR_0->txring[0]);
 struct jme_buffer_info *VAR_3;

 if (VAR_2->alloc) {
  if (VAR_2->bufinf) {
   for (VAR_1 = 0 ; VAR_1 < VAR_0->tx_ring_size ; ++VAR_1) {
    VAR_3 = VAR_2->bufinf + VAR_1;
    if (VAR_3->skb) {
     FUNC_2(VAR_3->skb);
     VAR_3->skb = ((void*)0);
    }
    VAR_3->mapping = 0;
    VAR_3->len = 0;
    VAR_3->nr_desc = 0;
    VAR_3->start_xmit = 0;
   }
   FUNC_4(VAR_2->bufinf);
  }

  FUNC_3(&(VAR_0->pdev->dev),
      FUNC_0(VAR_0->tx_ring_size),
      VAR_2->alloc,
      VAR_2->dmaalloc);

  VAR_2->alloc = ((void*)0);
  VAR_2->desc = ((void*)0);
  VAR_2->dmaalloc = 0;
  VAR_2->dma = 0;
  VAR_2->bufinf = ((void*)0);
 }
 VAR_2->next_to_use = 0;
 FUNC_1(&VAR_2->next_to_clean, 0);
 FUNC_1(&VAR_2->nr_free, 0);
}
