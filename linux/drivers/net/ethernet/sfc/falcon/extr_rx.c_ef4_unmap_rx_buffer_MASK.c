
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct ef4_rx_page_state {int dma_addr; } ;
struct ef4_rx_buffer {struct page* page; } ;
struct ef4_nic {int rx_buffer_order; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int ) ;
 struct ef4_rx_page_state* FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct ef4_nic *VAR_2,
    struct ef4_rx_buffer *VAR_3)
{
 struct page *VAR_4 = VAR_3->page;

 if (VAR_4) {
  struct ef4_rx_page_state *VAR_5 = FUNC_1(VAR_4);
  FUNC_0(&VAR_2->pci_dev->dev,
          VAR_5->dma_addr,
          VAR_1 << VAR_2->rx_buffer_order,
          VAR_0);
 }
}
