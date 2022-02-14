
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {struct ef4_farch_filter_state* filter_state; } ;
struct ef4_farch_filter_state {TYPE_1__* table; } ;
typedef enum ef4_farch_filter_table_id { ____Placeholder_ef4_farch_filter_table_id } ef4_farch_filter_table_id ;
struct TYPE_2__ {int spec; struct ef4_farch_filter_state* used_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ef4_farch_filter_state*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ef4_nic *VAR_1)
{
 struct ef4_farch_filter_state *VAR_2 = VAR_1->filter_state;
 enum ef4_farch_filter_table_id VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_2->table[VAR_3].used_bitmap);
  FUNC_1(VAR_2->table[VAR_3].spec);
 }
 FUNC_0(VAR_2);
}
