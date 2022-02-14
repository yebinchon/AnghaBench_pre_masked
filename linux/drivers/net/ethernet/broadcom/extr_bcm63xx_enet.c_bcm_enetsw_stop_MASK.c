
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct bcm_enet_priv {int rx_ring_size; int irq_tx; int irq_rx; int tx_desc_dma; struct bcm_enet_desc* tx_desc_cpu; int tx_desc_alloc_size; int rx_desc_dma; struct bcm_enet_desc* rx_desc_cpu; int rx_desc_alloc_size; int * tx_skb; int * rx_skb; int rx_skb_size; int rx_chan; int tx_chan; int rx_timeout; int napi; int swphy_poll; TYPE_1__* pdev; } ;
struct bcm_enet_desc {int address; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_enet_priv*,int ) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,int ,struct bcm_enet_desc*,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 int FUNC_5 (struct bcm_enet_priv*,int ,int ,int ) ;
 int FUNC_6 (int,struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 struct bcm_enet_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_2)
{
 struct bcm_enet_priv *VAR_3;
 struct device *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_10(VAR_2);
 VAR_4 = &VAR_3->pdev->dev;

 FUNC_2(&VAR_3->swphy_poll);
 FUNC_11(VAR_2);
 FUNC_9(&VAR_3->napi);
 FUNC_2(&VAR_3->rx_timeout);


 FUNC_5(VAR_3, 0, VAR_1, VAR_3->rx_chan);
 FUNC_5(VAR_3, 0, VAR_1, VAR_3->tx_chan);


 FUNC_0(VAR_3, VAR_3->tx_chan);
 FUNC_0(VAR_3, VAR_3->rx_chan);


 FUNC_1(VAR_2, 1);


 for (VAR_5 = 0; VAR_5 < VAR_3->rx_ring_size; VAR_5++) {
  struct bcm_enet_desc *VAR_6;

  if (!VAR_3->rx_skb[VAR_5])
   continue;

  VAR_6 = &VAR_3->rx_desc_cpu[VAR_5];
  FUNC_4(VAR_4, VAR_6->address, VAR_3->rx_skb_size,
     VAR_0);
  FUNC_8(VAR_3->rx_skb[VAR_5]);
 }


 FUNC_7(VAR_3->rx_skb);
 FUNC_7(VAR_3->tx_skb);
 FUNC_3(VAR_4, VAR_3->rx_desc_alloc_size,
     VAR_3->rx_desc_cpu, VAR_3->rx_desc_dma);
 FUNC_3(VAR_4, VAR_3->tx_desc_alloc_size,
     VAR_3->tx_desc_cpu, VAR_3->tx_desc_dma);
 if (VAR_3->irq_tx != -1)
  FUNC_6(VAR_3->irq_tx, VAR_2);
 FUNC_6(VAR_3->irq_rx, VAR_2);

 return 0;
}
