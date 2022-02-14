
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ddb_port {TYPE_2__* output; struct ddb_input** input; } ;
struct ddb_input {TYPE_3__* dma; TYPE_1__* port; TYPE_2__* redo; struct ddb_input* redi; } ;
struct ddb {struct ddb_input* input; struct ddb_port* port; int has_dma; } ;
struct TYPE_8__ {scalar_t__ running; } ;
struct TYPE_7__ {scalar_t__ running; } ;
struct TYPE_6__ {TYPE_4__* dma; struct ddb_input* redi; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (struct ddb_port*) ;
 struct ddb** VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(u32 VAR_4, u32 VAR_5)
{
 struct ddb *VAR_6 = VAR_2[(VAR_4 >> 4) & 0x3f];
 struct ddb_input *VAR_7, *VAR_8;
 struct ddb *VAR_9 = VAR_2[(VAR_5 >> 4) & 0x3f];
 struct ddb_port *VAR_10;

 if (!VAR_6 || !VAR_9)
  return -VAR_1;
 if (!VAR_6->has_dma || !VAR_9->has_dma)
  return -VAR_1;

 VAR_10 = &VAR_9->port[VAR_5 & 0x0f];
 if (!VAR_10->output)
  return -VAR_1;
 if (FUNC_1(VAR_10))
  return -VAR_0;

 if (VAR_4 == 8)
  return 0;

 VAR_7 = &VAR_6->input[VAR_4 & 7];
 if (!VAR_7)
  return -VAR_1;

 FUNC_2(&VAR_3);
 if (VAR_10->output->dma->running || VAR_7->dma->running) {
  FUNC_3(&VAR_3);
  return -VAR_0;
 }
 VAR_8 = VAR_10->input[0];
 if (VAR_8) {
  if (VAR_7->redi) {
   VAR_8->redi = VAR_7->redi;
   VAR_7->redi = ((void*)0);
  } else {
   VAR_8->redi = VAR_7;
  }
 }
 VAR_7->redo = VAR_10->output;
 VAR_10->output->redi = VAR_7;

 FUNC_0(VAR_7->port->dev, VAR_7->dma, VAR_10->output->dma);
 FUNC_3(&VAR_3);
 return 0;
}
