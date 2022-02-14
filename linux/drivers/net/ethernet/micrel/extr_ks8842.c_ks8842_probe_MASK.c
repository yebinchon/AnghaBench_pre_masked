
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct resource {int flags; int start; } ;
struct TYPE_7__ {struct TYPE_7__* parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct net_device {unsigned int addr_len; int name; int dev_addr; int * ethtool_ops; int * netdev_ops; } ;
struct ks8842_platform_data {int tx_dma_channel; int rx_dma_channel; scalar_t__* macaddr; } ;
struct TYPE_6__ {int channel; } ;
struct TYPE_5__ {int channel; } ;
struct ks8842_adapter {int conf_flags; int irq; int hw_addr; int lock; int tasklet; TYPE_2__ dma_tx; TYPE_1__ dma_rx; TYPE_3__* dev; int timeout_work; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,TYPE_3__*) ;
 struct net_device* FUNC_2 (int) ;
 struct ks8842_platform_data* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct ks8842_adapter*,int,int ) ;
 int FUNC_10 (struct ks8842_adapter*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int ,scalar_t__*,unsigned int) ;
 struct ks8842_adapter* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct net_device*) ;
 int FUNC_16 (char*,int,int,int) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (struct resource*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_9)
{
 int VAR_10 = -VAR_1;
 struct resource *VAR_11;
 struct net_device *VAR_12;
 struct ks8842_adapter *VAR_13;
 struct ks8842_platform_data *VAR_14 = FUNC_3(&VAR_9->dev);
 u16 VAR_15;
 unsigned VAR_16;

 VAR_11 = FUNC_14(VAR_9, VAR_2, 0);
 if (!FUNC_19(VAR_11->start, FUNC_20(VAR_11), VAR_0))
  goto err_mem_region;

 VAR_12 = FUNC_2(sizeof(struct ks8842_adapter));
 if (!VAR_12)
  goto err_alloc_etherdev;

 FUNC_1(VAR_12, &VAR_9->dev);

 VAR_13 = FUNC_12(VAR_12);
 VAR_13->netdev = VAR_12;
 FUNC_0(&VAR_13->timeout_work, VAR_8);
 VAR_13->hw_addr = FUNC_6(VAR_11->start, FUNC_20(VAR_11));
 VAR_13->conf_flags = VAR_11->flags;

 if (!VAR_13->hw_addr)
  goto err_ioremap;

 VAR_13->irq = FUNC_13(VAR_9, 0);
 if (VAR_13->irq < 0) {
  VAR_10 = VAR_13->irq;
  goto err_get_irq;
 }

 VAR_13->dev = (VAR_9->dev.parent) ? VAR_9->dev.parent : &VAR_9->dev;


 if (!(VAR_13->conf_flags & VAR_3) && VAR_14 &&
  (VAR_14->tx_dma_channel != -1) &&
  (VAR_14->rx_dma_channel != -1)) {
  VAR_13->dma_rx.channel = VAR_14->rx_dma_channel;
  VAR_13->dma_tx.channel = VAR_14->tx_dma_channel;
 } else {
  VAR_13->dma_rx.channel = -1;
  VAR_13->dma_tx.channel = -1;
 }

 FUNC_23(&VAR_13->tasklet, VAR_7, (unsigned long)VAR_12);
 FUNC_21(&VAR_13->lock);

 VAR_12->netdev_ops = &VAR_6;
 VAR_12->ethtool_ops = &VAR_5;


 VAR_16 = VAR_12->addr_len;
 if (VAR_14) {
  for (VAR_16 = 0; VAR_16 < VAR_12->addr_len; VAR_16++)
   if (VAR_14->macaddr[VAR_16] != 0)
    break;

  if (VAR_16 < VAR_12->addr_len)

   FUNC_11(VAR_12->dev_addr, VAR_14->macaddr,
    VAR_12->addr_len);
 }

 if (VAR_16 == VAR_12->addr_len) {
  FUNC_10(VAR_13, VAR_12->dev_addr);

  if (!FUNC_8(VAR_12->dev_addr))
   FUNC_4(VAR_12);
 }

 VAR_15 = FUNC_9(VAR_13, 32, VAR_4);

 FUNC_22(VAR_12->name, "eth%d");
 VAR_10 = FUNC_17(VAR_12);
 if (VAR_10)
  goto err_register;

 FUNC_15(VAR_9, VAR_12);

 FUNC_16("Found chip, family: 0x%x, id: 0x%x, rev: 0x%x\n",
  (VAR_15 >> 8) & 0xff, (VAR_15 >> 4) & 0xf, (VAR_15 >> 1) & 0x7);

 return 0;

err_register:
err_get_irq:
 FUNC_7(VAR_13->hw_addr);
err_ioremap:
 FUNC_5(VAR_12);
err_alloc_etherdev:
 FUNC_18(VAR_11->start, FUNC_20(VAR_11));
err_mem_region:
 return VAR_10;
}
