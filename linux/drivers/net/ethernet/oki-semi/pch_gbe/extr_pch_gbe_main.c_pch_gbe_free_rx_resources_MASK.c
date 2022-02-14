
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pch_gbe_rx_ring {int * desc; int dma; int size; int * buffer_info; } ;
struct pch_gbe_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (struct pch_gbe_adapter*,struct pch_gbe_rx_ring*) ;
 int FUNC_1 (struct pci_dev*,int ,int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct pch_gbe_adapter *VAR_0,
    struct pch_gbe_rx_ring *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pdev;

 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_1->buffer_info);
 VAR_1->buffer_info = ((void*)0);
 FUNC_1(VAR_2, VAR_1->size, VAR_1->desc, VAR_1->dma);
 VAR_1->desc = ((void*)0);
}
