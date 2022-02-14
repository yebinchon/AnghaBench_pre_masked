
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int udp_tunnels_lock; scalar_t__ udp_tunnels_dirty; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_0)
{
 struct efx_ef10_nic_data *VAR_1 = VAR_0->nic_data;
 int VAR_2 = 0;

 FUNC_2(&VAR_1->udp_tunnels_lock);
 if (VAR_1->udp_tunnels_dirty) {



  FUNC_0(VAR_0);
  VAR_2 = FUNC_1(VAR_0, 0);
 }
 FUNC_3(&VAR_1->udp_tunnels_lock);
 return VAR_2;
}
