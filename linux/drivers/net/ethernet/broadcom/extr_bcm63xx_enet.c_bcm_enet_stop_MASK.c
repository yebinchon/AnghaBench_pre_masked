
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int phydev; int irq; } ;
struct device {int dummy; } ;
struct bcm_enet_priv {int rx_ring_size; scalar_t__ has_phy; int irq_rx; int irq_tx; int tx_desc_dma; struct bcm_enet_desc* tx_desc_cpu; int tx_desc_alloc_size; int rx_desc_dma; struct bcm_enet_desc* rx_desc_cpu; int rx_desc_alloc_size; int * tx_skb; int * rx_skb; int rx_skb_size; int rx_chan; int tx_chan; int mib_update_task; int rx_timeout; int napi; TYPE_1__* pdev; } ;
struct bcm_enet_desc {int address; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm_enet_priv*,int ) ;
 int FUNC_1 (struct bcm_enet_priv*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*,int ,struct bcm_enet_desc*,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;
 int FUNC_7 (struct bcm_enet_priv*,int ,int ,int ) ;
 int FUNC_8 (struct bcm_enet_priv*,int ,int ) ;
 int FUNC_9 (int ,struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 struct bcm_enet_priv* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_3)
{
 struct bcm_enet_priv *VAR_4;
 struct device *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_13(VAR_3);
 VAR_5 = &VAR_4->pdev->dev;

 FUNC_14(VAR_3);
 FUNC_12(&VAR_4->napi);
 if (VAR_4->has_phy)
  FUNC_16(VAR_3->phydev);
 FUNC_4(&VAR_4->rx_timeout);


 FUNC_8(VAR_4, 0, VAR_2);
 FUNC_7(VAR_4, 0, VAR_1, VAR_4->rx_chan);
 FUNC_7(VAR_4, 0, VAR_1, VAR_4->tx_chan);


 FUNC_3(&VAR_4->mib_update_task);


 FUNC_0(VAR_4, VAR_4->tx_chan);
 FUNC_0(VAR_4, VAR_4->rx_chan);
 FUNC_1(VAR_4);


 FUNC_2(VAR_3, 1);


 for (VAR_6 = 0; VAR_6 < VAR_4->rx_ring_size; VAR_6++) {
  struct bcm_enet_desc *VAR_7;

  if (!VAR_4->rx_skb[VAR_6])
   continue;

  VAR_7 = &VAR_4->rx_desc_cpu[VAR_6];
  FUNC_6(VAR_5, VAR_7->address, VAR_4->rx_skb_size,
     VAR_0);
  FUNC_11(VAR_4->rx_skb[VAR_6]);
 }


 FUNC_10(VAR_4->rx_skb);
 FUNC_10(VAR_4->tx_skb);
 FUNC_5(VAR_5, VAR_4->rx_desc_alloc_size,
     VAR_4->rx_desc_cpu, VAR_4->rx_desc_dma);
 FUNC_5(VAR_5, VAR_4->tx_desc_alloc_size,
     VAR_4->tx_desc_cpu, VAR_4->tx_desc_dma);
 FUNC_9(VAR_4->irq_tx, VAR_3);
 FUNC_9(VAR_4->irq_rx, VAR_3);
 FUNC_9(VAR_3->irq, VAR_3);


 if (VAR_4->has_phy)
  FUNC_15(VAR_3->phydev);

 return 0;
}
