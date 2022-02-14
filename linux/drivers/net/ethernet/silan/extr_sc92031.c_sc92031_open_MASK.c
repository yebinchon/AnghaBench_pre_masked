
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc92031_priv {int rx_ring_dma_addr; void* rx_ring; int tx_bufs_dma_addr; void* tx_bufs; int lock; scalar_t__ pm_config; scalar_t__ tx_tail; scalar_t__ tx_head; struct pci_dev* pdev; } ;
struct pci_dev {int irq; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct sc92031_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 void* FUNC_5 (struct pci_dev*,int ,int *) ;
 int FUNC_6 (struct pci_dev*,int ,void*,int ) ;
 int FUNC_7 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_5)
{
 int VAR_6;
 struct sc92031_priv *VAR_7 = FUNC_1(VAR_5);
 struct pci_dev *VAR_8 = VAR_7->pdev;

 VAR_7->rx_ring = FUNC_5(VAR_8, VAR_2,
   &VAR_7->rx_ring_dma_addr);
 if (FUNC_11(!VAR_7->rx_ring)) {
  VAR_6 = -VAR_0;
  goto out_alloc_rx_ring;
 }

 VAR_7->tx_bufs = FUNC_5(VAR_8, VAR_3,
   &VAR_7->tx_bufs_dma_addr);
 if (FUNC_11(!VAR_7->tx_bufs)) {
  VAR_6 = -VAR_0;
  goto out_alloc_tx_bufs;
 }
 VAR_7->tx_head = VAR_7->tx_tail = 0;

 VAR_6 = FUNC_7(VAR_8->irq, VAR_4,
   VAR_1, VAR_5->name, VAR_5);
 if (FUNC_11(VAR_6 < 0))
  goto out_request_irq;

 VAR_7->pm_config = 0;


 FUNC_9(&VAR_7->lock);

 FUNC_0(VAR_5);

 FUNC_10(&VAR_7->lock);
 FUNC_8(VAR_5);

 if (FUNC_2(VAR_5))
  FUNC_3(VAR_5);
 else
  FUNC_4(VAR_5);

 return 0;

out_request_irq:
 FUNC_6(VAR_8, VAR_3, VAR_7->tx_bufs,
   VAR_7->tx_bufs_dma_addr);
out_alloc_tx_bufs:
 FUNC_6(VAR_8, VAR_2, VAR_7->rx_ring,
   VAR_7->rx_ring_dma_addr);
out_alloc_rx_ring:
 return VAR_6;
}
