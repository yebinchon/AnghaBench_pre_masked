
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef enum efx_farch_filter_table_id { ____Placeholder_efx_farch_filter_table_id } efx_farch_filter_table_id ;


 unsigned int FUNC_0 (int*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static inline enum efx_farch_filter_table_id
FUNC_1(u32 VAR_3)
{
 unsigned int VAR_4 = VAR_3 >> VAR_0;

 if (VAR_4 < FUNC_0(VAR_2))
  return VAR_2[VAR_4];
 else
  return VAR_1;
}
