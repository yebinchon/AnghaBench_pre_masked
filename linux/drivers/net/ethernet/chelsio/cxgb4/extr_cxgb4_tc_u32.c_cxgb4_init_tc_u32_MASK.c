
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxgb4_tc_u32_table {unsigned int size; struct cxgb4_link* table; } ;
struct cxgb4_link {struct cxgb4_tc_u32_table* tid_map; } ;
struct TYPE_2__ {unsigned int nftids; } ;
struct adapter {TYPE_1__ tids; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct cxgb4_tc_u32_table*,unsigned int) ;
 struct cxgb4_tc_u32_table* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct cxgb4_tc_u32_table*) ;
 struct cxgb4_tc_u32_table* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct cxgb4_tc_u32_table*,int ,unsigned int) ;
 int VAR_1 ;

struct cxgb4_tc_u32_table *FUNC_6(struct adapter *VAR_2)
{
 unsigned int VAR_3 = VAR_2->tids.nftids;
 struct cxgb4_tc_u32_table *VAR_4;
 unsigned int VAR_5;

 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_4(FUNC_5(VAR_4, VAR_1, VAR_3), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->size = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_4->size; VAR_5++) {
  struct cxgb4_link *VAR_6 = &VAR_4->table[VAR_5];
  unsigned int VAR_7;

  VAR_7 = FUNC_0(VAR_3);
  VAR_6->tid_map = FUNC_2(VAR_7, sizeof(unsigned long),
      VAR_0);
  if (!VAR_6->tid_map)
   goto out_no_mem;
  FUNC_1(VAR_6->tid_map, VAR_3);
 }

 return VAR_4;

out_no_mem:
 for (VAR_5 = 0; VAR_5 < VAR_4->size; VAR_5++) {
  struct cxgb4_link *VAR_8 = &VAR_4->table[VAR_5];

  if (VAR_8->tid_map)
   FUNC_3(VAR_8->tid_map);
 }

 if (VAR_4)
  FUNC_3(VAR_4);

 return ((void*)0);
}
