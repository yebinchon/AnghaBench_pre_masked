
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsi721_bdma_chan {int active; int tx_desc; int free_list; int tasklet; int bd_base; int id; } ;
struct dma_chan {TYPE_1__* dev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct tsi721_bdma_chan* FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (struct tsi721_bdma_chan*) ;
 int FUNC_5 (struct tsi721_bdma_chan*,int ) ;
 int FUNC_6 (struct tsi721_bdma_chan*) ;
 int FUNC_7 (int ,int *,char*,int ) ;

__attribute__((used)) static void FUNC_8(struct dma_chan *VAR_1)
{
 struct tsi721_bdma_chan *VAR_2 = FUNC_3(VAR_1);

 FUNC_7(VAR_0, &VAR_1->dev->device, "DMAC%d", VAR_2->id);

 if (!VAR_2->bd_base)
  return;

 FUNC_5(VAR_2, 0);
 VAR_2->active = 0;
 FUNC_6(VAR_2);
 FUNC_2(&VAR_2->tasklet);
 FUNC_0(&VAR_2->free_list);
 FUNC_1(VAR_2->tx_desc);
 FUNC_4(VAR_2);
}
