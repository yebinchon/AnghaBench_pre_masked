
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct e1000_ring {unsigned int count; scalar_t__ next_to_use; scalar_t__ next_to_clean; int size; int desc; int * rx_skb_top; struct e1000_buffer* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_ps_page {int * page; scalar_t__ dma; } ;
struct e1000_buffer {struct e1000_ps_page* ps_pages; int * skb; int * page; scalar_t__ dma; } ;
struct e1000_adapter {scalar_t__ clean_rx; int flags2; int rx_ps_bsize0; int rx_buffer_len; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct e1000_ring *VAR_7)
{
 struct e1000_adapter *VAR_8 = VAR_7->adapter;
 struct e1000_buffer *VAR_9;
 struct e1000_ps_page *VAR_10;
 struct pci_dev *VAR_11 = VAR_8->pdev;
 unsigned int VAR_12, VAR_13;


 for (VAR_12 = 0; VAR_12 < VAR_7->count; VAR_12++) {
  VAR_9 = &VAR_7->buffer_info[VAR_12];
  if (VAR_9->dma) {
   if (VAR_8->clean_rx == VAR_5)
    FUNC_2(&VAR_11->dev, VAR_9->dma,
       VAR_8->rx_buffer_len,
       VAR_0);
   else if (VAR_8->clean_rx == VAR_4)
    FUNC_1(&VAR_11->dev, VAR_9->dma,
            VAR_2, VAR_0);
   else if (VAR_8->clean_rx == VAR_6)
    FUNC_2(&VAR_11->dev, VAR_9->dma,
       VAR_8->rx_ps_bsize0,
       VAR_0);
   VAR_9->dma = 0;
  }

  if (VAR_9->page) {
   FUNC_4(VAR_9->page);
   VAR_9->page = ((void*)0);
  }

  if (VAR_9->skb) {
   FUNC_0(VAR_9->skb);
   VAR_9->skb = ((void*)0);
  }

  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   VAR_10 = &VAR_9->ps_pages[VAR_13];
   if (!VAR_10->page)
    break;
   FUNC_1(&VAR_11->dev, VAR_10->dma, VAR_2,
           VAR_0);
   VAR_10->dma = 0;
   FUNC_4(VAR_10->page);
   VAR_10->page = ((void*)0);
  }
 }


 if (VAR_7->rx_skb_top) {
  FUNC_0(VAR_7->rx_skb_top);
  VAR_7->rx_skb_top = ((void*)0);
 }


 FUNC_3(VAR_7->desc, 0, VAR_7->size);

 VAR_7->next_to_clean = 0;
 VAR_7->next_to_use = 0;
 VAR_8->flags2 &= ~VAR_1;
}
