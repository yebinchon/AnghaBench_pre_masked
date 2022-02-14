
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int filter_lock; struct ef4_farch_filter_state* filter_state; } ;
struct ef4_farch_filter_table {unsigned int step; unsigned int size; scalar_t__ offset; int * spec; int used_bitmap; } ;
struct ef4_farch_filter_state {struct ef4_farch_filter_table* table; } ;
typedef enum ef4_farch_filter_table_id { ____Placeholder_ef4_farch_filter_table_id } ef4_farch_filter_table_id ;
typedef int ef4_oword_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (struct ef4_nic*,int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned int,int ) ;

void FUNC_7(struct ef4_nic *VAR_1)
{
 struct ef4_farch_filter_state *VAR_2 = VAR_1->filter_state;
 enum ef4_farch_filter_table_id VAR_3;
 struct ef4_farch_filter_table *VAR_4;
 ef4_oword_t VAR_5;
 unsigned int VAR_6;

 FUNC_4(&VAR_1->filter_lock);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = &VAR_2->table[VAR_3];


  if (VAR_4->step == 0)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_4->size; VAR_6++) {
   if (!FUNC_6(VAR_6, VAR_4->used_bitmap))
    continue;
   FUNC_0(&VAR_5, &VAR_4->spec[VAR_6]);
   FUNC_3(VAR_1, &VAR_5,
       VAR_4->offset + VAR_4->step * VAR_6);
  }
 }

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);

 FUNC_5(&VAR_1->filter_lock);
}
