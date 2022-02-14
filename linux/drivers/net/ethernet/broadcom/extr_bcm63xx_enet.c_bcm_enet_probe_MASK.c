
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {char* name; int id; int dev; } ;
struct net_device {scalar_t__ max_mtu; scalar_t__ min_mtu; int * ethtool_ops; int * netdev_ops; int dev_addr; int irq; int mtu; } ;
struct mii_bus {char* name; int phy_mask; int * irq; int id; int write; int read; struct bcm_enet_priv* priv; int * parent; } ;
struct bcm_enet_priv {int enet_is_sw; int phy_id; int use_external_mii; int * mac_clk; int * phy_clk; struct mii_bus* mii_bus; struct net_device* net_dev; struct platform_device* pdev; int napi; int mib_update_task; int mib_update_lock; int rx_timeout; int rx_lock; int phy_interrupt; scalar_t__ has_phy_interrupt; scalar_t__ has_phy; int tx_chan; int rx_chan; int dma_desc_shift; int dma_has_sram; int dma_chan_width; int dma_chan_int_mask; int dma_chan_en_mask; int force_speed_100; int force_duplex_full; int pause_tx; int pause_rx; int pause_auto; int tx_ring_size; int rx_ring_size; int irq_tx; int irq_rx; int irq; int * base; int dma_maxburst; } ;
struct bcm63xx_enet_platform_data {int phy_id; scalar_t__ (* mii_config ) (struct net_device*,int,int ,int ) ;int tx_chan; int rx_chan; int dma_desc_shift; int dma_has_sram; int dma_chan_width; int dma_chan_int_mask; int dma_chan_en_mask; int force_speed_100; int force_duplex_full; int pause_tx; int pause_rx; int pause_auto; int use_internal_phy; int phy_interrupt; scalar_t__ has_phy_interrupt; scalar_t__ has_phy; int mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int *,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,int *) ;
 scalar_t__ VAR_13 ;
 struct net_device* FUNC_5 (int) ;
 int FUNC_6 (struct net_device*,int ) ;
 int VAR_14 ;
 int FUNC_7 (struct bcm_enet_priv*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int * VAR_22 ;
 int VAR_23 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 struct bcm63xx_enet_platform_data* FUNC_11 (int *) ;
 void* FUNC_12 (int *,char*) ;
 int * FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct bcm_enet_priv*,int ,int ) ;
 int FUNC_15 (struct net_device*) ;
 struct mii_bus* FUNC_16 () ;
 int FUNC_17 (struct mii_bus*) ;
 int FUNC_18 (struct mii_bus*) ;
 int FUNC_19 (struct mii_bus*) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int *) ;
 struct bcm_enet_priv* FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (struct net_device*,int *,int ,int) ;
 struct resource* FUNC_25 (struct platform_device*,int ,int) ;
 int FUNC_26 (struct platform_device*,struct net_device*) ;
 int FUNC_27 (struct net_device*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ,char*,char*,int) ;
 scalar_t__ FUNC_30 (struct net_device*,int,int ,int ) ;
 int FUNC_31 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_32(struct platform_device *VAR_24)
{
 struct bcm_enet_priv *VAR_25;
 struct net_device *VAR_26;
 struct bcm63xx_enet_platform_data *VAR_27;
 struct resource *VAR_28, *VAR_29, *VAR_30;
 struct mii_bus *VAR_31;
 int VAR_32, VAR_33;

 if (!VAR_22[0])
  return -VAR_8;

 VAR_28 = FUNC_25(VAR_24, VAR_12, 0);
 VAR_29 = FUNC_25(VAR_24, VAR_12, 1);
 VAR_30 = FUNC_25(VAR_24, VAR_12, 2);
 if (!VAR_28 || !VAR_29 || !VAR_30)
  return -VAR_6;

 VAR_33 = 0;
 VAR_26 = FUNC_5(sizeof(*VAR_25));
 if (!VAR_26)
  return -VAR_7;
 VAR_25 = FUNC_22(VAR_26);

 VAR_25->enet_is_sw = 0;
 VAR_25->dma_maxburst = VAR_2;

 VAR_33 = FUNC_6(VAR_26, VAR_26->mtu);
 if (VAR_33)
  goto out;

 VAR_25->base = FUNC_13(VAR_24, 0);
 if (FUNC_2(VAR_25->base)) {
  VAR_33 = FUNC_3(VAR_25->base);
  goto out;
 }

 VAR_26->irq = VAR_25->irq = VAR_28->start;
 VAR_25->irq_rx = VAR_29->start;
 VAR_25->irq_tx = VAR_30->start;

 VAR_25->mac_clk = FUNC_12(&VAR_24->dev, "enet");
 if (FUNC_2(VAR_25->mac_clk)) {
  VAR_33 = FUNC_3(VAR_25->mac_clk);
  goto out;
 }
 VAR_33 = FUNC_9(VAR_25->mac_clk);
 if (VAR_33)
  goto out;


 VAR_25->rx_ring_size = VAR_0;
 VAR_25->tx_ring_size = VAR_1;

 VAR_27 = FUNC_11(&VAR_24->dev);
 if (VAR_27) {
  FUNC_20(VAR_26->dev_addr, VAR_27->mac_addr, VAR_9);
  VAR_25->has_phy = VAR_27->has_phy;
  VAR_25->phy_id = VAR_27->phy_id;
  VAR_25->has_phy_interrupt = VAR_27->has_phy_interrupt;
  VAR_25->phy_interrupt = VAR_27->phy_interrupt;
  VAR_25->use_external_mii = !VAR_27->use_internal_phy;
  VAR_25->pause_auto = VAR_27->pause_auto;
  VAR_25->pause_rx = VAR_27->pause_rx;
  VAR_25->pause_tx = VAR_27->pause_tx;
  VAR_25->force_duplex_full = VAR_27->force_duplex_full;
  VAR_25->force_speed_100 = VAR_27->force_speed_100;
  VAR_25->dma_chan_en_mask = VAR_27->dma_chan_en_mask;
  VAR_25->dma_chan_int_mask = VAR_27->dma_chan_int_mask;
  VAR_25->dma_chan_width = VAR_27->dma_chan_width;
  VAR_25->dma_has_sram = VAR_27->dma_has_sram;
  VAR_25->dma_desc_shift = VAR_27->dma_desc_shift;
  VAR_25->rx_chan = VAR_27->rx_chan;
  VAR_25->tx_chan = VAR_27->tx_chan;
 }

 if (VAR_25->has_phy && !VAR_25->use_external_mii) {

  VAR_25->phy_clk = FUNC_12(&VAR_24->dev, "ephy");
  if (FUNC_2(VAR_25->phy_clk)) {
   VAR_33 = FUNC_3(VAR_25->phy_clk);
   VAR_25->phy_clk = ((void*)0);
   goto out_disable_clk_mac;
  }
  VAR_33 = FUNC_9(VAR_25->phy_clk);
  if (VAR_33)
   goto out_disable_clk_mac;
 }


 FUNC_7(VAR_25);


 if (VAR_25->has_phy) {

  VAR_25->mii_bus = FUNC_16();
  if (!VAR_25->mii_bus) {
   VAR_33 = -VAR_7;
   goto out_uninit_hw;
  }

  VAR_31 = VAR_25->mii_bus;
  VAR_31->name = "bcm63xx_enet MII bus";
  VAR_31->parent = &VAR_24->dev;
  VAR_31->priv = VAR_25;
  VAR_31->read = VAR_16;
  VAR_31->write = VAR_18;
  FUNC_29(VAR_31->id, "%s-%d", VAR_24->name, VAR_24->id);




  VAR_31->phy_mask = ~(1 << VAR_25->phy_id);

  if (VAR_25->has_phy_interrupt)
   VAR_31->irq[VAR_25->phy_id] = VAR_25->phy_interrupt;

  VAR_33 = FUNC_18(VAR_31);
  if (VAR_33) {
   FUNC_10(&VAR_24->dev, "unable to register mdio bus\n");
   goto out_free_mdio;
  }
 } else {


  if (VAR_27 && VAR_27->mii_config &&
      VAR_27->mii_config(VAR_26, 1, VAR_15,
       VAR_17)) {
   FUNC_10(&VAR_24->dev, "unable to configure mdio bus\n");
   goto out_uninit_hw;
  }
 }

 FUNC_28(&VAR_25->rx_lock);


 FUNC_31(&VAR_25->rx_timeout, VAR_21, 0);


 FUNC_21(&VAR_25->mib_update_lock);
 FUNC_1(&VAR_25->mib_update_task, VAR_23);


 for (VAR_32 = 0; VAR_32 < VAR_4; VAR_32++)
  FUNC_14(VAR_25, 0, FUNC_0(VAR_32));


 VAR_26->netdev_ops = &VAR_19;
 FUNC_24(VAR_26, &VAR_25->napi, VAR_20, 16);

 VAR_26->ethtool_ops = &VAR_14;

 VAR_26->min_mtu = VAR_11 - VAR_10;
 VAR_26->max_mtu = VAR_3 - VAR_13;
 FUNC_4(VAR_26, &VAR_24->dev);

 VAR_33 = FUNC_27(VAR_26);
 if (VAR_33)
  goto out_unregister_mdio;

 FUNC_23(VAR_26);
 FUNC_26(VAR_24, VAR_26);
 VAR_25->pdev = VAR_24;
 VAR_25->net_dev = VAR_26;

 return 0;

out_unregister_mdio:
 if (VAR_25->mii_bus)
  FUNC_19(VAR_25->mii_bus);

out_free_mdio:
 if (VAR_25->mii_bus)
  FUNC_17(VAR_25->mii_bus);

out_uninit_hw:

 FUNC_14(VAR_25, 0, VAR_5);
 FUNC_8(VAR_25->phy_clk);

out_disable_clk_mac:
 FUNC_8(VAR_25->mac_clk);
out:
 FUNC_15(VAR_26);
 return VAR_33;
}
