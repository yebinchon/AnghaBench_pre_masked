
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ef4_nic {int filter_lock; struct ef4_farch_filter_state* filter_state; } ;
struct ef4_filter_spec {int dummy; } ;
struct ef4_farch_filter_table {unsigned int size; int used_bitmap; struct ef4_farch_filter_spec* spec; } ;
struct ef4_farch_filter_state {struct ef4_farch_filter_table* table; } ;
struct ef4_farch_filter_spec {int priority; } ;
typedef enum ef4_filter_priority { ____Placeholder_ef4_filter_priority } ef4_filter_priority ;
typedef enum ef4_farch_filter_table_id { ____Placeholder_ef4_farch_filter_table_id } ef4_farch_filter_table_id ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ef4_filter_spec*,struct ef4_farch_filter_spec*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned int,int ) ;

int FUNC_6(struct ef4_nic *VAR_2,
         enum ef4_filter_priority VAR_3,
         u32 VAR_4, struct ef4_filter_spec *VAR_5)
{
 struct ef4_farch_filter_state *VAR_6 = VAR_2->filter_state;
 enum ef4_farch_filter_table_id VAR_7;
 struct ef4_farch_filter_table *VAR_8;
 struct ef4_farch_filter_spec *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_7 = FUNC_1(VAR_4);
 if ((unsigned int)VAR_7 >= VAR_0)
  return -VAR_1;
 VAR_8 = &VAR_6->table[VAR_7];

 VAR_10 = FUNC_0(VAR_4);
 if (VAR_10 >= VAR_8->size)
  return -VAR_1;
 VAR_9 = &VAR_8->spec[VAR_10];

 FUNC_3(&VAR_2->filter_lock);

 if (FUNC_5(VAR_10, VAR_8->used_bitmap) &&
     VAR_9->priority == VAR_3) {
  FUNC_2(VAR_5, VAR_9);
  VAR_11 = 0;
 } else {
  VAR_11 = -VAR_1;
 }

 FUNC_4(&VAR_2->filter_lock);

 return VAR_11;
}
