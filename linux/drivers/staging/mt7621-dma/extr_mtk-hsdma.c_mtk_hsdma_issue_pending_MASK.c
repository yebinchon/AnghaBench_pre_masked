
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct mtk_hsdma_chan {TYPE_2__ vchan; int id; int desc; } ;
struct TYPE_3__ {int dev; } ;
struct mtk_hsdam_engine {TYPE_1__ ddev; int task; int chan_issued; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct mtk_hsdma_chan*) ;
 struct mtk_hsdam_engine* FUNC_2 (struct mtk_hsdma_chan*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct mtk_hsdma_chan* FUNC_7 (struct dma_chan*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(struct dma_chan *VAR_0)
{
 struct mtk_hsdma_chan *VAR_1 = FUNC_7(VAR_0);
 struct mtk_hsdam_engine *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(&VAR_1->vchan.lock);
 if (FUNC_8(&VAR_1->vchan) && !VAR_1->desc) {
  if (FUNC_1(VAR_1)) {
   FUNC_3(VAR_1->id, &VAR_2->chan_issued);
   FUNC_6(&VAR_2->task);
  } else {
   FUNC_0(VAR_2->ddev.dev, "no desc to issue\n");
  }
 }
 FUNC_5(&VAR_1->vchan.lock);
}
