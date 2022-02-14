
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {struct efx_nic* efx; } ;
struct siena_nic_data {int peer_work; } ;
struct efx_nic {struct siena_nic_data* nic_data; } ;


 int FUNC_0 (struct siena_vf*) ;
 int FUNC_1 (struct siena_vf*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct siena_vf *VAR_1)
{
 struct efx_nic *VAR_2 = VAR_1->efx;
 struct siena_nic_data *VAR_3 = VAR_2->nic_data;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_0, &VAR_3->peer_work);
}
