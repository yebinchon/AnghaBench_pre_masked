
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct e1000_rx_ring {int * desc; int dma; int size; int * buffer_info; } ;
struct e1000_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct e1000_adapter*,struct e1000_rx_ring*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_0,
        struct e1000_rx_ring *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pdev;

 FUNC_1(VAR_0, VAR_1);

 FUNC_2(VAR_1->buffer_info);
 VAR_1->buffer_info = ((void*)0);

 FUNC_0(&VAR_2->dev, VAR_1->size, VAR_1->desc,
     VAR_1->dma);

 VAR_1->desc = ((void*)0);
}
