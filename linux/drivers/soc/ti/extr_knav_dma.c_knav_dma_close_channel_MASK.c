
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knav_dma_chan {TYPE_1__* dma; int flow; int channel; int ref_count; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int name; int ref_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct knav_dma_chan*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void *VAR_1)
{
 struct knav_dma_chan *VAR_2 = VAR_1;

 if (!VAR_0) {
  FUNC_4("keystone-navigator-dma driver not registered\n");
  return;
 }

 if (FUNC_0(&VAR_2->ref_count) <= 0)
  FUNC_1(VAR_2);

 if (FUNC_0(&VAR_2->dma->ref_count) <= 0)
  FUNC_3(VAR_2->dma);

 FUNC_2(VAR_0->dev, "channel %d or flow %d closed from DMA %s\n",
   VAR_2->channel, VAR_2->flow, VAR_2->dma->name);
}
