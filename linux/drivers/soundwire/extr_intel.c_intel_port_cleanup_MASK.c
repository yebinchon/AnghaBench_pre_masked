
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdw_cdns_dma_data {int nr_ports; TYPE_2__** port; } ;
struct TYPE_4__ {int assigned; TYPE_1__* pdi; } ;
struct TYPE_3__ {int assigned; } ;



__attribute__((used)) static void FUNC_0(struct sdw_cdns_dma_data *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_ports; VAR_1++) {
  if (VAR_0->port[VAR_1]) {
   VAR_0->port[VAR_1]->pdi->assigned = 0;
   VAR_0->port[VAR_1]->pdi = ((void*)0);
   VAR_0->port[VAR_1]->assigned = 0;
   VAR_0->port[VAR_1] = ((void*)0);
  }
 }
}
