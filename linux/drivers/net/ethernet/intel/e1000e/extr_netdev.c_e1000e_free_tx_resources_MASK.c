
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct e1000_ring {int * desc; int dma; int size; int * buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct e1000_ring*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct e1000_ring *VAR_0)
{
 struct e1000_adapter *VAR_1 = VAR_0->adapter;
 struct pci_dev *VAR_2 = VAR_1->pdev;

 FUNC_1(VAR_0);

 FUNC_2(VAR_0->buffer_info);
 VAR_0->buffer_info = ((void*)0);

 FUNC_0(&VAR_2->dev, VAR_0->size, VAR_0->desc,
     VAR_0->dma);
 VAR_0->desc = ((void*)0);
}
