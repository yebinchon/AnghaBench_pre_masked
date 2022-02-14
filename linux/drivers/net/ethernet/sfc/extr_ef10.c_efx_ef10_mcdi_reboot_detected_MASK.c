
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int must_check_datapath_caps; scalar_t__* stats; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_1)
{
 struct efx_ef10_nic_data *VAR_2 = VAR_1->nic_data;


 FUNC_0(VAR_1);


 VAR_2->must_check_datapath_caps = 1;




 VAR_2->stats[VAR_0] = 0;
}
