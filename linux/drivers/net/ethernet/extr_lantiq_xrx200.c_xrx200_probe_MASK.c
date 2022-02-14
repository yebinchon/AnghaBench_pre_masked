
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ irq; } ;
struct TYPE_8__ {int napi; TYPE_2__ dma; } ;
struct TYPE_5__ {scalar_t__ irq; } ;
struct TYPE_7__ {int napi; TYPE_1__ dma; } ;
struct xrx200_priv {int const* clk; TYPE_4__ chan_tx; TYPE_3__ chan_rx; int const* pmac_reg; struct device* dev; struct net_device* net_dev; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct net_device {int dev_addr; int max_mtu; int min_mtu; int * netdev_ops; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (struct net_device*,struct device*) ;
 int VAR_13 ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (struct device*,char*) ;
 struct net_device* FUNC_6 (struct device*,int) ;
 int const* FUNC_7 (struct device*,int *) ;
 int const* FUNC_8 (struct device*,struct resource*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,int const*) ;
 struct xrx200_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,int *,int ,int) ;
 int * FUNC_13 (struct device_node*) ;
 void* FUNC_14 (struct platform_device*,char*) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct xrx200_priv*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct xrx200_priv*) ;
 int FUNC_19 (struct xrx200_priv*) ;
 int VAR_14 ;
 int FUNC_20 (struct xrx200_priv*,int ,int,int ) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_17)
{
 struct device *VAR_18 = &VAR_17->dev;
 struct device_node *VAR_19 = VAR_18->of_node;
 struct resource *VAR_20;
 struct xrx200_priv *VAR_21;
 struct net_device *VAR_22;
 const u8 *VAR_23;
 int VAR_24;


 VAR_22 = FUNC_6(VAR_18, sizeof(struct xrx200_priv));
 if (!VAR_22)
  return -VAR_1;

 VAR_21 = FUNC_11(VAR_22);
 VAR_21->net_dev = VAR_22;
 VAR_21->dev = VAR_18;

 VAR_22->netdev_ops = &VAR_14;
 FUNC_2(VAR_22, VAR_18);
 VAR_22->min_mtu = VAR_2;
 VAR_22->max_mtu = VAR_13;


 VAR_20 = FUNC_15(VAR_17, VAR_3, 0);
 if (!VAR_20) {
  FUNC_5(VAR_18, "failed to get resources\n");
  return -VAR_0;
 }

 VAR_21->pmac_reg = FUNC_8(VAR_18, VAR_20);
 if (FUNC_0(VAR_21->pmac_reg)) {
  FUNC_5(VAR_18, "failed to request and remap io ranges\n");
  return FUNC_1(VAR_21->pmac_reg);
 }

 VAR_21->chan_rx.dma.irq = FUNC_14(VAR_17, "rx");
 if (VAR_21->chan_rx.dma.irq < 0)
  return -VAR_0;
 VAR_21->chan_tx.dma.irq = FUNC_14(VAR_17, "tx");
 if (VAR_21->chan_tx.dma.irq < 0)
  return -VAR_0;


 VAR_21->clk = FUNC_7(VAR_18, ((void*)0));
 if (FUNC_0(VAR_21->clk)) {
  FUNC_5(VAR_18, "failed to get clock\n");
  return FUNC_1(VAR_21->clk);
 }

 VAR_23 = FUNC_13(VAR_19);
 if (!FUNC_0(VAR_23))
  FUNC_10(VAR_22->dev_addr, VAR_23);
 else
  FUNC_9(VAR_22);


 VAR_24 = FUNC_18(VAR_21);
 if (VAR_24)
  return VAR_24;


 VAR_24 = FUNC_4(VAR_21->clk);
 if (VAR_24)
  goto err_uninit_dma;


 FUNC_20(VAR_21, VAR_12, 0xb, VAR_11);


 FUNC_20(VAR_21, 0,
    VAR_9 | VAR_7 | VAR_10 |
    VAR_6 | VAR_5 | VAR_8,
    VAR_4);


 FUNC_12(VAR_22, &VAR_21->chan_rx.napi, VAR_15, 32);
 FUNC_12(VAR_22, &VAR_21->chan_tx.napi, VAR_16, 32);

 FUNC_16(VAR_17, VAR_21);

 VAR_24 = FUNC_17(VAR_22);
 if (VAR_24)
  goto err_unprepare_clk;

 return 0;

err_unprepare_clk:
 FUNC_3(VAR_21->clk);

err_uninit_dma:
 FUNC_19(VAR_21);

 return VAR_24;
}
