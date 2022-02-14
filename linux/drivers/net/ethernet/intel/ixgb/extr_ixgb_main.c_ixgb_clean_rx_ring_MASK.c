
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ixgb_desc_ring {unsigned int count; unsigned long size; scalar_t__ next_to_use; scalar_t__ next_to_clean; struct ixgb_buffer* desc; struct ixgb_buffer* buffer_info; } ;
struct ixgb_buffer {int * skb; scalar_t__ length; scalar_t__ dma; } ;
struct ixgb_adapter {int hw; struct pci_dev* pdev; struct ixgb_desc_ring rx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct ixgb_buffer*,int ,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct ixgb_adapter *VAR_3)
{
 struct ixgb_desc_ring *VAR_4 = &VAR_3->rx_ring;
 struct ixgb_buffer *VAR_5;
 struct pci_dev *VAR_6 = VAR_3->pdev;
 unsigned long VAR_7;
 unsigned int VAR_8;



 for (VAR_8 = 0; VAR_8 < VAR_4->count; VAR_8++) {
  VAR_5 = &VAR_4->buffer_info[VAR_8];
  if (VAR_5->dma) {
   FUNC_2(&VAR_6->dev,
      VAR_5->dma,
      VAR_5->length,
      VAR_0);
   VAR_5->dma = 0;
   VAR_5->length = 0;
  }

  if (VAR_5->skb) {
   FUNC_1(VAR_5->skb);
   VAR_5->skb = ((void*)0);
  }
 }

 VAR_7 = sizeof(struct ixgb_buffer) * VAR_4->count;
 FUNC_3(VAR_4->buffer_info, 0, VAR_7);



 FUNC_3(VAR_4->desc, 0, VAR_4->size);

 VAR_4->next_to_clean = 0;
 VAR_4->next_to_use = 0;

 FUNC_0(&VAR_3->hw, VAR_1, 0);
 FUNC_0(&VAR_3->hw, VAR_2, 0);
}
