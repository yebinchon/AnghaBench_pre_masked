
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {int mb_last; int mb_first; int mailbox_read; } ;
struct TYPE_11__ {int freq; } ;
struct TYPE_12__ {TYPE_1__ clock; int ctrlmode_supported; int do_get_berr_counter; int do_set_mode; int * bittiming_const; } ;
struct ti_hecc_priv {struct regulator* clk; TYPE_8__ offload; struct regulator* base; TYPE_2__ can; int mbx_lock; int use_hecc1int; struct regulator* reg_xceiver; struct net_device* ndev; struct regulator* mbx; struct regulator* hecc_ram; } ;
struct resource {scalar_t__ start; } ;
struct regulator {int dummy; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct net_device {scalar_t__ irq; int * netdev_ops; int flags; } ;
struct device_node {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 int FUNC_3 (struct net_device*,TYPE_3__*) ;
 struct net_device* FUNC_4 (int,int ) ;
 int FUNC_5 (struct net_device*,TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*) ;
 struct regulator* FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (struct regulator*) ;
 int FUNC_9 (struct regulator*) ;
 int FUNC_10 (struct regulator*) ;
 int FUNC_11 (TYPE_3__*,char*) ;
 int FUNC_12 (TYPE_3__*,char*,struct regulator*,int ) ;
 int FUNC_13 (struct net_device*) ;
 void* FUNC_14 (TYPE_3__*,struct resource*) ;
 struct regulator* FUNC_15 (TYPE_3__*,char*) ;
 int FUNC_16 (struct net_device*) ;
 struct ti_hecc_priv* FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct device_node*,char*) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,char*) ;
 int FUNC_21 (struct platform_device*,struct net_device*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_17)
{
 struct net_device *VAR_18 = (struct net_device *)0;
 struct ti_hecc_priv *VAR_19;
 struct device_node *VAR_20 = VAR_17->dev.of_node;
 struct resource *VAR_21, *VAR_22;
 struct regulator *VAR_23;
 int VAR_24 = -VAR_3;

 if (!FUNC_0(VAR_1) || !VAR_20)
  return -VAR_2;

 VAR_23 = FUNC_15(&VAR_17->dev, "xceiver");
 if (FUNC_2(VAR_23) == -VAR_5)
  return -VAR_5;
 else if (FUNC_1(VAR_23))
  VAR_23 = ((void*)0);

 VAR_18 = FUNC_4(sizeof(struct ti_hecc_priv), VAR_6);
 if (!VAR_18) {
  FUNC_11(&VAR_17->dev, "alloc_candev failed\n");
  return -VAR_4;
 }
 VAR_19 = FUNC_17(VAR_18);


 VAR_21 = FUNC_20(VAR_17, VAR_11, "hecc");
 if (!VAR_21) {
  FUNC_11(&VAR_17->dev, "can't get IORESOURCE_MEM hecc\n");
  return -VAR_2;
 }

 VAR_19->base = FUNC_14(&VAR_17->dev, VAR_21);
 if (FUNC_1(VAR_19->base)) {
  FUNC_11(&VAR_17->dev, "hecc ioremap failed\n");
  return FUNC_2(VAR_19->base);
 }


 VAR_21 = FUNC_20(VAR_17, VAR_11, "hecc-ram");
 if (!VAR_21) {
  FUNC_11(&VAR_17->dev, "can't get IORESOURCE_MEM hecc-ram\n");
  return -VAR_2;
 }

 VAR_19->hecc_ram = FUNC_14(&VAR_17->dev, VAR_21);
 if (FUNC_1(VAR_19->hecc_ram)) {
  FUNC_11(&VAR_17->dev, "hecc-ram ioremap failed\n");
  return FUNC_2(VAR_19->hecc_ram);
 }


 VAR_21 = FUNC_20(VAR_17, VAR_11, "mbx");
 if (!VAR_21) {
  FUNC_11(&VAR_17->dev, "can't get IORESOURCE_MEM mbx\n");
  return -VAR_2;
 }

 VAR_19->mbx = FUNC_14(&VAR_17->dev, VAR_21);
 if (FUNC_1(VAR_19->mbx)) {
  FUNC_11(&VAR_17->dev, "mbx ioremap failed\n");
  return FUNC_2(VAR_19->mbx);
 }

 VAR_22 = FUNC_19(VAR_17, VAR_10, 0);
 if (!VAR_22) {
  FUNC_11(&VAR_17->dev, "No irq resource\n");
  goto probe_exit;
 }

 VAR_19->ndev = VAR_18;
 VAR_19->reg_xceiver = VAR_23;
 VAR_19->use_hecc1int = FUNC_18(VAR_20, "ti,use-hecc1int");

 VAR_19->can.bittiming_const = &VAR_12;
 VAR_19->can.do_set_mode = VAR_13;
 VAR_19->can.do_get_berr_counter = VAR_14;
 VAR_19->can.ctrlmode_supported = VAR_0;

 FUNC_23(&VAR_19->mbx_lock);
 VAR_18->irq = VAR_22->start;
 VAR_18->flags |= VAR_9;
 FUNC_21(VAR_17, VAR_18);
 FUNC_3(VAR_18, &VAR_17->dev);
 VAR_18->netdev_ops = &VAR_16;

 VAR_19->clk = FUNC_7(&VAR_17->dev, "hecc_ck");
 if (FUNC_1(VAR_19->clk)) {
  FUNC_11(&VAR_17->dev, "No clock available\n");
  VAR_24 = FUNC_2(VAR_19->clk);
  VAR_19->clk = ((void*)0);
  goto probe_exit_candev;
 }
 VAR_19->can.clock.freq = FUNC_8(VAR_19->clk);

 VAR_24 = FUNC_9(VAR_19->clk);
 if (VAR_24) {
  FUNC_11(&VAR_17->dev, "clk_prepare_enable() failed\n");
  goto probe_exit_clk;
 }

 VAR_19->offload.mailbox_read = VAR_15;
 VAR_19->offload.mb_first = VAR_7;
 VAR_19->offload.mb_last = VAR_8;
 VAR_24 = FUNC_5(VAR_18, &VAR_19->offload);
 if (VAR_24) {
  FUNC_11(&VAR_17->dev, "can_rx_offload_add_timestamp() failed\n");
  goto probe_exit_clk;
 }

 VAR_24 = FUNC_22(VAR_18);
 if (VAR_24) {
  FUNC_11(&VAR_17->dev, "register_candev() failed\n");
  goto probe_exit_offload;
 }

 FUNC_13(VAR_18);

 FUNC_12(&VAR_17->dev, "device registered (reg_base=%p, irq=%u)\n",
   VAR_19->base, (u32)VAR_18->irq);

 return 0;

probe_exit_offload:
 FUNC_6(&VAR_19->offload);
probe_exit_clk:
 FUNC_10(VAR_19->clk);
probe_exit_candev:
 FUNC_16(VAR_18);
probe_exit:
 return VAR_24;
}
