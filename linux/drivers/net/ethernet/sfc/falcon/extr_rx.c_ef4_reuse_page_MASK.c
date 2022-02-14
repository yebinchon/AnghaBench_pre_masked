
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct ef4_rx_queue {unsigned int page_remove; unsigned int page_ptr_mask; unsigned int page_add; int page_recycle_failed; int page_recycle_count; struct page** page_ring; struct ef4_nic* efx; } ;
struct ef4_rx_page_state {int dma_addr; } ;
struct ef4_nic {int rx_buffer_order; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int ) ;
 struct ef4_rx_page_state* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static struct page *FUNC_4(struct ef4_rx_queue *VAR_2)
{
 struct ef4_nic *VAR_3 = VAR_2->efx;
 struct page *VAR_4;
 struct ef4_rx_page_state *VAR_5;
 unsigned VAR_6;

 VAR_6 = VAR_2->page_remove & VAR_2->page_ptr_mask;
 VAR_4 = VAR_2->page_ring[VAR_6];
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_2->page_ring[VAR_6] = ((void*)0);

 if (VAR_2->page_remove != VAR_2->page_add)
  ++VAR_2->page_remove;


 if (FUNC_2(VAR_4) == 1) {
  ++VAR_2->page_recycle_count;
  return VAR_4;
 } else {
  VAR_5 = FUNC_1(VAR_4);
  FUNC_0(&VAR_3->pci_dev->dev, VAR_5->dma_addr,
          VAR_1 << VAR_3->rx_buffer_order,
          VAR_0);
  FUNC_3(VAR_4);
  ++VAR_2->page_recycle_failed;
 }

 return ((void*)0);
}
