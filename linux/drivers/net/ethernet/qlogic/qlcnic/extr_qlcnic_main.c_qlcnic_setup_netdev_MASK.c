
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {int rx_csum; int dcb; int drv_sds_rings; int drv_tx_rings; TYPE_2__* msix_entries; TYPE_1__* ahw; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct net_device {int watchdog_timeo; int features; int vlan_features; int hw_enc_features; int hw_features; int max_mtu; int min_mtu; int irq; int priv_flags; int * ethtool_ops; int mtu; int * netdev_ops; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int capabilities; scalar_t__ mc_enabled; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int VAR_18 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*,int ,int ) ;
 scalar_t__ FUNC_8 (struct qlcnic_adapter*) ;
 int VAR_21 ;
 scalar_t__ FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (struct net_device*) ;

int
FUNC_11(struct qlcnic_adapter *VAR_22, struct net_device *VAR_23,
      int VAR_24)
{
 int VAR_25;
 struct pci_dev *VAR_26 = VAR_22->pdev;

 VAR_22->rx_csum = 1;
 VAR_22->ahw->mc_enabled = 0;
 FUNC_6(VAR_22);

 VAR_23->netdev_ops = &VAR_20;
 VAR_23->watchdog_timeo = VAR_18 * VAR_0;

 FUNC_2(VAR_23, VAR_23->mtu);

 VAR_23->ethtool_ops = (FUNC_8(VAR_22)) ?
  &VAR_21 : &VAR_19;

 VAR_23->features |= (VAR_12 | VAR_9 | VAR_11 |
        VAR_8 | VAR_2 |
        VAR_6);
 VAR_23->vlan_features |= (VAR_12 | VAR_9 |
      VAR_8);

 if (FUNC_0(VAR_22)) {
  VAR_23->features |= (VAR_13 | VAR_14);
  VAR_23->vlan_features |= (VAR_13 | VAR_14);
 }

 if (VAR_24) {
  VAR_23->features |= VAR_4;
  VAR_23->vlan_features |= VAR_4;
 }

 if (FUNC_9(VAR_22))
  VAR_23->features |= (VAR_7);

 if (FUNC_8(VAR_22))
  VAR_23->features |= VAR_5;

 if (VAR_22->ahw->capabilities & VAR_17)
  VAR_23->features |= VAR_10;

 if (FUNC_5(VAR_22)) {
  VAR_23->features |= VAR_3;


  VAR_23->hw_enc_features = VAR_9 |
       VAR_3 |
       VAR_13 |
       VAR_14;
 }

 if (FUNC_4(VAR_22))
  VAR_23->hw_enc_features |= VAR_11;

 VAR_23->hw_features = VAR_23->features;
 VAR_23->priv_flags |= VAR_1;
 VAR_23->irq = VAR_22->msix_entries[0].vector;


 VAR_23->min_mtu = VAR_16;
 VAR_23->max_mtu = VAR_15;

 VAR_25 = FUNC_7(VAR_22, VAR_22->drv_tx_rings,
      VAR_22->drv_sds_rings);
 if (VAR_25)
  return VAR_25;

 FUNC_3(VAR_22->dcb);

 VAR_25 = FUNC_10(VAR_23);
 if (VAR_25) {
  FUNC_1(&VAR_26->dev, "failed to register net device\n");
  return VAR_25;
 }

 return 0;
}
