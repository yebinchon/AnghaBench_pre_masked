
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct net_device {unsigned long base_addr; int irq; int dev_addr; int name; int * ethtool_ops; int watchdog_timeo; int * netdev_ops; } ;
struct emac_board_info {char const* clk; int emacrx_completed_flag; TYPE_1__* dev; scalar_t__ membase; void* phy_node; int lock; int msg_enable; struct platform_device* pdev; struct net_device* ndev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct net_device*,TYPE_1__*) ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*,char*,...) ;
 int FUNC_7 (TYPE_1__*,char*,int ,scalar_t__,int,int ) ;
 int FUNC_8 (TYPE_1__*,char*,int ) ;
 char const* FUNC_9 (TYPE_1__*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct emac_board_info*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,char const*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct device_node*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct net_device*,char*) ;
 struct emac_board_info* FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct net_device*) ;
 int FUNC_22 (int ,int ) ;
 char* FUNC_23 (struct device_node*) ;
 scalar_t__ FUNC_24 (struct device_node*,int ) ;
 void* FUNC_25 (struct device_node*,char*,int ) ;
 int FUNC_26 (struct platform_device*,struct net_device*) ;
 int FUNC_27 (struct net_device*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (TYPE_1__*) ;
 int FUNC_30 (TYPE_1__*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_31(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct emac_board_info *VAR_10;
 struct net_device *VAR_11;
 int VAR_12 = 0;
 const char *VAR_13;

 VAR_11 = FUNC_3(sizeof(struct emac_board_info));
 if (!VAR_11) {
  FUNC_6(&VAR_8->dev, "could not allocate device.\n");
  return -VAR_2;
 }

 FUNC_2(VAR_11, &VAR_8->dev);

 VAR_10 = FUNC_20(VAR_11);

 VAR_10->dev = &VAR_8->dev;
 VAR_10->ndev = VAR_11;
 VAR_10->pdev = VAR_8;
 VAR_10->msg_enable = FUNC_22(VAR_4, VAR_0);

 FUNC_28(&VAR_10->lock);

 VAR_10->membase = FUNC_24(VAR_9, 0);
 if (!VAR_10->membase) {
  FUNC_6(&VAR_8->dev, "failed to remap registers\n");
  VAR_12 = -VAR_2;
  goto out;
 }


 VAR_11->base_addr = (unsigned long)VAR_10->membase;
 VAR_11->irq = FUNC_16(VAR_9, 0);
 if (VAR_11->irq == -VAR_3) {
  FUNC_19(VAR_11, "No irq resource\n");
  VAR_12 = VAR_11->irq;
  goto out_iounmap;
 }

 VAR_10->clk = FUNC_9(&VAR_8->dev, ((void*)0));
 if (FUNC_0(VAR_10->clk)) {
  VAR_12 = FUNC_1(VAR_10->clk);
  goto out_iounmap;
 }

 VAR_12 = FUNC_5(VAR_10->clk);
 if (VAR_12) {
  FUNC_6(&VAR_8->dev, "Error couldn't enable clock (%d)\n", VAR_12);
  goto out_iounmap;
 }

 VAR_12 = FUNC_29(&VAR_8->dev);
 if (VAR_12) {
  FUNC_6(&VAR_8->dev, "Error couldn't map SRAM to device\n");
  goto out_clk_disable_unprepare;
 }

 VAR_10->phy_node = FUNC_25(VAR_9, "phy-handle", 0);
 if (!VAR_10->phy_node)
  VAR_10->phy_node = FUNC_25(VAR_9, "phy", 0);
 if (!VAR_10->phy_node) {
  FUNC_6(&VAR_8->dev, "no associated PHY\n");
  VAR_12 = -VAR_1;
  goto out_release_sram;
 }


 VAR_13 = FUNC_23(VAR_9);
 if (!FUNC_0(VAR_13))
  FUNC_13(VAR_11->dev_addr, VAR_13);


 if (!FUNC_17(VAR_11->dev_addr)) {
  FUNC_12(VAR_11);
  FUNC_8(&VAR_8->dev, "using random MAC address %pM\n",
    VAR_11->dev_addr);
 }

 VAR_10->emacrx_completed_flag = 1;
 FUNC_10(VAR_11);
 FUNC_11(VAR_10);

 VAR_11->netdev_ops = &VAR_6;
 VAR_11->watchdog_timeo = FUNC_18(VAR_7);
 VAR_11->ethtool_ops = &VAR_5;

 FUNC_26(VAR_8, VAR_11);


 FUNC_21(VAR_11);

 VAR_12 = FUNC_27(VAR_11);
 if (VAR_12) {
  FUNC_6(&VAR_8->dev, "Registering netdev failed!\n");
  VAR_12 = -VAR_1;
  goto out_release_sram;
 }

 FUNC_7(&VAR_8->dev, "%s: at %p, IRQ %d MAC: %pM\n",
   VAR_11->name, VAR_10->membase, VAR_11->irq, VAR_11->dev_addr);

 return 0;

out_release_sram:
 FUNC_30(&VAR_8->dev);
out_clk_disable_unprepare:
 FUNC_4(VAR_10->clk);
out_iounmap:
 FUNC_15(VAR_10->membase);
out:
 FUNC_6(VAR_10->dev, "not found (%d).\n", VAR_12);

 FUNC_14(VAR_11);

 return VAR_12;
}
