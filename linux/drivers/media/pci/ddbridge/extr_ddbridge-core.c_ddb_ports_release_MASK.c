
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ddb_port {TYPE_4__* output; TYPE_2__** input; } ;
struct ddb {int port_num; struct ddb_port* port; } ;
struct TYPE_8__ {TYPE_3__* dma; } ;
struct TYPE_7__ {int work; } ;
struct TYPE_6__ {TYPE_1__* dma; } ;
struct TYPE_5__ {int work; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ddb *VAR_0)
{
 int VAR_1;
 struct ddb_port *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->port_num; VAR_1++) {
  VAR_2 = &VAR_0->port[VAR_1];
  if (VAR_2->input[0] && VAR_2->input[0]->dma)
   FUNC_0(&VAR_2->input[0]->dma->work);
  if (VAR_2->input[1] && VAR_2->input[1]->dma)
   FUNC_0(&VAR_2->input[1]->dma->work);
  if (VAR_2->output && VAR_2->output->dma)
   FUNC_0(&VAR_2->output->dma->work);
 }
}
