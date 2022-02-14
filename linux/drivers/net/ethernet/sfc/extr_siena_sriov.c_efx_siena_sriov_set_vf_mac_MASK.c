
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int mac_addr; } ;
struct siena_vf {int status_lock; TYPE_1__ addr; } ;
struct siena_nic_data {struct siena_vf* vf; } ;
struct efx_nic {int vf_init_count; struct siena_nic_data* nic_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct siena_vf*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct efx_nic *VAR_1, int VAR_2, u8 *VAR_3)
{
 struct siena_nic_data *VAR_4 = VAR_1->nic_data;
 struct siena_vf *VAR_5;

 if (VAR_2 >= VAR_1->vf_init_count)
  return -VAR_0;
 VAR_5 = VAR_4->vf + VAR_2;

 FUNC_2(&VAR_5->status_lock);
 FUNC_1(VAR_5->addr.mac_addr, VAR_3);
 FUNC_0(VAR_5);
 FUNC_3(&VAR_5->status_lock);

 return 0;
}
