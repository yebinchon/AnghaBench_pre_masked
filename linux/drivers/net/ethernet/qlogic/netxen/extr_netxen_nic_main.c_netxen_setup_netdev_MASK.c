
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_3__ {int revision_id; } ;
struct netxen_adapter {int max_mc_count; int capabilities; int tx_timeout_task; TYPE_2__* msix_entries; scalar_t__ pci_using_dac; TYPE_1__ ahw; scalar_t__ mc_enabled; struct pci_dev* pdev; } ;
struct net_device {int watchdog_timeo; int hw_features; int vlan_features; int features; int irq; int * ethtool_ops; int mtu; int * netdev_ops; } ;
struct TYPE_4__ {int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_12 ;
 int FUNC_5 (struct net_device*,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (struct netxen_adapter*) ;
 int VAR_14 ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int
FUNC_8(struct netxen_adapter *VAR_15,
  struct net_device *VAR_16)
{
 int VAR_17 = 0;
 struct pci_dev *VAR_18 = VAR_15->pdev;

 VAR_15->mc_enabled = 0;
 if (FUNC_1(VAR_15->ahw.revision_id))
  VAR_15->max_mc_count = 38;
 else
  VAR_15->max_mc_count = 16;

 VAR_16->netdev_ops = &VAR_12;
 VAR_16->watchdog_timeo = 5*VAR_0;

 FUNC_5(VAR_16, VAR_16->mtu);

 VAR_16->ethtool_ops = &VAR_13;

 VAR_16->hw_features = VAR_7 | VAR_4 | VAR_8 |
                       VAR_6;

 if (FUNC_1(VAR_15->ahw.revision_id))
  VAR_16->hw_features |= VAR_3 | VAR_9;

 VAR_16->vlan_features |= VAR_16->hw_features;

 if (VAR_15->pci_using_dac) {
  VAR_16->features |= VAR_1;
  VAR_16->vlan_features |= VAR_1;
 }

 if (VAR_15->capabilities & VAR_10)
  VAR_16->hw_features |= VAR_2;

 if (VAR_15->capabilities & VAR_11)
  VAR_16->hw_features |= VAR_5;

 VAR_16->features |= VAR_16->hw_features;

 VAR_16->irq = VAR_15->msix_entries[0].vector;

 FUNC_0(&VAR_15->tx_timeout_task, VAR_14);

 if (FUNC_6(VAR_15))
  FUNC_3(&VAR_18->dev, "failed to read mac addr\n");

 FUNC_4(VAR_16);

 VAR_17 = FUNC_7(VAR_16);
 if (VAR_17) {
  FUNC_2(&VAR_18->dev, "failed to register net device\n");
  return VAR_17;
 }

 return 0;
}
