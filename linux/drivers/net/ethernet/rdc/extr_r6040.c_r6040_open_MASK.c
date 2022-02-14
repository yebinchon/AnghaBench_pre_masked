
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r6040_private {int rx_ring_dma; void* rx_ring; int pdev; int tx_ring_dma; void* tx_ring; int napi; } ;
struct net_device {int irq; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 struct r6040_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 void* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,void*,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5)
{
 struct r6040_private *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;


 VAR_7 = FUNC_8(VAR_5->irq, VAR_4,
  VAR_1, VAR_5->name, VAR_5);
 if (VAR_7)
  goto out;


 FUNC_6(VAR_5);


 VAR_6->rx_ring =
  FUNC_4(VAR_6->pdev, VAR_2, &VAR_6->rx_ring_dma);
 if (!VAR_6->rx_ring) {
  VAR_7 = -VAR_0;
  goto err_free_irq;
 }

 VAR_6->tx_ring =
  FUNC_4(VAR_6->pdev, VAR_3, &VAR_6->tx_ring_dma);
 if (!VAR_6->tx_ring) {
  VAR_7 = -VAR_0;
  goto err_free_rx_ring;
 }

 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7)
  goto err_free_tx_ring;

 FUNC_1(&VAR_6->napi);
 FUNC_3(VAR_5);

 return 0;

err_free_tx_ring:
 FUNC_5(VAR_6->pdev, VAR_3, VAR_6->tx_ring,
   VAR_6->tx_ring_dma);
err_free_rx_ring:
 FUNC_5(VAR_6->pdev, VAR_2, VAR_6->rx_ring,
   VAR_6->rx_ring_dma);
err_free_irq:
 FUNC_0(VAR_5->irq, VAR_5);
out:
 return VAR_7;
}
