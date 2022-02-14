
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_farch_filter_state* filter_state; } ;
struct efx_farch_filter_table {unsigned int step; unsigned int size; scalar_t__ offset; int * spec; int used_bitmap; } ;
struct efx_farch_filter_state {int lock; struct efx_farch_filter_table* table; } ;
typedef enum efx_farch_filter_table_id { ____Placeholder_efx_farch_filter_table_id } efx_farch_filter_table_id ;
typedef int efx_oword_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*,int *,scalar_t__) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct efx_nic *VAR_1)
{
 struct efx_farch_filter_state *VAR_2 = VAR_1->filter_state;
 enum efx_farch_filter_table_id VAR_3;
 struct efx_farch_filter_table *VAR_4;
 efx_oword_t VAR_5;
 unsigned int VAR_6;

 FUNC_0(&VAR_2->lock);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = &VAR_2->table[VAR_3];


  if (VAR_4->step == 0)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_4->size; VAR_6++) {
   if (!FUNC_5(VAR_6, VAR_4->used_bitmap))
    continue;
   FUNC_1(&VAR_5, &VAR_4->spec[VAR_6]);
   FUNC_4(VAR_1, &VAR_5,
       VAR_4->offset + VAR_4->step * VAR_6);
  }
 }

 FUNC_2(VAR_1);
 FUNC_3(VAR_1);

 FUNC_6(&VAR_2->lock);
}
