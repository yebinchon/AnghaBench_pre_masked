
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dev; } ;
struct axienet_local {int options; scalar_t__ eth_irq; scalar_t__ tx_irq; scalar_t__ rx_irq; int dma_err_tasklet; TYPE_1__* mii_bus; int phylink; } ;
struct TYPE_2__ {int mdio_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct axienet_local*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct axienet_local*,int ) ;
 int FUNC_3 (struct axienet_local*,int ,int) ;
 int FUNC_4 (struct axienet_local*,int ,int ) ;
 int FUNC_5 (struct axienet_local*) ;
 int FUNC_6 (struct axienet_local*) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (scalar_t__,struct net_device*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct axienet_local* FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_10)
{
 u32 VAR_11, VAR_12;
 int VAR_13;
 struct axienet_local *VAR_14 = FUNC_13(VAR_10);

 FUNC_8(&VAR_10->dev, "axienet_close()\n");

 FUNC_15(VAR_14->phylink);
 FUNC_14(VAR_14->phylink);

 FUNC_7(VAR_10, VAR_14->options &
      ~(VAR_2 | VAR_1));

 VAR_11 = FUNC_2(VAR_14, VAR_5);
 VAR_11 &= ~(VAR_3 | VAR_4);
 FUNC_3(VAR_14, VAR_5, VAR_11);

 VAR_11 = FUNC_2(VAR_14, VAR_8);
 VAR_11 &= ~(VAR_3 | VAR_4);
 FUNC_3(VAR_14, VAR_8, VAR_11);

 FUNC_4(VAR_14, VAR_0, 0);


 VAR_12 = FUNC_2(VAR_14, VAR_6);
 for (VAR_13 = 0; !(VAR_12 & VAR_7) && VAR_13 < 5; ++VAR_13) {
  FUNC_10(20);
  VAR_12 = FUNC_2(VAR_14, VAR_6);
 }

 VAR_12 = FUNC_2(VAR_14, VAR_9);
 for (VAR_13 = 0; !(VAR_12 & VAR_7) && VAR_13 < 5; ++VAR_13) {
  FUNC_10(20);
  VAR_12 = FUNC_2(VAR_14, VAR_9);
 }


 FUNC_11(&VAR_14->mii_bus->mdio_lock);
 FUNC_5(VAR_14);
 FUNC_0(VAR_14);
 FUNC_6(VAR_14);
 FUNC_12(&VAR_14->mii_bus->mdio_lock);

 FUNC_16(&VAR_14->dma_err_tasklet);

 if (VAR_14->eth_irq > 0)
  FUNC_9(VAR_14->eth_irq, VAR_10);
 FUNC_9(VAR_14->tx_irq, VAR_10);
 FUNC_9(VAR_14->rx_irq, VAR_10);

 FUNC_1(VAR_10);
 return 0;
}
