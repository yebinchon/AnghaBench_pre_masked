
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct efx_nic {struct efx_farch_filter_state* filter_state; } ;
struct efx_farch_filter_table {unsigned int size; TYPE_1__* spec; int used_bitmap; } ;
struct efx_farch_filter_state {int lock; struct efx_farch_filter_table* table; } ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;
typedef enum efx_farch_filter_table_id { ____Placeholder_efx_farch_filter_table_id } efx_farch_filter_table_id ;
struct TYPE_2__ {int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *) ;

u32 FUNC_3(struct efx_nic *VAR_2,
       enum efx_filter_priority VAR_3)
{
 struct efx_farch_filter_state *VAR_4 = VAR_2->filter_state;
 enum efx_farch_filter_table_id VAR_5;
 struct efx_farch_filter_table *VAR_6;
 unsigned int VAR_7;
 u32 VAR_8 = 0;

 FUNC_0(&VAR_4->lock);

 for (VAR_5 = VAR_1;
      VAR_5 <= VAR_0;
      VAR_5++) {
  VAR_6 = &VAR_4->table[VAR_5];
  for (VAR_7 = 0; VAR_7 < VAR_6->size; VAR_7++) {
   if (FUNC_1(VAR_7, VAR_6->used_bitmap) &&
       VAR_6->spec[VAR_7].priority == VAR_3)
    ++VAR_8;
  }
 }

 FUNC_2(&VAR_4->lock);

 return VAR_8;
}
