
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int vf_count; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {struct ef10_vf* vf; } ;
struct ef10_vf {int * efx; scalar_t__ vport_id; int mac; scalar_t__ vport_assigned; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,int ,int) ;
 int FUNC_1 (struct efx_nic*,scalar_t__,int ) ;
 int FUNC_2 (struct efx_nic*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_2)
{
 struct efx_ef10_nic_data *VAR_3 = VAR_2->nic_data;
 int VAR_4;

 if (!VAR_3->vf)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2->vf_count; VAR_4++) {
  struct ef10_vf *VAR_5 = VAR_3->vf + VAR_4;


  if (VAR_5->pci_dev &&
      VAR_5->pci_dev->dev_flags & VAR_1)
   continue;

  if (VAR_5->vport_assigned) {
   FUNC_0(VAR_2, VAR_0, VAR_4);
   VAR_5->vport_assigned = 0;
  }

  if (!FUNC_4(VAR_5->mac)) {
   FUNC_1(VAR_2, VAR_5->vport_id, VAR_5->mac);
   FUNC_3(VAR_5->mac);
  }

  if (VAR_5->vport_id) {
   FUNC_2(VAR_2, VAR_5->vport_id);
   VAR_5->vport_id = 0;
  }

  VAR_5->efx = ((void*)0);
 }
}
