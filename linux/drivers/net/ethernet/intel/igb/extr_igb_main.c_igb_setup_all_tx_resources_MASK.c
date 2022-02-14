
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct igb_adapter {int num_tx_queues; int * tx_ring; struct pci_dev* pdev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct igb_adapter *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_tx_queues; VAR_2++) {
  VAR_3 = FUNC_2(VAR_0->tx_ring[VAR_2]);
  if (VAR_3) {
   FUNC_0(&VAR_1->dev,
    "Allocation for Tx Queue %u failed\n", VAR_2);
   for (VAR_2--; VAR_2 >= 0; VAR_2--)
    FUNC_1(VAR_0->tx_ring[VAR_2]);
   break;
  }
 }

 return VAR_3;
}
