
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ddb_port {int class; TYPE_2__* output; TYPE_1__** input; } ;
struct ddb {int port_num; int pdev; struct ddb_port* port; } ;
struct TYPE_4__ {int dma; } ;
struct TYPE_3__ {int dma; } ;





 int FUNC_0 (struct ddb*) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct ddb *VAR_0)
{
 int VAR_1;
 struct ddb_port *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->port_num; VAR_1++) {
  VAR_2 = &VAR_0->port[VAR_1];
  switch (VAR_2->class) {
  case 128:
   if (VAR_2->input[0]->dma)
    if (FUNC_1(VAR_0->pdev, VAR_2->input[0]->dma, 0)
     < 0)
     return -1;
   if (VAR_2->input[1]->dma)
    if (FUNC_1(VAR_0->pdev, VAR_2->input[1]->dma, 0)
     < 0)
     return -1;
   break;
  case 130:
  case 129:
   if (VAR_2->input[0]->dma)
    if (FUNC_1(VAR_0->pdev, VAR_2->input[0]->dma, 0)
     < 0)
     return -1;
   if (VAR_2->output->dma)
    if (FUNC_1(VAR_0->pdev, VAR_2->output->dma, 1)
     < 0)
     return -1;
   break;
  default:
   break;
  }
 }
 FUNC_0(VAR_0);
 return 0;
}
