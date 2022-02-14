
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct mtk_hsdma_chan {TYPE_2__ vchan; int id; int * desc; } ;
struct TYPE_4__ {int dev; } ;
struct mtk_hsdam_engine {TYPE_1__ ddev; int chan_issued; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (struct mtk_hsdam_engine*,struct mtk_hsdma_chan*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_5 (int) ;
 struct mtk_hsdam_engine* FUNC_6 (struct mtk_hsdma_chan*) ;
 int FUNC_7 (struct mtk_hsdam_engine*,int ) ;
 int FUNC_8 (struct mtk_hsdam_engine*,struct mtk_hsdma_chan*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (unsigned long,unsigned long) ;
 struct mtk_hsdma_chan* FUNC_12 (struct dma_chan*) ;
 int FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_15(struct dma_chan *VAR_5)
{
 struct mtk_hsdma_chan *VAR_6 = FUNC_12(VAR_5);
 struct mtk_hsdam_engine *VAR_7 = FUNC_6(VAR_6);
 unsigned long VAR_8;
 FUNC_0(VAR_3);

 FUNC_9(&VAR_6->vchan.lock);
 VAR_6->desc = ((void*)0);
 FUNC_1(VAR_6->id, &VAR_7->chan_issued);
 FUNC_14(&VAR_6->vchan, &VAR_3);
 FUNC_10(&VAR_6->vchan.lock);

 FUNC_13(&VAR_6->vchan, &VAR_3);


 VAR_8 = VAR_4 + FUNC_5(2000);
 while (FUNC_7(VAR_7, VAR_2) &
   (VAR_0 | VAR_1)) {
  if (FUNC_11(VAR_4, VAR_8)) {
   FUNC_4(VAR_7, VAR_6);
   FUNC_8(VAR_7, VAR_6);
   FUNC_3(VAR_7->ddev.dev, "timeout, reset it\n");
   break;
  }
  FUNC_2();
 }

 return 0;
}
