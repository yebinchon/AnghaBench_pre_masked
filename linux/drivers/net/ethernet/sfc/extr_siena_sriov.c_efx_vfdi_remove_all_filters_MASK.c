
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {int rx_filtering; struct efx_nic* efx; } ;
struct siena_nic_data {int peer_work; } ;
struct efx_nic {struct siena_nic_data* nic_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct siena_vf*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct siena_vf *VAR_2)
{
 struct efx_nic *VAR_3 = VAR_2->efx;
 struct siena_nic_data *VAR_4 = VAR_3->nic_data;

 VAR_2->rx_filtering = 0;
 FUNC_0(VAR_2);
 FUNC_1(VAR_1, &VAR_4->peer_work);

 return VAR_0;
}
