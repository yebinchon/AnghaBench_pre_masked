
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int datapath_caps2; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;

bool FUNC_1(struct efx_nic *VAR_2)
{
 struct efx_ef10_nic_data *VAR_3 = VAR_2->nic_data;

 return ((FUNC_0(VAR_2) >= VAR_0) &&
  (VAR_3->datapath_caps2 &
   (1 << VAR_1)
  ));
}
