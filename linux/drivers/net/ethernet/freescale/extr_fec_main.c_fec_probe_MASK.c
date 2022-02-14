
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; int name; TYPE_1__* id_entry; } ;
struct of_device_id {TYPE_1__* data; } ;
struct net_device {int dev; } ;
struct fec_platform_data {int phy; } ;
struct fec_enet_private {int quirks; int num_rx_queues; int num_tx_queues; int wol_flag; int phy_interface; int ptp_clk_on; int bufdesc_ex; int* irq; int * clk_ipg; int * clk_ahb; int * reg_phy; int tx_timeout_work; int rx_copybreak; int dev_id; scalar_t__ ptp_clock; int mdio_done; int * clk_ptp; int * clk_ref; int ptp_clk_mutex; int * clk_enet_out; int itr_clk_rate; struct device_node* phy_node; struct platform_device* pdev; int * hwp; int pause_flag; struct net_device* netdev; } ;
struct device_node {int dummy; } ;
typedef int irq_name ;
struct TYPE_20__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,TYPE_2__*) ;
 struct net_device* FUNC_4 (scalar_t__,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 struct fec_platform_data* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,int) ;
 void* FUNC_11 (TYPE_2__*,char*) ;
 int * FUNC_12 (struct platform_device*,int ) ;
 int * FUNC_13 (TYPE_2__*,char*) ;
 int FUNC_14 (TYPE_2__*,int,int ,int ,int ,struct net_device*) ;
 int VAR_11 ;
 int FUNC_15 (struct net_device*,int) ;
 int FUNC_16 (struct platform_device*) ;
 int FUNC_17 (struct platform_device*,int*,int*) ;
 int FUNC_18 (struct net_device*) ;
 int VAR_12 ;
 int FUNC_19 (struct platform_device*) ;
 int FUNC_20 (struct fec_enet_private*) ;
 int VAR_13 ;
 int FUNC_21 (struct platform_device*,int) ;
 int FUNC_22 (struct platform_device*) ;
 int FUNC_23 (struct platform_device*) ;
 int FUNC_24 (struct net_device*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct net_device*,char*,int ) ;
 struct fec_enet_private* FUNC_28 (struct net_device*) ;
 int FUNC_29 (struct net_device*) ;
 int FUNC_30 (struct device_node*) ;
 scalar_t__ FUNC_31 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_32 (char*) ;
 struct of_device_id* FUNC_33 (int ,TYPE_2__*) ;
 struct device_node* FUNC_34 (struct device_node*) ;
 int FUNC_35 (struct device_node*) ;
 struct device_node* FUNC_36 (struct device_node*,char*,int ) ;
 int FUNC_37 (struct device_node*) ;
 scalar_t__ FUNC_38 (struct device_node*) ;
 int FUNC_39 (struct device_node*) ;
 int FUNC_40 (struct device_node*,char*) ;
 int FUNC_41 (TYPE_2__*) ;
 int FUNC_42 (TYPE_2__*) ;
 int FUNC_43 (struct platform_device*,int) ;
 int FUNC_44 (struct platform_device*,char*) ;
 int FUNC_45 (struct platform_device*,struct net_device*) ;
 int FUNC_46 (TYPE_2__*) ;
 int FUNC_47 (TYPE_2__*) ;
 int FUNC_48 (TYPE_2__*) ;
 int FUNC_49 (TYPE_2__*) ;
 int FUNC_50 (TYPE_2__*) ;
 int FUNC_51 (TYPE_2__*) ;
 int FUNC_52 (TYPE_2__*) ;
 int FUNC_53 (TYPE_2__*,int ) ;
 int FUNC_54 (TYPE_2__*) ;
 int FUNC_55 (struct net_device*) ;
 int FUNC_56 (int *) ;
 int FUNC_57 (int *) ;
 int FUNC_58 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_59(struct platform_device *VAR_14)
{
 struct fec_enet_private *VAR_15;
 struct fec_platform_data *VAR_16;
 struct net_device *VAR_17;
 int VAR_18, VAR_19, VAR_20 = 0;
 const struct of_device_id *VAR_21;
 static int VAR_22;
 struct device_node *VAR_23 = VAR_14->dev.of_node, *VAR_24;
 int VAR_25;
 int VAR_26;
 char VAR_27[8];
 int VAR_28;

 FUNC_17(VAR_14, &VAR_25, &VAR_26);


 VAR_17 = FUNC_4(sizeof(struct fec_enet_private) +
      VAR_8, VAR_25, VAR_26);
 if (!VAR_17)
  return -VAR_1;

 FUNC_3(VAR_17, &VAR_14->dev);


 VAR_15 = FUNC_28(VAR_17);

 VAR_21 = FUNC_33(VAR_11, &VAR_14->dev);
 if (VAR_21)
  VAR_14->id_entry = VAR_21->data;
 VAR_15->quirks = VAR_14->id_entry->driver_data;

 VAR_15->netdev = VAR_17;
 VAR_15->num_rx_queues = VAR_26;
 VAR_15->num_tx_queues = VAR_25;



 if (VAR_15->quirks & VAR_7)
  VAR_15->pause_flag |= VAR_4;



 FUNC_41(&VAR_14->dev);

 VAR_15->hwp = FUNC_12(VAR_14, 0);
 if (FUNC_1(VAR_15->hwp)) {
  VAR_20 = FUNC_2(VAR_15->hwp);
  goto failed_ioremap;
 }

 VAR_15->pdev = VAR_14;
 VAR_15->dev_id = VAR_22++;

 FUNC_45(VAR_14, VAR_17);

 if ((FUNC_32("fsl,imx6q") ||
      FUNC_32("fsl,imx6dl")) &&
     !FUNC_40(VAR_23, "fsl,err006687-workaround-present"))
  VAR_15->quirks |= VAR_5;

 if (FUNC_31(VAR_23, "fsl,magic-packet", ((void*)0)))
  VAR_15->wol_flag |= VAR_9;

 VAR_24 = FUNC_36(VAR_23, "phy-handle", 0);
 if (!VAR_24 && FUNC_38(VAR_23)) {
  VAR_20 = FUNC_39(VAR_23);
  if (VAR_20 < 0) {
   FUNC_8(&VAR_14->dev,
    "broken fixed-link specification\n");
   goto failed_phy;
  }
  VAR_24 = FUNC_34(VAR_23);
 }
 VAR_15->phy_node = VAR_24;

 VAR_20 = FUNC_30(VAR_14->dev.of_node);
 if (VAR_20 < 0) {
  VAR_16 = FUNC_9(&VAR_14->dev);
  if (VAR_16)
   VAR_15->phy_interface = VAR_16->phy;
  else
   VAR_15->phy_interface = VAR_10;
 } else {
  VAR_15->phy_interface = VAR_20;
 }

 VAR_15->clk_ipg = FUNC_11(&VAR_14->dev, "ipg");
 if (FUNC_1(VAR_15->clk_ipg)) {
  VAR_20 = FUNC_2(VAR_15->clk_ipg);
  goto failed_clk;
 }

 VAR_15->clk_ahb = FUNC_11(&VAR_14->dev, "ahb");
 if (FUNC_1(VAR_15->clk_ahb)) {
  VAR_20 = FUNC_2(VAR_15->clk_ahb);
  goto failed_clk;
 }

 VAR_15->itr_clk_rate = FUNC_6(VAR_15->clk_ahb);


 VAR_15->clk_enet_out = FUNC_11(&VAR_14->dev, "enet_out");
 if (FUNC_1(VAR_15->clk_enet_out))
  VAR_15->clk_enet_out = ((void*)0);

 VAR_15->ptp_clk_on = 0;
 FUNC_26(&VAR_15->ptp_clk_mutex);


 VAR_15->clk_ref = FUNC_11(&VAR_14->dev, "enet_clk_ref");
 if (FUNC_1(VAR_15->clk_ref))
  VAR_15->clk_ref = ((void*)0);

 VAR_15->bufdesc_ex = VAR_15->quirks & VAR_6;
 VAR_15->clk_ptp = FUNC_11(&VAR_14->dev, "ptp");
 if (FUNC_1(VAR_15->clk_ptp)) {
  VAR_15->clk_ptp = ((void*)0);
  VAR_15->bufdesc_ex = 0;
 }

 VAR_20 = FUNC_15(VAR_17, 1);
 if (VAR_20)
  goto failed_clk;

 VAR_20 = FUNC_7(VAR_15->clk_ipg);
 if (VAR_20)
  goto failed_clk_ipg;
 VAR_20 = FUNC_7(VAR_15->clk_ahb);
 if (VAR_20)
  goto failed_clk_ahb;

 VAR_15->reg_phy = FUNC_13(&VAR_14->dev, "phy");
 if (!FUNC_1(VAR_15->reg_phy)) {
  VAR_20 = FUNC_57(VAR_15->reg_phy);
  if (VAR_20) {
   FUNC_8(&VAR_14->dev,
    "Failed to enable phy regulator: %d\n", VAR_20);
   goto failed_regulator;
  }
 } else {
  if (FUNC_2(VAR_15->reg_phy) == -VAR_2) {
   VAR_20 = -VAR_2;
   goto failed_regulator;
  }
  VAR_15->reg_phy = ((void*)0);
 }

 FUNC_53(&VAR_14->dev, VAR_3);
 FUNC_54(&VAR_14->dev);
 FUNC_48(&VAR_14->dev);
 FUNC_52(&VAR_14->dev);
 FUNC_47(&VAR_14->dev);

 VAR_20 = FUNC_23(VAR_14);
 if (VAR_20)
  goto failed_reset;

 VAR_28 = FUNC_16(VAR_14);
 if (VAR_15->bufdesc_ex)
  FUNC_21(VAR_14, VAR_28);

 VAR_20 = FUNC_18(VAR_17);
 if (VAR_20)
  goto failed_init;

 for (VAR_18 = 0; VAR_18 < VAR_28; VAR_18++) {
  FUNC_58(VAR_27, sizeof(VAR_27), "int%d", VAR_18);
  VAR_19 = FUNC_44(VAR_14, VAR_27);
  if (VAR_19 < 0)
   VAR_19 = FUNC_43(VAR_14, VAR_18);
  if (VAR_19 < 0) {
   VAR_20 = VAR_19;
   goto failed_irq;
  }
  VAR_20 = FUNC_14(&VAR_14->dev, VAR_19, VAR_12,
           0, VAR_14->name, VAR_17);
  if (VAR_20)
   goto failed_irq;

  VAR_15->irq[VAR_18] = VAR_19;
 }

 FUNC_25(&VAR_15->mdio_done);
 VAR_20 = FUNC_19(VAR_14);
 if (VAR_20)
  goto failed_mii_init;


 FUNC_29(VAR_17);
 FUNC_15(VAR_17, 0);
 FUNC_42(&VAR_14->dev);

 VAR_20 = FUNC_55(VAR_17);
 if (VAR_20)
  goto failed_register;

 FUNC_10(&VAR_17->dev, VAR_15->wol_flag &
      VAR_9);

 if (VAR_15->bufdesc_ex && VAR_15->ptp_clock)
  FUNC_27(VAR_17, "registered PHC device %d\n", VAR_15->dev_id);

 VAR_15->rx_copybreak = VAR_0;
 FUNC_0(&VAR_15->tx_timeout_work, VAR_13);

 FUNC_49(&VAR_14->dev);
 FUNC_50(&VAR_14->dev);

 return 0;

failed_register:
 FUNC_20(VAR_15);
failed_mii_init:
failed_irq:
failed_init:
 FUNC_22(VAR_14);
 if (VAR_15->reg_phy)
  FUNC_56(VAR_15->reg_phy);
failed_reset:
 FUNC_51(&VAR_14->dev);
 FUNC_46(&VAR_14->dev);
failed_regulator:
 FUNC_5(VAR_15->clk_ahb);
failed_clk_ahb:
 FUNC_5(VAR_15->clk_ipg);
failed_clk_ipg:
 FUNC_15(VAR_17, 0);
failed_clk:
 if (FUNC_38(VAR_23))
  FUNC_37(VAR_23);
 FUNC_35(VAR_24);
failed_phy:
 VAR_22--;
failed_ioremap:
 FUNC_24(VAR_17);

 return VAR_20;
}
