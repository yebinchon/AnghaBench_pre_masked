
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct efx_nic {unsigned int vf_count; int net_dev; TYPE_3__* pci_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {TYPE_1__* vf; } ;
struct TYPE_9__ {TYPE_2__* driver; } ;
struct TYPE_8__ {int (* remove ) (TYPE_3__*) ;} ;
struct TYPE_7__ {struct efx_nic* efx; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*,int) ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

void FUNC_6(struct efx_nic *VAR_1)
{
 struct efx_ef10_nic_data *VAR_2 = VAR_1->nic_data;
 unsigned int VAR_3;
 int VAR_4;

 if (!VAR_2->vf) {

  if (FUNC_3(VAR_1->pci_dev) && !FUNC_4(VAR_1->pci_dev))
   FUNC_2(VAR_1->pci_dev);
  return;
 }


 for (VAR_3 = 0; VAR_3 < VAR_1->vf_count; ++VAR_3) {
  struct efx_nic *VAR_5 = VAR_2->vf[VAR_3].efx;

  if (VAR_5)
   VAR_5->pci_dev->driver->remove(VAR_5->pci_dev);
 }

 VAR_4 = FUNC_0(VAR_1, 1);
 if (VAR_4)
  FUNC_1(VAR_1, VAR_0, VAR_1->net_dev,
     "Disabling SRIOV was not successful rc=%d\n", VAR_4);
 else
  FUNC_1(VAR_1, VAR_0, VAR_1->net_dev, "SRIOV disabled\n");
}
