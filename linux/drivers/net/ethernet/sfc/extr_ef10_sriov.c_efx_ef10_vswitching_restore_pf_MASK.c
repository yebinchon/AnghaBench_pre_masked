
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int must_probe_vswitching; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;

int FUNC_2(struct efx_nic *VAR_0)
{
 struct efx_ef10_nic_data *VAR_1 = VAR_0->nic_data;
 int VAR_2;

 if (!VAR_1->must_probe_vswitching)
  return 0;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  goto fail;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  goto fail;

 VAR_1->must_probe_vswitching = 0;
fail:
 return VAR_2;
}
