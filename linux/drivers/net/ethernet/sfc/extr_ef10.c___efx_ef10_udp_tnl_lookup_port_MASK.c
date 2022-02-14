
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_udp_tunnel {scalar_t__ port; int count; } ;
struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {struct efx_udp_tunnel* udp_tunnels; } ;
typedef scalar_t__ __be16 ;


 size_t FUNC_0 (struct efx_udp_tunnel*) ;

__attribute__((used)) static struct efx_udp_tunnel *FUNC_1(struct efx_nic *VAR_0,
            __be16 VAR_1)
{
 struct efx_ef10_nic_data *VAR_2 = VAR_0->nic_data;
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->udp_tunnels); ++VAR_3) {
  if (!VAR_2->udp_tunnels[VAR_3].count)
   continue;
  if (VAR_2->udp_tunnels[VAR_3].port == VAR_1)
   return &VAR_2->udp_tunnels[VAR_3];
 }
 return ((void*)0);
}
