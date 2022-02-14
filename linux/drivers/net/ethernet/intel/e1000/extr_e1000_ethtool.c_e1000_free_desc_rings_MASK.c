
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct e1000_tx_ring {int count; TYPE_2__* buffer_info; int * desc; int dma; int size; } ;
struct e1000_rx_ring {int count; TYPE_2__* buffer_info; int * desc; int dma; int size; } ;
struct e1000_adapter {struct pci_dev* pdev; struct e1000_rx_ring test_rx_ring; struct e1000_tx_ring test_tx_ring; } ;
struct TYPE_3__ {TYPE_2__* data; } ;
struct TYPE_4__ {TYPE_1__ rxbuf; scalar_t__ dma; int skb; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct e1000_adapter *VAR_3)
{
 struct e1000_tx_ring *VAR_4 = &VAR_3->test_tx_ring;
 struct e1000_rx_ring *VAR_5 = &VAR_3->test_rx_ring;
 struct pci_dev *VAR_6 = VAR_3->pdev;
 int VAR_7;

 if (VAR_4->desc && VAR_4->buffer_info) {
  for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++) {
   if (VAR_4->buffer_info[VAR_7].dma)
    FUNC_2(&VAR_6->dev,
       VAR_4->buffer_info[VAR_7].dma,
       VAR_4->buffer_info[VAR_7].length,
       VAR_1);
   FUNC_0(VAR_4->buffer_info[VAR_7].skb);
  }
 }

 if (VAR_5->desc && VAR_5->buffer_info) {
  for (VAR_7 = 0; VAR_7 < VAR_5->count; VAR_7++) {
   if (VAR_5->buffer_info[VAR_7].dma)
    FUNC_2(&VAR_6->dev,
       VAR_5->buffer_info[VAR_7].dma,
       VAR_2,
       VAR_0);
   FUNC_3(VAR_5->buffer_info[VAR_7].rxbuf.data);
  }
 }

 if (VAR_4->desc) {
  FUNC_1(&VAR_6->dev, VAR_4->size, VAR_4->desc,
      VAR_4->dma);
  VAR_4->desc = ((void*)0);
 }
 if (VAR_5->desc) {
  FUNC_1(&VAR_6->dev, VAR_5->size, VAR_5->desc,
      VAR_5->dma);
  VAR_5->desc = ((void*)0);
 }

 FUNC_3(VAR_4->buffer_info);
 VAR_4->buffer_info = ((void*)0);
 FUNC_3(VAR_5->buffer_info);
 VAR_5->buffer_info = ((void*)0);
}
