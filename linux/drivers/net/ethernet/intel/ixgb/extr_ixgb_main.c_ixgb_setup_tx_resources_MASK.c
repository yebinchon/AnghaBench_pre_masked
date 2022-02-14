
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ixgb_tx_desc {int dummy; } ;
struct ixgb_desc_ring {int count; int size; scalar_t__ next_to_clean; scalar_t__ next_to_use; int buffer_info; int desc; int dma; } ;
struct ixgb_buffer {int dummy; } ;
struct ixgb_adapter {struct pci_dev* pdev; struct ixgb_desc_ring tx_ring; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

int
FUNC_4(struct ixgb_adapter *VAR_2)
{
 struct ixgb_desc_ring *VAR_3 = &VAR_2->tx_ring;
 struct pci_dev *VAR_4 = VAR_2->pdev;
 int VAR_5;

 VAR_5 = sizeof(struct ixgb_buffer) * VAR_3->count;
 VAR_3->buffer_info = FUNC_3(VAR_5);
 if (!VAR_3->buffer_info)
  return -VAR_0;



 VAR_3->size = VAR_3->count * sizeof(struct ixgb_tx_desc);
 VAR_3->size = FUNC_0(VAR_3->size, 4096);

 VAR_3->desc = FUNC_1(&VAR_4->dev, VAR_3->size, &VAR_3->dma,
     VAR_1);
 if (!VAR_3->desc) {
  FUNC_2(VAR_3->buffer_info);
  return -VAR_0;
 }

 VAR_3->next_to_use = 0;
 VAR_3->next_to_clean = 0;

 return 0;
}
