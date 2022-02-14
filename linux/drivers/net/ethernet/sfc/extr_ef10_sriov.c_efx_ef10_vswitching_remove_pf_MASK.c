
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int pci_dev; TYPE_1__* net_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {scalar_t__ vport_id; int vport_mac; } ;
struct TYPE_2__ {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,scalar_t__) ;
 int FUNC_2 (struct efx_nic*,scalar_t__,int ) ;
 int FUNC_3 (struct efx_nic*,scalar_t__) ;
 int FUNC_4 (struct efx_nic*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct efx_nic *VAR_1)
{
 struct efx_ef10_nic_data *VAR_2 = VAR_1->nic_data;

 FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_2->vport_id);

 if (VAR_2->vport_id == VAR_0)
  return;

 if (!FUNC_6(VAR_2->vport_mac)) {
  FUNC_2(VAR_1, VAR_2->vport_id,
           VAR_1->net_dev->dev_addr);
  FUNC_5(VAR_2->vport_mac);
 }
 FUNC_3(VAR_1, VAR_2->vport_id);
 VAR_2->vport_id = VAR_0;


 if (!FUNC_7(VAR_1->pci_dev))
  FUNC_4(VAR_1, VAR_2->vport_id);
}
