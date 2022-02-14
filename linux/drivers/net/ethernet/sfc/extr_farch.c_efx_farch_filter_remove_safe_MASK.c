
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {struct efx_farch_filter_state* filter_state; } ;
struct efx_farch_filter_table {unsigned int size; struct efx_farch_filter_spec* spec; } ;
struct efx_farch_filter_state {int lock; struct efx_farch_filter_table* table; } ;
struct efx_farch_filter_spec {int dummy; } ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;
typedef enum efx_farch_filter_table_id { ____Placeholder_efx_farch_filter_table_id } efx_farch_filter_table_id ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct efx_nic*,struct efx_farch_filter_table*,unsigned int,int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct efx_nic *VAR_2,
     enum efx_filter_priority VAR_3,
     u32 VAR_4)
{
 struct efx_farch_filter_state *VAR_5 = VAR_2->filter_state;
 enum efx_farch_filter_table_id VAR_6;
 struct efx_farch_filter_table *VAR_7;
 unsigned int VAR_8;
 struct efx_farch_filter_spec *VAR_9;
 int VAR_10;

 VAR_6 = FUNC_2(VAR_4);
 if ((unsigned int)VAR_6 >= VAR_0)
  return -VAR_1;
 VAR_7 = &VAR_5->table[VAR_6];

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8 >= VAR_7->size)
  return -VAR_1;
 FUNC_0(&VAR_5->lock);
 VAR_9 = &VAR_7->spec[VAR_8];

 VAR_10 = FUNC_3(VAR_2, VAR_7, VAR_8, VAR_3);
 FUNC_4(&VAR_5->lock);

 return VAR_10;
}
