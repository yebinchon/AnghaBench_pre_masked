
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; int dev; } ;
struct axienet_local {scalar_t__ tx_irq; scalar_t__ rx_irq; scalar_t__ eth_irq; TYPE_2__* dev; int dma_err_tasklet; int phylink; TYPE_1__* mii_bus; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {int mdio_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct axienet_local*) ;
 int FUNC_2 (struct axienet_local*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (scalar_t__,struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct axienet_local* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__,int ,int ,int ,struct net_device*) ;
 int FUNC_14 (int *,int ,unsigned long) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_5)
{
 int VAR_6;
 struct axienet_local *VAR_7 = FUNC_8(VAR_5);

 FUNC_3(&VAR_5->dev, "axienet_open()\n");







 FUNC_6(&VAR_7->mii_bus->mdio_lock);
 FUNC_1(VAR_7);
 FUNC_0(VAR_5);
 VAR_6 = FUNC_2(VAR_7);
 FUNC_7(&VAR_7->mii_bus->mdio_lock);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_10(VAR_7->phylink, VAR_7->dev->of_node, 0);
 if (VAR_6) {
  FUNC_4(VAR_7->dev, "phylink_of_phy_connect() failed: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_11(VAR_7->phylink);


 FUNC_14(&VAR_7->dma_err_tasklet, VAR_1,
       (unsigned long) VAR_7);


 VAR_6 = FUNC_13(VAR_7->tx_irq, VAR_4, VAR_0,
     VAR_5->name, VAR_5);
 if (VAR_6)
  goto err_tx_irq;

 VAR_6 = FUNC_13(VAR_7->rx_irq, VAR_3, VAR_0,
     VAR_5->name, VAR_5);
 if (VAR_6)
  goto err_rx_irq;

 if (VAR_7->eth_irq > 0) {
  VAR_6 = FUNC_13(VAR_7->eth_irq, VAR_2, VAR_0,
      VAR_5->name, VAR_5);
  if (VAR_6)
   goto err_eth_irq;
 }

 return 0;

err_eth_irq:
 FUNC_5(VAR_7->rx_irq, VAR_5);
err_rx_irq:
 FUNC_5(VAR_7->tx_irq, VAR_5);
err_tx_irq:
 FUNC_12(VAR_7->phylink);
 FUNC_9(VAR_7->phylink);
 FUNC_15(&VAR_7->dma_err_tasklet);
 FUNC_4(VAR_7->dev, "request_irq() failed\n");
 return VAR_6;
}
