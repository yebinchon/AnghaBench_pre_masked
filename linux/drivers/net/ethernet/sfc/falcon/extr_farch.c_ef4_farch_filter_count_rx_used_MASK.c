
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ef4_nic {int filter_lock; struct ef4_farch_filter_state* filter_state; } ;
struct ef4_farch_filter_table {unsigned int size; TYPE_1__* spec; int used_bitmap; } ;
struct ef4_farch_filter_state {struct ef4_farch_filter_table* table; } ;
typedef enum ef4_filter_priority { ____Placeholder_ef4_filter_priority } ef4_filter_priority ;
typedef enum ef4_farch_filter_table_id { ____Placeholder_ef4_farch_filter_table_id } ef4_farch_filter_table_id ;
struct TYPE_2__ {int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned int,int ) ;

u32 FUNC_3(struct ef4_nic *VAR_2,
       enum ef4_filter_priority VAR_3)
{
 struct ef4_farch_filter_state *VAR_4 = VAR_2->filter_state;
 enum ef4_farch_filter_table_id VAR_5;
 struct ef4_farch_filter_table *VAR_6;
 unsigned int VAR_7;
 u32 VAR_8 = 0;

 FUNC_0(&VAR_2->filter_lock);

 for (VAR_5 = VAR_1;
      VAR_5 <= VAR_0;
      VAR_5++) {
  VAR_6 = &VAR_4->table[VAR_5];
  for (VAR_7 = 0; VAR_7 < VAR_6->size; VAR_7++) {
   if (FUNC_2(VAR_7, VAR_6->used_bitmap) &&
       VAR_6->spec[VAR_7].priority == VAR_3)
    ++VAR_8;
  }
 }

 FUNC_1(&VAR_2->filter_lock);

 return VAR_8;
}
