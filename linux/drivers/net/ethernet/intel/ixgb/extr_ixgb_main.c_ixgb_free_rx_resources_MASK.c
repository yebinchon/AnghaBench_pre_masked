
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ixgb_desc_ring {int * desc; int dma; int size; int * buffer_info; } ;
struct ixgb_adapter {struct pci_dev* pdev; struct ixgb_desc_ring rx_ring; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct ixgb_adapter*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct ixgb_adapter *VAR_0)
{
 struct ixgb_desc_ring *VAR_1 = &VAR_0->rx_ring;
 struct pci_dev *VAR_2 = VAR_0->pdev;

 FUNC_1(VAR_0);

 FUNC_2(VAR_1->buffer_info);
 VAR_1->buffer_info = ((void*)0);

 FUNC_0(&VAR_2->dev, VAR_1->size, VAR_1->desc,
     VAR_1->dma);

 VAR_1->desc = ((void*)0);
}
