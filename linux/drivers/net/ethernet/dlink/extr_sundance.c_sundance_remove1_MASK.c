
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct netdev_private {int base; int tx_ring_dma; int tx_ring; int rx_ring_dma; int rx_ring; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3) {
     struct netdev_private *VAR_4 = FUNC_2(VAR_3);
     FUNC_6(VAR_3);
     FUNC_0(&VAR_2->dev, VAR_0,
      VAR_4->rx_ring, VAR_4->rx_ring_dma);
     FUNC_0(&VAR_2->dev, VAR_1,
      VAR_4->tx_ring, VAR_4->tx_ring_dma);
     FUNC_4(VAR_2, VAR_4->base);
     FUNC_5(VAR_2);
     FUNC_1(VAR_3);
 }
}
