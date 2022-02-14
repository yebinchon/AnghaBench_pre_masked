
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc92031_priv {int rx_ring_dma_addr; int rx_ring; int tx_bufs_dma_addr; int tx_bufs; int lock; struct pci_dev* pdev; } ;
struct pci_dev {int irq; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 struct sc92031_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_2)
{
 struct sc92031_priv *VAR_3 = FUNC_3(VAR_2);
 struct pci_dev *VAR_4 = VAR_3->pdev;

 FUNC_4(VAR_2);


 FUNC_6(VAR_2);

 FUNC_7(&VAR_3->lock);

 FUNC_0(VAR_2);
 FUNC_1(VAR_2);

 FUNC_8(&VAR_3->lock);

 FUNC_2(VAR_4->irq, VAR_2);
 FUNC_5(VAR_4, VAR_1, VAR_3->tx_bufs,
   VAR_3->tx_bufs_dma_addr);
 FUNC_5(VAR_4, VAR_0, VAR_3->rx_ring,
   VAR_3->rx_ring_dma_addr);

 return 0;
}
