
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct efx_filter_spec {int dummy; } ;
struct efx_ef10_filter_table {unsigned int rx_match_count; scalar_t__* rx_match_mcdi_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct efx_filter_spec const*) ;

__attribute__((used)) static int FUNC_1(struct efx_ef10_filter_table *VAR_1,
          const struct efx_filter_spec *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4;

 for (VAR_4 = 0;
      VAR_4 < VAR_1->rx_match_count;
      VAR_4++)
  if (VAR_1->rx_match_mcdi_flags[VAR_4] == VAR_3)
   return VAR_4;

 return -VAR_0;
}
