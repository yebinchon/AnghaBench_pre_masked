
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int features; int hw_features; int * ethtool_ops; int * netdev_ops; int max_mtu; } ;
struct lan743x_adapter {int msg_enable; struct net_device* netdev; } ;


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
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int *,int) ;
 int FUNC_2 (struct lan743x_adapter*) ;
 int VAR_11 ;
 int FUNC_3 (struct lan743x_adapter*) ;
 int FUNC_4 (struct lan743x_adapter*,struct pci_dev*) ;
 int FUNC_5 (struct lan743x_adapter*) ;
 int FUNC_6 (struct lan743x_adapter*) ;
 int VAR_12 ;
 int FUNC_7 (struct lan743x_adapter*) ;
 int FUNC_8 (struct lan743x_adapter*,struct pci_dev*) ;
 struct lan743x_adapter* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct pci_dev*,struct net_device*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_13,
    const struct pci_device_id *VAR_14)
{
 struct lan743x_adapter *VAR_15 = ((void*)0);
 struct net_device *VAR_16 = ((void*)0);
 int VAR_17 = -VAR_0;

 VAR_16 = FUNC_1(&VAR_13->dev,
         sizeof(struct lan743x_adapter));
 if (!VAR_16)
  goto return_error;

 FUNC_0(VAR_16, &VAR_13->dev);
 FUNC_11(VAR_13, VAR_16);
 VAR_15 = FUNC_9(VAR_16);
 VAR_15->netdev = VAR_16;
 VAR_15->msg_enable = VAR_5 | VAR_9 |
         VAR_8 | VAR_7 |
         VAR_6 | VAR_10;
 VAR_16->max_mtu = VAR_1;

 VAR_17 = FUNC_8(VAR_15, VAR_13);
 if (VAR_17)
  goto return_error;

 VAR_17 = FUNC_2(VAR_15);
 if (VAR_17)
  goto cleanup_pci;

 VAR_17 = FUNC_4(VAR_15, VAR_13);
 if (VAR_17)
  goto cleanup_pci;

 VAR_17 = FUNC_6(VAR_15);
 if (VAR_17)
  goto cleanup_hardware;

 VAR_15->netdev->netdev_ops = &VAR_12;
 VAR_15->netdev->ethtool_ops = &VAR_11;
 VAR_15->netdev->features = VAR_3 | VAR_4 | VAR_2;
 VAR_15->netdev->hw_features = VAR_15->netdev->features;


 FUNC_10(VAR_16);

 VAR_17 = FUNC_13(VAR_15->netdev);
 if (VAR_17 < 0)
  goto cleanup_mdiobus;
 return 0;

cleanup_mdiobus:
 FUNC_5(VAR_15);

cleanup_hardware:
 FUNC_3(VAR_15);

cleanup_pci:
 FUNC_7(VAR_15);

return_error:
 FUNC_12("Initialization failed\n");
 return VAR_17;
}
