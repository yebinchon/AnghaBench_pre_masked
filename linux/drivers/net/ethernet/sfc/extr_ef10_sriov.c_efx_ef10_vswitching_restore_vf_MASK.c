
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int must_probe_vswitching; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*,int ) ;

int FUNC_1(struct efx_nic *VAR_1)
{
 struct efx_ef10_nic_data *VAR_2 = VAR_1->nic_data;
 int VAR_3;

 if (!VAR_2->must_probe_vswitching)
  return 0;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_2->must_probe_vswitching = 0;
 return 0;
}
