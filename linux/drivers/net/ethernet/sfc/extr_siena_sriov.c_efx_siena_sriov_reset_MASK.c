
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {int dummy; } ;
struct siena_nic_data {struct siena_vf* vf; } ;
struct efx_nic {unsigned int vf_init_count; struct siena_nic_data* nic_data; } ;
struct efx_buffer {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct efx_nic*,struct efx_buffer*,int ,int ) ;
 int FUNC_2 (struct efx_nic*,struct efx_buffer*) ;
 int FUNC_3 (struct efx_nic*,int,int *,int *) ;
 int FUNC_4 (struct siena_vf*,struct efx_buffer*) ;
 int FUNC_5 (struct efx_nic*,int) ;

void FUNC_6(struct efx_nic *VAR_2)
{
 struct siena_nic_data *VAR_3 = VAR_2->nic_data;
 unsigned int VAR_4;
 struct efx_buffer VAR_5;
 struct siena_vf *VAR_6;

 FUNC_0();

 if (VAR_2->vf_init_count == 0)
  return;

 FUNC_5(VAR_2, 1);
 (void)FUNC_3(VAR_2, 1, ((void*)0), ((void*)0));

 if (FUNC_1(VAR_2, &VAR_5, VAR_0, VAR_1))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2->vf_init_count; ++VAR_4) {
  VAR_6 = VAR_3->vf + VAR_4;
  FUNC_4(VAR_6, &VAR_5);
 }

 FUNC_2(VAR_2, &VAR_5);
}
