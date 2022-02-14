
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siena_vf {int reset_work; int req; } ;
struct siena_nic_data {int vfdi_status; struct siena_vf* vf; int peer_work; TYPE_1__* vfdi_channel; } ;
struct efx_nic {scalar_t__ vf_init_count; unsigned int vf_count; int pci_dev; struct siena_nic_data* nic_data; } ;
struct TYPE_2__ {int enabled; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct efx_nic*,int *) ;
 int FUNC_3 (struct efx_nic*,int,int *,int *) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*,int) ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct siena_vf*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(struct efx_nic *VAR_0)
{
 struct siena_vf *VAR_1;
 unsigned int VAR_2;
 struct siena_nic_data *VAR_3 = VAR_0->nic_data;

 if (VAR_0->vf_init_count == 0)
  return;


 FUNC_0(VAR_3->vfdi_channel->enabled);
 FUNC_5(VAR_0, 0);
 FUNC_9();
 VAR_0->vf_init_count = 0;
 FUNC_10();


 for (VAR_2 = 0; VAR_2 < VAR_0->vf_count; ++VAR_2) {
  VAR_1 = VAR_3->vf + VAR_2;
  FUNC_1(&VAR_1->req);
  FUNC_1(&VAR_1->reset_work);
 }
 FUNC_1(&VAR_3->peer_work);

 FUNC_8(VAR_0->pci_dev);


 FUNC_6(VAR_0);
 FUNC_4(VAR_0);
 FUNC_7(VAR_3->vf);
 FUNC_2(VAR_0, &VAR_3->vfdi_status);
 FUNC_3(VAR_0, 0, ((void*)0), ((void*)0));
}
