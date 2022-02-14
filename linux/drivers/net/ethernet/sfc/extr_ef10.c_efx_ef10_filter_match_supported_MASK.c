
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_ef10_filter_table {unsigned int rx_match_count; int * rx_match_mcdi_flags; } ;
typedef enum efx_filter_match_flags { ____Placeholder_efx_filter_match_flags } efx_filter_match_flags ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static bool FUNC_1(struct efx_ef10_filter_table *VAR_0,
         bool VAR_1,
         enum efx_filter_match_flags VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0;
      VAR_3 < VAR_0->rx_match_count;
      VAR_3++) {
  VAR_4 = FUNC_0(VAR_1,
    VAR_0->rx_match_mcdi_flags[VAR_3]);
  if (VAR_4 == VAR_2)
   return 1;
 }

 return 0;
}
