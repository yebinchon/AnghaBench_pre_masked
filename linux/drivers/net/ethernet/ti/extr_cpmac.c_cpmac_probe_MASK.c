
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct platform_device {int id; int dev; } ;
struct plat_cpmac_data {int phy_mask; int dev_addr; } ;
struct phy_device {int dummy; } ;
struct net_device {int dev_addr; int irq; int * ethtool_ops; int * netdev_ops; } ;
struct cpmac_priv {int ring_size; int phy_name; int msg_enable; struct net_device* dev; int rx_lock; int lock; int napi; struct platform_device* pdev; } ;
typedef int mdio_bus_id ;
struct TYPE_3__ {char* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *,char*) ;
 struct plat_cpmac_data* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,void*,int ,int ,int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int ,int ,int) ;
 struct cpmac_priv* FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct cpmac_priv*) ;
 int FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (struct cpmac_priv*) ;
 int FUNC_14 (struct net_device*,int *,int ,int) ;
 struct phy_device* FUNC_15 (struct net_device*,int ,int ,int ) ;
 int FUNC_16 (struct platform_device*,char*) ;
 struct resource* FUNC_17 (struct platform_device*,int ,char*) ;
 int FUNC_18 (struct platform_device*,struct net_device*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (int ,int,char*,char*,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (char*,char*,int) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_16)
{
 int VAR_17, VAR_18;
 char VAR_19[VAR_4];
 struct resource *VAR_20;
 struct cpmac_priv *VAR_21;
 struct net_device *VAR_22;
 struct plat_cpmac_data *VAR_23;
 struct phy_device *VAR_24 = ((void*)0);

 VAR_23 = FUNC_5(&VAR_16->dev);

 if (VAR_15 || VAR_14) {
  FUNC_22(VAR_19, "fixed-0", VAR_4);
  VAR_18 = VAR_16->id;
 } else {
  for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++) {
   if (!(VAR_23->phy_mask & (1 << VAR_18)))
    continue;
   if (!FUNC_8(VAR_10, VAR_18))
    continue;
   FUNC_22(VAR_19, VAR_10->id, VAR_4);
   break;
  }
 }

 if (VAR_18 == VAR_7) {
  FUNC_4(&VAR_16->dev, "no PHY present, falling back "
   "to switch on MDIO bus 0\n");
  FUNC_22(VAR_19, "fixed-0", VAR_4);
  VAR_18 = VAR_16->id;
 }
 VAR_19[sizeof(VAR_19) - 1] = '\0';

 VAR_22 = FUNC_3(sizeof(*VAR_21), VAR_0);
 if (!VAR_22)
  return -VAR_2;

 FUNC_2(VAR_22, &VAR_16->dev);
 FUNC_18(VAR_16, VAR_22);
 VAR_21 = FUNC_10(VAR_22);

 VAR_21->pdev = VAR_16;
 VAR_20 = FUNC_17(VAR_16, VAR_3, "regs");
 if (!VAR_20) {
  VAR_17 = -VAR_1;
  goto fail;
 }

 VAR_22->irq = FUNC_16(VAR_16, "irq");

 VAR_22->netdev_ops = &VAR_11;
 VAR_22->ethtool_ops = &VAR_9;

 FUNC_14(VAR_22, &VAR_21->napi, VAR_12, 64);

 FUNC_21(&VAR_21->lock);
 FUNC_21(&VAR_21->rx_lock);
 VAR_21->dev = VAR_22;
 VAR_21->ring_size = 64;
 VAR_21->msg_enable = FUNC_12(VAR_13, 0xff);
 FUNC_9(VAR_22->dev_addr, VAR_23->dev_addr, sizeof(VAR_23->dev_addr));

 FUNC_20(VAR_21->phy_name, VAR_4, VAR_5,
      VAR_19, VAR_18);

 VAR_24 = FUNC_15(VAR_22, VAR_21->phy_name, VAR_8,
        VAR_6);

 if (FUNC_0(VAR_24)) {
  if (FUNC_11(VAR_21))
   FUNC_4(&VAR_16->dev, "Could not attach to PHY\n");

  VAR_17 = FUNC_1(VAR_24);
  goto fail;
 }

 VAR_17 = FUNC_19(VAR_22);
 if (VAR_17) {
  FUNC_4(&VAR_16->dev, "Could not register net device\n");
  goto fail;
 }

 if (FUNC_13(VAR_21)) {
  FUNC_6(&VAR_16->dev, "regs: %p, irq: %d, phy: %s, "
    "mac: %pM\n", (void *)VAR_20->start, VAR_22->irq,
    VAR_21->phy_name, VAR_22->dev_addr);
 }

 return 0;

fail:
 FUNC_7(VAR_22);
 return VAR_17;
}
