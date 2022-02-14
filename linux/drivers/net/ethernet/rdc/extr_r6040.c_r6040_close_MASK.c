
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r6040_private {int * tx_ring; int tx_ring_dma; int * rx_ring; int rx_ring_dma; int lock; int napi; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int irq; int phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 struct r6040_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*,int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2)
{
 struct r6040_private *VAR_3 = FUNC_2(VAR_2);
 struct pci_dev *VAR_4 = VAR_3->pdev;

 FUNC_5(VAR_2->phydev);
 FUNC_1(&VAR_3->napi);
 FUNC_3(VAR_2);

 FUNC_9(&VAR_3->lock);
 FUNC_6(VAR_2);


 FUNC_7(VAR_2);


 FUNC_8(VAR_2);

 FUNC_10(&VAR_3->lock);

 FUNC_0(VAR_2->irq, VAR_2);


 if (VAR_3->rx_ring) {
  FUNC_4(VAR_4,
    VAR_0, VAR_3->rx_ring, VAR_3->rx_ring_dma);
  VAR_3->rx_ring = ((void*)0);
 }

 if (VAR_3->tx_ring) {
  FUNC_4(VAR_4,
    VAR_1, VAR_3->tx_ring, VAR_3->tx_ring_dma);
  VAR_3->tx_ring = ((void*)0);
 }

 return 0;
}
