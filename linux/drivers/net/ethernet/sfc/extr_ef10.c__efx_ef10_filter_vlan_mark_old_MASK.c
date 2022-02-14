
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_ef10_filter_table* filter_state; } ;
struct efx_ef10_filter_vlan {int * default_filters; int * mc; int * uc; } ;
struct efx_ef10_filter_table {unsigned int dev_uc_count; unsigned int dev_mc_count; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct efx_nic*,int *) ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_1,
        struct efx_ef10_filter_vlan *VAR_2)
{
 struct efx_ef10_filter_table *VAR_3 = VAR_1->filter_state;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->dev_uc_count; VAR_4++)
  FUNC_0(VAR_1, &VAR_2->uc[VAR_4]);
 for (VAR_4 = 0; VAR_4 < VAR_3->dev_mc_count; VAR_4++)
  FUNC_0(VAR_1, &VAR_2->mc[VAR_4]);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_1, &VAR_2->default_filters[VAR_4]);
}
