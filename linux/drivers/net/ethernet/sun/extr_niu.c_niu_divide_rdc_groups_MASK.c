
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdc_table {int* rxdma_channel; } ;
struct niu_rdc_tables {int first_table_num; int num_tables; struct rdc_table* tables; } ;
struct niu_parent {int num_ports; int* rxchan_per_port; int* rdc_default; int index; struct niu_rdc_tables* rdc_group_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct niu_parent *VAR_2,
      int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = VAR_2->num_ports;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = 0;
 VAR_8 = VAR_0 / VAR_6;

 VAR_9 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  struct niu_rdc_tables *VAR_10 = &VAR_2->rdc_group_cfg[VAR_5];
  int VAR_11, VAR_12 = VAR_2->rxchan_per_port[VAR_5];
  int VAR_13;

  VAR_10->first_table_num = VAR_7;
  VAR_10->num_tables = VAR_8;
  VAR_13 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_10->num_tables; VAR_11++) {
   struct rdc_table *VAR_14 = &VAR_10->tables[VAR_11];
   int VAR_15;

   FUNC_1("niu%d: Port %d RDC tbl(%d) [ ",
    VAR_2->index, VAR_5, VAR_10->first_table_num + VAR_11);
   for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
    VAR_14->rxdma_channel[VAR_15] =
     VAR_9 + VAR_13;

    FUNC_0("%d ", VAR_14->rxdma_channel[VAR_15]);

    if (++VAR_13 == VAR_12)
     VAR_13 = 0;
   }
   FUNC_0("]\n");
  }

  VAR_2->rdc_default[VAR_5] = VAR_9;

  VAR_9 += VAR_12;
  VAR_7 += VAR_8;
 }
}
