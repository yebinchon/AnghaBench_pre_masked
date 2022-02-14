
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int * vf; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_0)
{
 struct efx_ef10_nic_data *VAR_1 = VAR_0->nic_data;

 FUNC_0(VAR_0);
 FUNC_1(VAR_1->vf);
 VAR_1->vf = ((void*)0);
}
