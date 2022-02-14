
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct efx_nic {int pci_dev; struct net_device* net_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int vport_id; int vport_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int ,int ) ;
 int FUNC_2 (struct efx_nic*,int ,int ,int ,int *) ;
 int FUNC_3 (struct efx_nic*,int ,int ) ;
 int FUNC_4 (struct efx_nic*,int ) ;
 int FUNC_5 (struct efx_nic*,int ,int ) ;
 int FUNC_6 (struct efx_nic*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(struct efx_nic *VAR_4)
{
 struct efx_ef10_nic_data *VAR_5 = VAR_4->nic_data;
 struct net_device *VAR_6 = VAR_4->net_dev;
 int VAR_7;

 if (FUNC_9(VAR_4->pci_dev) <= 0) {

  FUNC_0(VAR_4);
  return 0;
 }

 VAR_7 = FUNC_5(VAR_4, VAR_1,
        VAR_3);
 if (VAR_7)
  goto fail1;

 VAR_7 = FUNC_2(VAR_4, VAR_1,
      VAR_2,
      VAR_0, &VAR_5->vport_id);
 if (VAR_7)
  goto fail2;

 VAR_7 = FUNC_1(VAR_4, VAR_5->vport_id, VAR_6->dev_addr);
 if (VAR_7)
  goto fail3;
 FUNC_8(VAR_5->vport_mac, VAR_6->dev_addr);

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7)
  goto fail4;

 return 0;
fail4:
 FUNC_3(VAR_4, VAR_5->vport_id, VAR_5->vport_mac);
 FUNC_7(VAR_5->vport_mac);
fail3:
 FUNC_4(VAR_4, VAR_5->vport_id);
 VAR_5->vport_id = VAR_1;
fail2:
 FUNC_6(VAR_4, VAR_1);
fail1:
 return VAR_7;
}
