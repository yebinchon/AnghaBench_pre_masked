
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct e1000_ring {int count; int * desc; int dma; int size; TYPE_1__* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_adapter {struct pci_dev* pdev; } ;
struct TYPE_2__ {int ps_pages; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct e1000_ring*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct e1000_ring *VAR_0)
{
 struct e1000_adapter *VAR_1 = VAR_0->adapter;
 struct pci_dev *VAR_2 = VAR_1->pdev;
 int VAR_3;

 FUNC_1(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++)
  FUNC_2(VAR_0->buffer_info[VAR_3].ps_pages);

 FUNC_3(VAR_0->buffer_info);
 VAR_0->buffer_info = ((void*)0);

 FUNC_0(&VAR_2->dev, VAR_0->size, VAR_0->desc,
     VAR_0->dma);
 VAR_0->desc = ((void*)0);
}
