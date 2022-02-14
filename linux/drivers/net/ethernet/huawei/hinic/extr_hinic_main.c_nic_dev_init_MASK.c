
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int features; int mtu; int dev_addr; int max_mtu; int * netdev_ops; } ;
struct hinic_txq_stats {int syncp; } ;
struct hinic_rxq_stats {int syncp; } ;
struct hinic_rx_mode_work {int work; } ;
struct hinic_hwdev {int dummy; } ;
struct hinic_dev {int workq; struct hinic_hwdev* hwdev; struct net_device* netdev; struct hinic_rx_mode_work rx_mode_work; int vlan_bitmap; struct hinic_rxq_stats rx_stats; struct hinic_txq_stats tx_stats; int mgmt_lock; int rx_weight; int tx_weight; int * rxqs; int * txqs; scalar_t__ flags; int msg_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct hinic_hwdev*) ;
 int VAR_6 ;
 int FUNC_2 (struct hinic_hwdev*) ;
 int FUNC_3 (struct net_device*,int *) ;
 int FUNC_4 (struct hinic_dev*) ;
 struct net_device* FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct hinic_hwdev*) ;
 int FUNC_14 (struct hinic_hwdev*,int ,struct hinic_dev*,int ) ;
 int FUNC_15 (struct hinic_hwdev*,int ) ;
 int FUNC_16 (struct hinic_hwdev*) ;
 struct hinic_hwdev* FUNC_17 (struct pci_dev*) ;
 int VAR_7 ;
 int FUNC_18 (struct hinic_dev*,int ,int ) ;
 int FUNC_19 (struct hinic_dev*,int ) ;
 int FUNC_20 (struct hinic_dev*,int ) ;
 int FUNC_21 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_22 (struct net_device*) ;
 struct hinic_dev* FUNC_23 (struct net_device*) ;
 int FUNC_24 (struct net_device*) ;
 int FUNC_25 (struct pci_dev*,struct net_device*) ;
 int FUNC_26 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (struct hinic_dev*,int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int FUNC_30(struct pci_dev *VAR_12)
{
 struct hinic_rx_mode_work *VAR_13;
 struct hinic_txq_stats *VAR_14;
 struct hinic_rxq_stats *VAR_15;
 struct hinic_dev *VAR_16;
 struct net_device *VAR_17;
 struct hinic_hwdev *VAR_18;
 int VAR_19, VAR_20;

 VAR_18 = FUNC_17(VAR_12);
 if (FUNC_1(VAR_18)) {
  FUNC_9(&VAR_12->dev, "Failed to initialize HW device\n");
  return FUNC_2(VAR_18);
 }

 VAR_20 = FUNC_16(VAR_18);
 if (VAR_20 <= 0) {
  FUNC_9(&VAR_12->dev, "Invalid number of QPS\n");
  VAR_19 = -VAR_0;
  goto err_num_qps;
 }

 VAR_17 = FUNC_5(sizeof(*VAR_16), VAR_20);
 if (!VAR_17) {
  FUNC_9(&VAR_12->dev, "Failed to allocate Ethernet device\n");
  VAR_19 = -VAR_1;
  goto err_alloc_etherdev;
 }

 FUNC_21(VAR_17);
 VAR_17->netdev_ops = &VAR_7;
 VAR_17->max_mtu = VAR_2;

 VAR_16 = FUNC_23(VAR_17);
 VAR_16->netdev = VAR_17;
 VAR_16->hwdev = VAR_18;
 VAR_16->msg_enable = VAR_6;
 VAR_16->flags = 0;
 VAR_16->txqs = ((void*)0);
 VAR_16->rxqs = ((void*)0);
 VAR_16->tx_weight = VAR_11;
 VAR_16->rx_weight = VAR_9;

 FUNC_27(&VAR_16->mgmt_lock, 1);

 VAR_14 = &VAR_16->tx_stats;
 VAR_15 = &VAR_16->rx_stats;

 FUNC_29(&VAR_14->syncp);
 FUNC_29(&VAR_15->syncp);

 VAR_16->vlan_bitmap = FUNC_11(&VAR_12->dev,
         FUNC_4(VAR_16),
         VAR_3);
 if (!VAR_16->vlan_bitmap) {
  VAR_19 = -VAR_1;
  goto err_vlan_bitmap;
 }

 VAR_16->workq = FUNC_7(VAR_5);
 if (!VAR_16->workq) {
  VAR_19 = -VAR_1;
  goto err_workq;
 }

 FUNC_25(VAR_12, VAR_17);

 VAR_19 = FUNC_19(VAR_16, VAR_17->dev_addr);
 if (VAR_19)
  FUNC_10(&VAR_12->dev, "Failed to get mac address\n");

 VAR_19 = FUNC_18(VAR_16, VAR_17->dev_addr, 0);
 if (VAR_19) {
  FUNC_9(&VAR_12->dev, "Failed to add mac\n");
  goto err_add_mac;
 }

 VAR_19 = FUNC_20(VAR_16, VAR_17->mtu);
 if (VAR_19) {
  FUNC_9(&VAR_12->dev, "Failed to set mtu\n");
  goto err_set_mtu;
 }

 VAR_13 = &VAR_16->rx_mode_work;
 FUNC_0(&VAR_13->work, VAR_10);

 FUNC_22(VAR_17);

 FUNC_24(VAR_17);

 FUNC_14(VAR_16->hwdev, VAR_4,
    VAR_16, VAR_8);

 VAR_19 = FUNC_28(VAR_16, 0, VAR_16->netdev->features, 1);
 if (VAR_19)
  goto err_set_features;

 FUNC_3(VAR_17, &VAR_12->dev);

 VAR_19 = FUNC_26(VAR_17);
 if (VAR_19) {
  FUNC_9(&VAR_12->dev, "Failed to register netdev\n");
  goto err_reg_netdev;
 }

 return 0;

err_reg_netdev:
err_set_features:
 FUNC_15(VAR_16->hwdev,
      VAR_4);
 FUNC_6(&VAR_13->work);

err_set_mtu:
err_add_mac:
 FUNC_25(VAR_12, ((void*)0));
 FUNC_8(VAR_16->workq);

err_workq:
err_vlan_bitmap:
 FUNC_12(VAR_17);

err_alloc_etherdev:
err_num_qps:
 FUNC_13(VAR_18);
 return VAR_19;
}
