
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int tci; } ;
struct siena_vf {int status_lock; TYPE_1__ addr; } ;
struct siena_nic_data {struct siena_vf* vf; } ;
struct efx_nic {int vf_init_count; struct siena_nic_data* nic_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct siena_vf*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct efx_nic *VAR_3, int VAR_4,
    u16 VAR_5, u8 VAR_6)
{
 struct siena_nic_data *VAR_7 = VAR_3->nic_data;
 struct siena_vf *VAR_8;
 u16 VAR_9;

 if (VAR_4 >= VAR_3->vf_init_count)
  return -VAR_0;
 VAR_8 = VAR_7->vf + VAR_4;

 FUNC_2(&VAR_8->status_lock);
 VAR_9 = (VAR_5 & VAR_2) | ((VAR_6 & 0x7) << VAR_1);
 VAR_8->addr.tci = FUNC_1(VAR_9);
 FUNC_0(VAR_8);
 FUNC_3(&VAR_8->status_lock);

 return 0;
}
