
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct net_device {int * ethtool_ops; int * netdev_ops; int mtu; int dev_addr; } ;
struct bcm_enet_priv {int enet_is_sw; int irq_rx; int irq_tx; int tx_chan; int mac_clk; struct net_device* net_dev; struct platform_device* pdev; int enetsw_mdio_lock; int napi; int rx_timeout; int rx_lock; scalar_t__ rx_chan; int base; int dma_chan_width; int dma_chan_int_mask; int dma_chan_en_mask; int dma_has_sram; int num_ports; int used_ports; int dma_maxburst; int tx_ring_size; int rx_ring_size; } ;
struct bcm63xx_enetsw_platform_data {int dma_chan_width; int dma_chan_int_mask; int dma_chan_en_mask; int dma_has_sram; int num_ports; int used_ports; int mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct bcm63xx_enetsw_platform_data* FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,struct resource*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int ,int) ;
 struct bcm_enet_priv* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*,int *,int ,int) ;
 int FUNC_15 (struct platform_device*,int) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct net_device*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_13)
{
 struct bcm_enet_priv *VAR_14;
 struct net_device *VAR_15;
 struct bcm63xx_enetsw_platform_data *VAR_16;
 struct resource *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 if (!VAR_10[0])
  return -VAR_5;

 VAR_17 = FUNC_16(VAR_13, VAR_7, 0);
 VAR_19 = FUNC_15(VAR_13, 0);
 VAR_20 = FUNC_15(VAR_13, 1);
 if (!VAR_17 || VAR_19 < 0)
  return -VAR_3;

 VAR_18 = 0;
 VAR_15 = FUNC_3(sizeof(*VAR_14));
 if (!VAR_15)
  return -VAR_4;
 VAR_14 = FUNC_12(VAR_15);


 VAR_14->enet_is_sw = 1;
 VAR_14->irq_rx = VAR_19;
 VAR_14->irq_tx = VAR_20;
 VAR_14->rx_ring_size = VAR_1;
 VAR_14->tx_ring_size = VAR_2;
 VAR_14->dma_maxburst = VAR_0;

 VAR_16 = FUNC_7(&VAR_13->dev);
 if (VAR_16) {
  FUNC_11(VAR_15->dev_addr, VAR_16->mac_addr, VAR_6);
  FUNC_11(VAR_14->used_ports, VAR_16->used_ports,
         sizeof(VAR_16->used_ports));
  VAR_14->num_ports = VAR_16->num_ports;
  VAR_14->dma_has_sram = VAR_16->dma_has_sram;
  VAR_14->dma_chan_en_mask = VAR_16->dma_chan_en_mask;
  VAR_14->dma_chan_int_mask = VAR_16->dma_chan_int_mask;
  VAR_14->dma_chan_width = VAR_16->dma_chan_width;
 }

 VAR_18 = FUNC_4(VAR_15, VAR_15->mtu);
 if (VAR_18)
  goto out;

 VAR_14->base = FUNC_9(&VAR_13->dev, VAR_17);
 if (FUNC_0(VAR_14->base)) {
  VAR_18 = FUNC_1(VAR_14->base);
  goto out;
 }

 VAR_14->mac_clk = FUNC_8(&VAR_13->dev, "enetsw");
 if (FUNC_0(VAR_14->mac_clk)) {
  VAR_18 = FUNC_1(VAR_14->mac_clk);
  goto out;
 }
 VAR_18 = FUNC_6(VAR_14->mac_clk);
 if (VAR_18)
  goto out;

 VAR_14->rx_chan = 0;
 VAR_14->tx_chan = 1;
 FUNC_19(&VAR_14->rx_lock);


 FUNC_20(&VAR_14->rx_timeout, VAR_9, 0);


 VAR_15->netdev_ops = &VAR_12;
 FUNC_14(VAR_15, &VAR_14->napi, VAR_8, 16);
 VAR_15->ethtool_ops = &VAR_11;
 FUNC_2(VAR_15, &VAR_13->dev);

 FUNC_19(&VAR_14->enetsw_mdio_lock);

 VAR_18 = FUNC_18(VAR_15);
 if (VAR_18)
  goto out_disable_clk;

 FUNC_13(VAR_15);
 FUNC_17(VAR_13, VAR_15);
 VAR_14->pdev = VAR_13;
 VAR_14->net_dev = VAR_15;

 return 0;

out_disable_clk:
 FUNC_5(VAR_14->mac_clk);
out:
 FUNC_10(VAR_15);
 return VAR_18;
}
