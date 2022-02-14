
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct e1000_rx_ring {unsigned int count; unsigned long size; scalar_t__ rdt; scalar_t__ rdh; scalar_t__ next_to_use; scalar_t__ next_to_clean; struct e1000_rx_buffer* desc; struct e1000_rx_buffer* buffer_info; int * rx_skb_top; } ;
struct TYPE_2__ {int * page; int * data; } ;
struct e1000_rx_buffer {scalar_t__ dma; TYPE_1__ rxbuf; } ;
struct e1000_hw {scalar_t__ hw_addr; } ;
struct e1000_adapter {scalar_t__ clean_rx; int napi; int rx_buffer_len; struct pci_dev* pdev; struct e1000_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ,int ) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct e1000_rx_buffer*,int ,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct e1000_adapter *VAR_3,
    struct e1000_rx_ring *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_3->hw;
 struct e1000_rx_buffer *VAR_6;
 struct pci_dev *VAR_7 = VAR_3->pdev;
 unsigned long VAR_8;
 unsigned int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_4->count; VAR_9++) {
  VAR_6 = &VAR_4->buffer_info[VAR_9];
  if (VAR_3->clean_rx == VAR_2) {
   if (VAR_6->dma)
    FUNC_1(&VAR_7->dev, VAR_6->dma,
       VAR_3->rx_buffer_len,
       VAR_0);
   if (VAR_6->rxbuf.data) {
    FUNC_5(VAR_6->rxbuf.data);
    VAR_6->rxbuf.data = ((void*)0);
   }
  } else if (VAR_3->clean_rx == VAR_1) {
   if (VAR_6->dma)
    FUNC_0(&VAR_7->dev, VAR_6->dma,
            VAR_3->rx_buffer_len,
            VAR_0);
   if (VAR_6->rxbuf.page) {
    FUNC_4(VAR_6->rxbuf.page);
    VAR_6->rxbuf.page = ((void*)0);
   }
  }

  VAR_6->dma = 0;
 }


 FUNC_3(&VAR_3->napi);
 VAR_4->rx_skb_top = ((void*)0);

 VAR_8 = sizeof(struct e1000_rx_buffer) * VAR_4->count;
 FUNC_2(VAR_4->buffer_info, 0, VAR_8);


 FUNC_2(VAR_4->desc, 0, VAR_4->size);

 VAR_4->next_to_clean = 0;
 VAR_4->next_to_use = 0;

 FUNC_6(0, VAR_5->hw_addr + VAR_4->rdh);
 FUNC_6(0, VAR_5->hw_addr + VAR_4->rdt);
}
