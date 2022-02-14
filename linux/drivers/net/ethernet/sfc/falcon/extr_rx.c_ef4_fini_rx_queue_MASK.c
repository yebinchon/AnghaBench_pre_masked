
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct ef4_rx_queue {int removed_count; int added_count; int ptr_mask; int page_ptr_mask; struct page** page_ring; scalar_t__ buffer; int slow_fill; struct ef4_nic* efx; } ;
struct ef4_rx_page_state {int dma_addr; } ;
struct ef4_rx_buffer {int dummy; } ;
struct ef4_nic {int rx_buffer_order; TYPE_1__* pci_dev; int net_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ef4_rx_queue*,struct ef4_rx_buffer*) ;
 struct ef4_rx_buffer* FUNC_3 (struct ef4_rx_queue*,unsigned int) ;
 int FUNC_4 (struct ef4_rx_queue*) ;
 int FUNC_5 (struct page**) ;
 int FUNC_6 (struct ef4_nic*,int ,int ,char*,int ) ;
 struct ef4_rx_page_state* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

void FUNC_9(struct ef4_rx_queue *VAR_3)
{
 int VAR_4;
 struct ef4_nic *VAR_5 = VAR_3->efx;
 struct ef4_rx_buffer *VAR_6;

 FUNC_6(VAR_3->efx, VAR_2, VAR_3->efx->net_dev,
    "shutting down RX queue %d\n", FUNC_4(VAR_3));

 FUNC_0(&VAR_3->slow_fill);


 if (VAR_3->buffer) {
  for (VAR_4 = VAR_3->removed_count; VAR_4 < VAR_3->added_count;
       VAR_4++) {
   unsigned VAR_7 = VAR_4 & VAR_3->ptr_mask;
   VAR_6 = FUNC_3(VAR_3, VAR_7);
   FUNC_2(VAR_3, VAR_6);
  }
 }


 for (VAR_4 = 0; VAR_4 <= VAR_3->page_ptr_mask; VAR_4++) {
  struct page *VAR_8 = VAR_3->page_ring[VAR_4];
  struct ef4_rx_page_state *VAR_9;

  if (VAR_8 == ((void*)0))
   continue;

  VAR_9 = FUNC_7(VAR_8);
  FUNC_1(&VAR_5->pci_dev->dev, VAR_9->dma_addr,
          VAR_1 << VAR_5->rx_buffer_order,
          VAR_0);
  FUNC_8(VAR_8);
 }
 FUNC_5(VAR_3->page_ring);
 VAR_3->page_ring = ((void*)0);
}
