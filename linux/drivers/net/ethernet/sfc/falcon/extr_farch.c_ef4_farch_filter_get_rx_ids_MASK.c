
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ef4_nic {int filter_lock; struct ef4_farch_filter_state* filter_state; } ;
struct ef4_farch_filter_table {unsigned int size; TYPE_1__* spec; int used_bitmap; } ;
struct ef4_farch_filter_state {struct ef4_farch_filter_table* table; } ;
typedef int s32 ;
typedef enum ef4_filter_priority { ____Placeholder_ef4_filter_priority } ef4_filter_priority ;
typedef enum ef4_farch_filter_table_id { ____Placeholder_ef4_farch_filter_table_id } ef4_farch_filter_table_id ;
struct TYPE_2__ {int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (unsigned int,int ) ;

s32 FUNC_4(struct ef4_nic *VAR_3,
    enum ef4_filter_priority VAR_4,
    u32 *VAR_5, u32 VAR_6)
{
 struct ef4_farch_filter_state *VAR_7 = VAR_3->filter_state;
 enum ef4_farch_filter_table_id VAR_8;
 struct ef4_farch_filter_table *VAR_9;
 unsigned int VAR_10;
 s32 VAR_11 = 0;

 FUNC_1(&VAR_3->filter_lock);

 for (VAR_8 = VAR_1;
      VAR_8 <= VAR_0;
      VAR_8++) {
  VAR_9 = &VAR_7->table[VAR_8];
  for (VAR_10 = 0; VAR_10 < VAR_9->size; VAR_10++) {
   if (FUNC_3(VAR_10, VAR_9->used_bitmap) &&
       VAR_9->spec[VAR_10].priority == VAR_4) {
    if (VAR_11 == VAR_6) {
     VAR_11 = -VAR_2;
     goto out;
    }
    VAR_5[VAR_11++] = FUNC_0(
     &VAR_9->spec[VAR_10], VAR_10);
   }
  }
 }
out:
 FUNC_2(&VAR_3->filter_lock);

 return VAR_11;
}
