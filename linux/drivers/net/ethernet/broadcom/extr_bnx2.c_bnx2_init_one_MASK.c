
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int irq; int dev; } ;
struct net_device {int hw_features; int vlan_features; int features; int dev_addr; int max_mtu; int min_mtu; int priv_flags; int * ethtool_ops; int watchdog_timeo; int * netdev_ops; } ;
struct bnx2 {int flags; int regview; int mac_addr; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bnx2*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct net_device* FUNC_2 (int,int ) ;
 int FUNC_3 (struct bnx2*,char*) ;
 int VAR_19 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*,struct net_device*) ;
 int VAR_20 ;
 int FUNC_6 (struct bnx2*) ;
 TYPE_1__* VAR_21 ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct net_device*,char*,int ,int,int,int ,long,int ,int ) ;
 struct bnx2* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*) ;
 scalar_t__ FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,struct net_device*) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (struct net_device*) ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_20(struct pci_dev *VAR_23, const struct pci_device_id *VAR_24)
{
 static int VAR_25 = 0;
 struct net_device *VAR_26;
 struct bnx2 *VAR_27;
 int VAR_28;
 char VAR_29[40];

 if (VAR_25++ == 0)
  FUNC_18("%s", VAR_22);


 VAR_26 = FUNC_2(sizeof(*VAR_27), VAR_17);
 if (!VAR_26)
  return -VAR_2;

 VAR_28 = FUNC_5(VAR_23, VAR_26);
 if (VAR_28 < 0)
  goto err_free;

 VAR_26->netdev_ops = &VAR_20;
 VAR_26->watchdog_timeo = VAR_18;
 VAR_26->ethtool_ops = &VAR_19;

 VAR_27 = FUNC_12(VAR_26);

 FUNC_17(VAR_23, VAR_26);







 if (FUNC_9())
  FUNC_6(VAR_27);

 FUNC_10(VAR_26->dev_addr, VAR_27->mac_addr, VAR_3);

 VAR_26->hw_features = VAR_10 | VAR_13 |
  VAR_14 | VAR_16 |
  VAR_12 | VAR_11;

 if (FUNC_0(VAR_27) == VAR_0)
  VAR_26->hw_features |= VAR_9 | VAR_15;

 VAR_26->vlan_features = VAR_26->hw_features;
 VAR_26->hw_features |= VAR_8 | VAR_7;
 VAR_26->features |= VAR_26->hw_features;
 VAR_26->priv_flags |= VAR_4;
 VAR_26->min_mtu = VAR_6;
 VAR_26->max_mtu = VAR_5;

 if (!(VAR_27->flags & VAR_1))
  VAR_26->hw_features &= ~VAR_7;

 if ((VAR_28 = FUNC_19(VAR_26))) {
  FUNC_7(&VAR_23->dev, "Cannot register net device\n");
  goto error;
 }

 FUNC_11(VAR_26, "%s (%c%d) %s found at mem %lx, IRQ %d, "
      "node addr %pM\n", VAR_21[VAR_24->driver_data].name,
      ((FUNC_1(VAR_27) & 0xf000) >> 12) + 'A',
      ((FUNC_1(VAR_27) & 0x0ff0) >> 4),
      FUNC_3(VAR_27, VAR_29), (long)FUNC_16(VAR_23, 0),
      VAR_23->irq, VAR_26->dev_addr);

 return 0;

error:
 FUNC_14(VAR_23, VAR_27->regview);
 FUNC_15(VAR_23);
 FUNC_13(VAR_23);
err_free:
 FUNC_4(VAR_26);
 FUNC_8(VAR_26);
 return VAR_28;
}
