
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct efx_nic_type {int (* udp_tnl_push_ports ) (struct efx_nic*) ;int is_vf; } ;
struct efx_nic {int net_dev; struct efx_nic_type const* type; scalar_t__ reset_pending; int fixed_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (int) ;
 struct net_device* FUNC_2 (int,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*,struct pci_dev*,struct net_device*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*) ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (unsigned char*,int) ;
 int FUNC_12 (unsigned int) ;
 struct efx_nic* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_15 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_16 (struct efx_nic*,int ,int ,char*,int) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,struct efx_nic*) ;
 int VAR_6 ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_22(struct pci_dev *VAR_7,
    const struct pci_device_id *VAR_8)
{
 struct net_device *VAR_9;
 struct efx_nic *VAR_10;
 int VAR_11;


 VAR_9 = FUNC_2(sizeof(*VAR_10), VAR_0,
         VAR_1);
 if (!VAR_9)
  return -VAR_2;
 VAR_10 = FUNC_13(VAR_9);
 VAR_10->type = (const struct efx_nic_type *) VAR_8->driver_data;
 VAR_10->fixed_features |= VAR_4;

 FUNC_18(VAR_7, VAR_10);
 FUNC_0(VAR_9, &VAR_7->dev);
 VAR_11 = FUNC_6(VAR_10, VAR_7, VAR_9);
 if (VAR_11)
  goto fail1;

 FUNC_15(VAR_10, VAR_6, VAR_10->net_dev,
     "Solarflare NIC detected\n");

 if (!VAR_10->type->is_vf)
  FUNC_9(VAR_10);


 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11)
  goto fail2;

 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11) {



  VAR_10->reset_pending = 0;
  VAR_11 = FUNC_8(VAR_10);
  if (VAR_11) {



   unsigned char VAR_12;

   FUNC_11(&VAR_12, 1);
   FUNC_12((unsigned int)VAR_12 + 50);
   VAR_10->reset_pending = 0;
   VAR_11 = FUNC_8(VAR_10);
  }
 }
 if (VAR_11)
  goto fail3;

 FUNC_14(VAR_10, VAR_6, VAR_10->net_dev, "initialisation successful\n");


 FUNC_19();
 VAR_11 = FUNC_7(VAR_10);
 FUNC_20();
 if (VAR_11 && VAR_11 != -VAR_3)
  FUNC_16(VAR_10, VAR_6, VAR_10->net_dev,
      "failed to create MTDs (%d)\n", VAR_11);

 (void)FUNC_17(VAR_7);

 if (VAR_10->type->udp_tnl_push_ports)
  VAR_10->type->udp_tnl_push_ports(VAR_10);

 return 0;

 fail3:
 FUNC_3(VAR_10);
 fail2:
 FUNC_4(VAR_10);
 fail1:
 FUNC_1(VAR_11 > 0);
 FUNC_14(VAR_10, VAR_5, VAR_10->net_dev, "initialisation failed. rc=%d\n", VAR_11);
 FUNC_10(VAR_9);
 return VAR_11;
}
