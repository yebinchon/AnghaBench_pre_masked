
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdc_table {int * rxdma_channel; } ;
struct niu_rdc_tables {int first_table_num; int num_tables; struct rdc_table* tables; } ;
struct niu {size_t port; TYPE_1__* parent; } ;
struct TYPE_2__ {int * rdc_default; struct niu_rdc_tables* rdc_group_cfg; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct niu *VAR_1)
{
 struct niu_rdc_tables *VAR_2 = &VAR_1->parent->rdc_group_cfg[VAR_1->port];
 int VAR_3, VAR_4 = VAR_2->first_table_num;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_tables; VAR_3++) {
  struct rdc_table *VAR_5 = &VAR_2->tables[VAR_3];
  int VAR_6 = VAR_4 + VAR_3;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   FUNC_2(FUNC_1(VAR_6, VAR_7),
        VAR_5->rxdma_channel[VAR_7]);
 }

 FUNC_2(FUNC_0(VAR_1->port), VAR_1->parent->rdc_default[VAR_1->port]);
}
