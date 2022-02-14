
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct gdma_dmaengine_chan {TYPE_2__ vchan; int id; int desc; } ;
struct TYPE_3__ {int dev; } ;
struct gdma_dma_dev {TYPE_1__ ddev; int task; int chan_issued; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct gdma_dma_dev* FUNC_1 (struct gdma_dmaengine_chan*) ;
 scalar_t__ FUNC_2 (struct gdma_dmaengine_chan*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 struct gdma_dmaengine_chan* FUNC_7 (struct dma_chan*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(struct dma_chan *VAR_0)
{
 struct gdma_dmaengine_chan *VAR_1 = FUNC_7(VAR_0);
 struct gdma_dma_dev *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;

 FUNC_4(&VAR_1->vchan.lock, VAR_3);
 if (FUNC_8(&VAR_1->vchan) && !VAR_1->desc) {
  if (FUNC_2(VAR_1)) {
   FUNC_3(VAR_1->id, &VAR_2->chan_issued);
   FUNC_6(&VAR_2->task);
  } else {
   FUNC_0(VAR_2->ddev.dev, "chan %d no desc to issue\n",
    VAR_1->id);
  }
 }
 FUNC_5(&VAR_1->vchan.lock, VAR_3);
}
