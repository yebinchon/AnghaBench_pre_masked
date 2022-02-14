
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgb4_tc_u32_table {unsigned int size; struct cxgb4_link* table; } ;
struct cxgb4_link {struct cxgb4_tc_u32_table* tid_map; } ;
struct adapter {struct cxgb4_tc_u32_table* tc_u32; } ;


 int FUNC_0 (struct cxgb4_tc_u32_table*) ;

void FUNC_1(struct adapter *VAR_0)
{
 struct cxgb4_tc_u32_table *VAR_1;
 unsigned int VAR_2;

 if (!VAR_0->tc_u32)
  return;


 VAR_1 = VAR_0->tc_u32;
 for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++) {
  struct cxgb4_link *VAR_3 = &VAR_1->table[VAR_2];

  FUNC_0(VAR_3->tid_map);
 }
 FUNC_0(VAR_0->tc_u32);
}
