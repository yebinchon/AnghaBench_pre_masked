
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int datapath_caps; scalar_t__ udp_tunnels_dirty; } ;
typedef int __be16 ;


 int VAR_0 ;
 int * FUNC_0 (struct efx_nic*,int ) ;

__attribute__((used)) static bool FUNC_1(struct efx_nic *VAR_1, __be16 VAR_2)
{
 struct efx_ef10_nic_data *VAR_3 = VAR_1->nic_data;

 if (!(VAR_3->datapath_caps &
       (1 << VAR_0)))
  return 0;

 if (VAR_3->udp_tunnels_dirty)



  return 0;

 return FUNC_0(VAR_1, VAR_2) != ((void*)0);
}
