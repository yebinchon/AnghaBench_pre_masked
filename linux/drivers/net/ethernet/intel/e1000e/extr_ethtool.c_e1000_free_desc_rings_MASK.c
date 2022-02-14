
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct e1000_ring {int count; struct e1000_buffer* buffer_info; int * desc; int dma; int size; } ;
struct e1000_buffer {int length; int skb; scalar_t__ dma; } ;
struct e1000_adapter {struct pci_dev* pdev; struct e1000_ring test_rx_ring; struct e1000_ring test_tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,scalar_t__,int,int ) ;
 int FUNC_3 (struct e1000_buffer*) ;

__attribute__((used)) static void FUNC_4(struct e1000_adapter *VAR_2)
{
 struct e1000_ring *VAR_3 = &VAR_2->test_tx_ring;
 struct e1000_ring *VAR_4 = &VAR_2->test_rx_ring;
 struct pci_dev *VAR_5 = VAR_2->pdev;
 struct e1000_buffer *VAR_6;
 int VAR_7;

 if (VAR_3->desc && VAR_3->buffer_info) {
  for (VAR_7 = 0; VAR_7 < VAR_3->count; VAR_7++) {
   VAR_6 = &VAR_3->buffer_info[VAR_7];

   if (VAR_6->dma)
    FUNC_2(&VAR_5->dev,
       VAR_6->dma,
       VAR_6->length,
       VAR_1);
   FUNC_0(VAR_6->skb);
  }
 }

 if (VAR_4->desc && VAR_4->buffer_info) {
  for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++) {
   VAR_6 = &VAR_4->buffer_info[VAR_7];

   if (VAR_6->dma)
    FUNC_2(&VAR_5->dev,
       VAR_6->dma,
       2048, VAR_0);
   FUNC_0(VAR_6->skb);
  }
 }

 if (VAR_3->desc) {
  FUNC_1(&VAR_5->dev, VAR_3->size, VAR_3->desc,
      VAR_3->dma);
  VAR_3->desc = ((void*)0);
 }
 if (VAR_4->desc) {
  FUNC_1(&VAR_5->dev, VAR_4->size, VAR_4->desc,
      VAR_4->dma);
  VAR_4->desc = ((void*)0);
 }

 FUNC_3(VAR_3->buffer_info);
 VAR_3->buffer_info = ((void*)0);
 FUNC_3(VAR_4->buffer_info);
 VAR_4->buffer_info = ((void*)0);
}
