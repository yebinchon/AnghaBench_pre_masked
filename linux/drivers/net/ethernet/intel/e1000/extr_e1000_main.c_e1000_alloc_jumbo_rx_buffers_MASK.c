
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct e1000_rx_ring {unsigned int next_to_use; unsigned int count; scalar_t__ rdt; struct e1000_rx_buffer* buffer_info; } ;
struct e1000_rx_desc {int buffer_addr; } ;
struct TYPE_3__ {int * page; } ;
struct e1000_rx_buffer {scalar_t__ dma; TYPE_1__ rxbuf; } ;
struct TYPE_4__ {scalar_t__ hw_addr; } ;
struct e1000_adapter {TYPE_2__ hw; int alloc_rx_buff_failed; int rx_buffer_len; struct pci_dev* pdev; } ;


 int VAR_0 ;
 struct e1000_rx_desc* FUNC_0 (struct e1000_rx_ring,unsigned int) ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(struct e1000_adapter *VAR_2,
        struct e1000_rx_ring *VAR_3, int VAR_4)
{
 struct pci_dev *VAR_5 = VAR_2->pdev;
 struct e1000_rx_desc *VAR_6;
 struct e1000_rx_buffer *VAR_7;
 unsigned int VAR_8;

 VAR_8 = VAR_3->next_to_use;
 VAR_7 = &VAR_3->buffer_info[VAR_8];

 while (VAR_4--) {

  if (!VAR_7->rxbuf.page) {
   VAR_7->rxbuf.page = FUNC_1(VAR_1);
   if (FUNC_8(!VAR_7->rxbuf.page)) {
    VAR_2->alloc_rx_buff_failed++;
    break;
   }
  }

  if (!VAR_7->dma) {
   VAR_7->dma = FUNC_3(&VAR_5->dev,
       VAR_7->rxbuf.page, 0,
       VAR_2->rx_buffer_len,
       VAR_0);
   if (FUNC_4(&VAR_5->dev, VAR_7->dma)) {
    FUNC_7(VAR_7->rxbuf.page);
    VAR_7->rxbuf.page = ((void*)0);
    VAR_7->dma = 0;
    VAR_2->alloc_rx_buff_failed++;
    break;
   }
  }

  VAR_6 = FUNC_0(*VAR_3, VAR_8);
  VAR_6->buffer_addr = FUNC_2(VAR_7->dma);

  if (FUNC_8(++VAR_8 == VAR_3->count))
   VAR_8 = 0;
  VAR_7 = &VAR_3->buffer_info[VAR_8];
 }

 if (FUNC_6(VAR_3->next_to_use != VAR_8)) {
  VAR_3->next_to_use = VAR_8;
  if (FUNC_8(VAR_8-- == 0))
   VAR_8 = (VAR_3->count - 1);






  FUNC_5();
  FUNC_9(VAR_8, VAR_2->hw.hw_addr + VAR_3->rdt);
 }
}
