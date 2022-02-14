
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int * desc; int dma; int size; int * buffer_info; } ;
struct ixgb_adapter {TYPE_1__ tx_ring; struct pci_dev* pdev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct ixgb_adapter*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct ixgb_adapter *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 FUNC_1(VAR_0);

 FUNC_2(VAR_0->tx_ring.buffer_info);
 VAR_0->tx_ring.buffer_info = ((void*)0);

 FUNC_0(&VAR_1->dev, VAR_0->tx_ring.size,
     VAR_0->tx_ring.desc, VAR_0->tx_ring.dma);

 VAR_0->tx_ring.desc = ((void*)0);
}
