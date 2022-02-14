
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; } ;
struct net_device {int features; int vlan_features; int hw_features; } ;
struct ef4_nic_type {int offload_features; } ;
struct ef4_nic {int fixed_features; int net_dev; struct ef4_nic_type const* type; } ;


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
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (int) ;
 struct net_device* FUNC_2 (int,int ,int ) ;
 int VAR_10 ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*) ;
 int FUNC_6 (struct ef4_nic*,struct pci_dev*,struct net_device*) ;
 int FUNC_7 (struct ef4_nic*) ;
 int FUNC_8 (struct ef4_nic*) ;
 int FUNC_9 (struct ef4_nic*) ;
 int FUNC_10 (struct ef4_nic*) ;
 int FUNC_11 (struct ef4_nic*) ;
 int FUNC_12 (struct net_device*) ;
 struct ef4_nic* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct ef4_nic*,int ,int ,char*,...) ;
 int FUNC_15 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_16 (struct ef4_nic*,int ,int ,char*,int) ;
 int FUNC_17 (struct ef4_nic*,int ,int ,char*,int) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,struct ef4_nic*) ;
 int VAR_11 ;
 int FUNC_20 () ;
 int FUNC_21 () ;

__attribute__((used)) static int FUNC_22(struct pci_dev *VAR_12,
    const struct pci_device_id *VAR_13)
{
 struct net_device *VAR_14;
 struct ef4_nic *VAR_15;
 int VAR_16;


 VAR_14 = FUNC_2(sizeof(*VAR_15), VAR_0,
         VAR_1);
 if (!VAR_14)
  return -VAR_3;
 VAR_15 = FUNC_13(VAR_14);
 VAR_15->type = (const struct ef4_nic_type *) VAR_13->driver_data;
 VAR_15->fixed_features |= VAR_5;

 FUNC_19(VAR_12, VAR_15);
 FUNC_0(VAR_14, &VAR_12->dev);
 VAR_16 = FUNC_6(VAR_15, VAR_12, VAR_14);
 if (VAR_16)
  goto fail1;

 FUNC_15(VAR_15, VAR_11, VAR_15->net_dev,
     "Solarflare NIC detected\n");

 FUNC_10(VAR_15);


 VAR_16 = FUNC_5(VAR_15);
 if (VAR_16)
  goto fail2;

 VAR_16 = FUNC_8(VAR_15);
 if (VAR_16)
  goto fail3;

 VAR_14->features |= (VAR_15->type->offload_features | VAR_9 |
         VAR_8);

 VAR_14->vlan_features |= (VAR_6 | VAR_9 |
       VAR_5 | VAR_8);

 VAR_14->hw_features = VAR_14->features & ~VAR_15->fixed_features;





 VAR_14->features &= ~VAR_7;
 VAR_14->features |= VAR_15->fixed_features;

 VAR_16 = FUNC_11(VAR_15);
 if (VAR_16)
  goto fail4;

 FUNC_14(VAR_15, VAR_11, VAR_15->net_dev, "initialisation successful\n");


 FUNC_20();
 VAR_16 = FUNC_7(VAR_15);
 FUNC_21();
 if (VAR_16 && VAR_16 != -VAR_4)
  FUNC_17(VAR_15, VAR_11, VAR_15->net_dev,
      "failed to create MTDs (%d)\n", VAR_16);

 VAR_16 = FUNC_18(VAR_12);
 if (VAR_16 && VAR_16 != -VAR_2)
  FUNC_16(VAR_15, VAR_11, VAR_15->net_dev,
        "PCIE error reporting unavailable (%d).\n",
        VAR_16);

 return 0;

 fail4:
 FUNC_9(VAR_15);
 fail3:
 FUNC_3(VAR_15);
 fail2:
 FUNC_4(VAR_15);
 fail1:
 FUNC_1(VAR_16 > 0);
 FUNC_14(VAR_15, VAR_10, VAR_15->net_dev, "initialisation failed. rc=%d\n", VAR_16);
 FUNC_12(VAR_14);
 return VAR_16;
}
