
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {struct efx_farch_filter_state* filter_state; } ;
struct efx_farch_filter_table {unsigned int size; TYPE_1__* spec; } ;
struct efx_farch_filter_state {int lock; struct efx_farch_filter_table* table; } ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;
typedef enum efx_farch_filter_table_id { ____Placeholder_efx_farch_filter_table_id } efx_farch_filter_table_id ;
struct TYPE_2__ {scalar_t__ priority; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct efx_nic*,struct efx_farch_filter_table*,unsigned int,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct efx_nic *VAR_1,
        enum efx_farch_filter_table_id VAR_2,
        enum efx_filter_priority VAR_3)
{
 struct efx_farch_filter_state *VAR_4 = VAR_1->filter_state;
 struct efx_farch_filter_table *VAR_5 = &VAR_4->table[VAR_2];
 unsigned int VAR_6;

 FUNC_0(&VAR_4->lock);
 for (VAR_6 = 0; VAR_6 < VAR_5->size; ++VAR_6) {
  if (VAR_5->spec[VAR_6].priority != VAR_0)
   FUNC_1(VAR_1, VAR_5,
      VAR_6, VAR_3);
 }
 FUNC_2(&VAR_4->lock);
}
