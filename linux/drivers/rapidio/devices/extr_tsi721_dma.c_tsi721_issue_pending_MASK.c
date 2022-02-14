
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsi721_bdma_chan {int lock; scalar_t__ active; int id; } ;
struct dma_chan {TYPE_1__* dev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tsi721_bdma_chan* FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct tsi721_bdma_chan*,int *) ;
 scalar_t__ FUNC_4 (struct tsi721_bdma_chan*) ;
 int FUNC_5 (int ,int *,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_1)
{
 struct tsi721_bdma_chan *VAR_2 = FUNC_2(VAR_1);

 FUNC_5(VAR_0, &VAR_1->dev->device, "DMAC%d", VAR_2->id);

 FUNC_0(&VAR_2->lock);
 if (FUNC_4(VAR_2) && VAR_2->active) {
  FUNC_3(VAR_2, ((void*)0));
 }
 FUNC_1(&VAR_2->lock);
}
