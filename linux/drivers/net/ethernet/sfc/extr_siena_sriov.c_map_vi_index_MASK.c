
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {int dummy; } ;
struct siena_nic_data {struct siena_vf* vf; } ;
struct efx_nic {unsigned int vf_init_count; struct siena_nic_data* nic_data; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct efx_nic*) ;

__attribute__((used)) static bool FUNC_1(struct efx_nic *VAR_1, unsigned VAR_2,
    struct siena_vf **VAR_3, unsigned *VAR_4)
{
 struct siena_nic_data *VAR_5 = VAR_1->nic_data;
 unsigned VAR_6;

 if (VAR_2 < VAR_0)
  return 1;
 VAR_6 = (VAR_2 - VAR_0) / FUNC_0(VAR_1);
 if (VAR_6 >= VAR_1->vf_init_count)
  return 1;

 if (VAR_3)
  *VAR_3 = VAR_5->vf + VAR_6;
 if (VAR_4)
  *VAR_4 = VAR_2 % FUNC_0(VAR_1);
 return 0;
}
