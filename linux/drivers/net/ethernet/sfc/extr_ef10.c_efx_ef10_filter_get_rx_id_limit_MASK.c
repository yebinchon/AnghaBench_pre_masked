
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {struct efx_ef10_filter_table* filter_state; } ;
struct efx_ef10_filter_table {int rx_match_count; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct efx_nic *VAR_1)
{
 struct efx_ef10_filter_table *VAR_2 = VAR_1->filter_state;

 return VAR_2->rx_match_count * VAR_0 * 2;
}
