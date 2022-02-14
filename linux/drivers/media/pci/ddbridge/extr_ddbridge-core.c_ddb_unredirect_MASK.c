
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ddb_port {TYPE_6__* output; struct ddb_input** input; } ;
struct ddb_output {int dma; TYPE_4__* port; } ;
struct ddb_input {struct ddb_output* redo; struct ddb_input* redi; int dma; TYPE_5__* port; } ;
struct TYPE_12__ {struct ddb_input* redi; TYPE_1__* dma; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {TYPE_3__** input; TYPE_2__* output; } ;
struct TYPE_9__ {struct ddb_input* redi; } ;
struct TYPE_8__ {struct ddb_input* redi; } ;
struct TYPE_7__ {scalar_t__ running; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ddb_input*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct ddb_port *VAR_2)
{
 struct ddb_input *VAR_3, *VAR_4 = ((void*)0);
 struct ddb_output *VAR_5 = ((void*)0);




 FUNC_2(&VAR_1);
 if (VAR_2->output->dma->running) {
  FUNC_3(&VAR_1);
  return -VAR_0;
 }
 VAR_3 = VAR_2->output->redi;
 if (!VAR_3)
  goto done;
 if (VAR_2->input[0]) {
  VAR_4 = VAR_2->input[0]->redi;
  VAR_5 = VAR_2->input[0]->redo;

  if (VAR_5) {
   VAR_5->port->output->redi = VAR_3;
   if (VAR_5->port->input[0]) {
    VAR_5->port->input[0]->redi = VAR_4;
    FUNC_0(VAR_3->port->dev,
       VAR_3->dma, VAR_5->dma);
   }
   VAR_2->input[0]->redo = ((void*)0);
   FUNC_1(VAR_2->input[0]);
  }
  VAR_3->redi = VAR_4;
  VAR_2->input[0]->redi = ((void*)0);
 }
 VAR_3->redo = ((void*)0);
 VAR_2->output->redi = ((void*)0);

 FUNC_1(VAR_3);
done:
 FUNC_3(&VAR_1);
 return 0;
}
