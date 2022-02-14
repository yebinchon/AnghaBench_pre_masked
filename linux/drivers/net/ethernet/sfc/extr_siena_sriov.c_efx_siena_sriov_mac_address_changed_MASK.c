
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfdi_status {TYPE_2__* peers; } ;
struct TYPE_4__ {struct vfdi_status* addr; } ;
struct siena_nic_data {int peer_work; TYPE_1__ vfdi_status; } ;
struct efx_nic {TYPE_3__* net_dev; int vf_init_count; struct siena_nic_data* nic_data; } ;
struct TYPE_6__ {int dev_addr; } ;
struct TYPE_5__ {int mac_addr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;

int FUNC_2(struct efx_nic *VAR_1)
{
 struct siena_nic_data *VAR_2 = VAR_1->nic_data;
 struct vfdi_status *VAR_3 = VAR_2->vfdi_status.addr;

 if (!VAR_1->vf_init_count)
  return 0;
 FUNC_0(VAR_3->peers[0].mac_addr,
   VAR_1->net_dev->dev_addr);
 FUNC_1(VAR_0, &VAR_2->peer_work);

 return 0;
}
