
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int warm_boot_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_2(struct efx_nic *VAR_1)
{
 struct efx_ef10_nic_data *VAR_2 = VAR_1->nic_data;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0) {





  return 0;
 }

 if (VAR_3 == VAR_2->warm_boot_count)
  return 0;

 VAR_2->warm_boot_count = VAR_3;
 FUNC_1(VAR_1);

 return -VAR_0;
}
