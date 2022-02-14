
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bd_list {int num_tabs; int num_bds_table; struct bd_table** bd_table_array; int hwd_bdi; int eqp_bdi; int max_bdi; } ;
struct bdc_ep {int ep_num; int name; struct bd_list bd_list; } ;
struct bdc_bd {int * offset; } ;
struct bdc {int dev; } ;
struct bd_table {scalar_t__ dma; struct bdc_bd* start_bd; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct bdc *VAR_0, struct bdc_ep *VAR_1)
{
 struct bd_list *VAR_2 = &VAR_1->bd_list;
 struct bd_table *VAR_3;
 struct bdc_bd *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 dma_addr_t VAR_8;

 VAR_7 = 0;
 FUNC_0(VAR_0->dev,
  "Dump bd list for %s epnum:%d\n",
  VAR_1->name, VAR_1->ep_num);

 FUNC_0(VAR_0->dev,
  "tabs:%d max_bdi:%d eqp_bdi:%d hwd_bdi:%d num_bds_table:%d\n",
  VAR_2->num_tabs, VAR_2->max_bdi, VAR_2->eqp_bdi,
  VAR_2->hwd_bdi, VAR_2->num_bds_table);

 for (VAR_5 = 0; VAR_5 < VAR_2->num_tabs; VAR_5++) {
  VAR_3 = VAR_2->bd_table_array[VAR_5];
  for (VAR_6 = 0; VAR_6 < VAR_2->num_bds_table; VAR_6++) {
   VAR_4 = VAR_3->start_bd + VAR_6;
   VAR_8 = VAR_3->dma + (sizeof(struct bdc_bd) * VAR_6);
   FUNC_0(VAR_0->dev,
    "tbi:%2d bdi:%2d gbdi:%2d virt:%p phys:%llx %08x %08x %08x %08x\n",
    VAR_5, VAR_6, VAR_7++, VAR_4, (unsigned long long)VAR_8,
    FUNC_1(VAR_4->offset[0]),
    FUNC_1(VAR_4->offset[1]),
    FUNC_1(VAR_4->offset[2]),
    FUNC_1(VAR_4->offset[3]));
  }
  FUNC_0(VAR_0->dev, "\n\n");
 }
}
