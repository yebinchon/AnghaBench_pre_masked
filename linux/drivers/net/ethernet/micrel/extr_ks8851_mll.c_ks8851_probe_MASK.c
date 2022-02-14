
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct net_device {int irq; int dev_addr; int * ethtool_ops; int * netdev_ops; } ;
struct TYPE_4__ {int phy_id; int phy_id_mask; int reg_num_mask; int mdio_write; int mdio_read; struct net_device* dev; } ;
struct ks_net {char const* hw_addr; char const* hw_addr_cmd; int mac_addr; int msg_enable; TYPE_1__ mii; int statelock; int lock; struct platform_device* pdev; struct net_device* netdev; } ;
struct ks8851_mll_platform_data {int mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct net_device*,TYPE_2__*) ;
 struct net_device* FUNC_3 (int) ;
 struct ks8851_mll_platform_data* FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (struct platform_device*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ks_net*) ;
 int VAR_12 ;
 int FUNC_11 (struct ks_net*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (struct ks_net*,int ) ;
 int FUNC_13 (struct ks_net*) ;
 scalar_t__ FUNC_14 (struct ks_net*) ;
 int FUNC_15 (struct ks_net*,int ) ;
 int FUNC_16 (struct ks_net*) ;
 int FUNC_17 (struct ks_net*) ;
 int FUNC_18 (struct ks_net*,int ) ;
 int FUNC_19 (struct ks_net*,int ,int) ;
 int FUNC_20 (int ,int ,int ) ;
 int VAR_16 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct net_device*,char*) ;
 int FUNC_23 (struct net_device*,char*,...) ;
 struct ks_net* FUNC_24 (struct net_device*) ;
 int FUNC_25 (int ,int) ;
 char* FUNC_26 (scalar_t__) ;
 int FUNC_27 (struct platform_device*,int ) ;
 int FUNC_28 (struct platform_device*,struct net_device*) ;
 int FUNC_29 (struct net_device*) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (struct net_device*) ;

__attribute__((used)) static int FUNC_32(struct platform_device *VAR_17)
{
 int VAR_18;
 struct net_device *VAR_19;
 struct ks_net *VAR_20;
 u16 VAR_21, VAR_22;
 const char *VAR_23;

 VAR_19 = FUNC_3(sizeof(struct ks_net));
 if (!VAR_19)
  return -VAR_3;

 FUNC_2(VAR_19, &VAR_17->dev);

 VAR_20 = FUNC_24(VAR_19);
 VAR_20->netdev = VAR_19;

 VAR_20->hw_addr = FUNC_5(VAR_17, 0);
 if (FUNC_0(VAR_20->hw_addr)) {
  VAR_18 = FUNC_1(VAR_20->hw_addr);
  goto err_free;
 }

 VAR_20->hw_addr_cmd = FUNC_5(VAR_17, 1);
 if (FUNC_0(VAR_20->hw_addr_cmd)) {
  VAR_18 = FUNC_1(VAR_20->hw_addr_cmd);
  goto err_free;
 }

 VAR_19->irq = FUNC_27(VAR_17, 0);

 if ((int)VAR_19->irq < 0) {
  VAR_18 = VAR_19->irq;
  goto err_free;
 }

 VAR_20->pdev = VAR_17;

 FUNC_21(&VAR_20->lock);
 FUNC_30(&VAR_20->statelock);

 VAR_19->netdev_ops = &VAR_13;
 VAR_19->ethtool_ops = &VAR_12;


 VAR_20->mii.dev = VAR_19;
 VAR_20->mii.phy_id = 1,
 VAR_20->mii.phy_id_mask = 1;
 VAR_20->mii.reg_num_mask = 0xf;
 VAR_20->mii.mdio_read = VAR_14;
 VAR_20->mii.mdio_write = VAR_15;

 FUNC_23(VAR_19, "message enable is %d\n", VAR_16);

 VAR_20->msg_enable = FUNC_25(VAR_16, (VAR_8 |
           VAR_10 |
           VAR_9));
 FUNC_13(VAR_20);


 if ((FUNC_12(VAR_20, VAR_6) & ~VAR_1) != VAR_0) {
  FUNC_22(VAR_19, "failed to read device ID\n");
  VAR_18 = -VAR_2;
  goto err_free;
 }

 if (FUNC_14(VAR_20)) {
  FUNC_22(VAR_19, "failed to read device ID\n");
  VAR_18 = -VAR_2;
  goto err_free;
 }

 VAR_18 = FUNC_29(VAR_19);
 if (VAR_18)
  goto err_free;

 FUNC_28(VAR_17, VAR_19);

 FUNC_18(VAR_20, VAR_5);
 FUNC_11(VAR_20);
 FUNC_10(VAR_20);
 FUNC_16(VAR_20);
 FUNC_17(VAR_20);

 VAR_22 = FUNC_12(VAR_20, VAR_7);
 FUNC_19(VAR_20, VAR_7, VAR_22 | VAR_11);


 if (VAR_17->dev.of_node) {
  VAR_23 = FUNC_26(VAR_17->dev.of_node);
  if (!FUNC_0(VAR_23))
   FUNC_7(VAR_20->mac_addr, VAR_23);
 } else {
  struct ks8851_mll_platform_data *VAR_24;

  VAR_24 = FUNC_4(&VAR_17->dev);
  if (!VAR_24) {
   FUNC_22(VAR_19, "No platform data\n");
   VAR_18 = -VAR_2;
   goto err_pdata;
  }
  FUNC_20(VAR_20->mac_addr, VAR_24->mac_addr, VAR_4);
 }
 if (!FUNC_9(VAR_20->mac_addr)) {

  FUNC_6(VAR_20->mac_addr);
  FUNC_23(VAR_19, "Using random mac address\n");
 }
 FUNC_23(VAR_19, "Mac address is: %pM\n", VAR_20->mac_addr);

 FUNC_20(VAR_19->dev_addr, VAR_20->mac_addr, VAR_4);

 FUNC_15(VAR_20, VAR_19->dev_addr);

 VAR_21 = FUNC_12(VAR_20, VAR_6);

 FUNC_23(VAR_19, "Found chip, family: 0x%x, id: 0x%x, rev: 0x%x\n",
      (VAR_21 >> 8) & 0xff, (VAR_21 >> 4) & 0xf, (VAR_21 >> 1) & 0x7);
 return 0;

err_pdata:
 FUNC_31(VAR_19);
err_free:
 FUNC_8(VAR_19);
 return VAR_18;
}
