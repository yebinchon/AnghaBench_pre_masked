
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct gdma_dmaengine_chan {int id; TYPE_2__ vchan; int * desc; } ;
struct TYPE_4__ {int dev; } ;
struct gdma_dma_dev {TYPE_1__ ddev; int chan_issued; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (int ,char*,int ) ;
 struct gdma_dma_dev* FUNC_6 (struct gdma_dmaengine_chan*) ;
 int FUNC_7 (struct gdma_dma_dev*,int ) ;
 int FUNC_8 (struct gdma_dma_dev*,int ,int ) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_9 (int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;
 struct gdma_dmaengine_chan* FUNC_13 (struct dma_chan*) ;
 int FUNC_14 (TYPE_2__*,int *) ;
 int FUNC_15 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_16(struct dma_chan *VAR_3)
{
 struct gdma_dmaengine_chan *VAR_4 = FUNC_13(VAR_3);
 struct gdma_dma_dev *VAR_5 = FUNC_6(VAR_4);
 unsigned long VAR_6, VAR_7;
 FUNC_1(VAR_1);
 int VAR_8 = 0;

 FUNC_10(&VAR_4->vchan.lock, VAR_6);
 VAR_4->desc = ((void*)0);
 FUNC_2(VAR_4->id, &VAR_5->chan_issued);
 FUNC_15(&VAR_4->vchan, &VAR_1);
 FUNC_11(&VAR_4->vchan.lock, VAR_6);

 FUNC_14(&VAR_4->vchan, &VAR_1);


 VAR_7 = VAR_2 + FUNC_9(5000);
 while (FUNC_7(VAR_5, FUNC_0(VAR_4->id)) &
   VAR_0) {
  if (FUNC_12(VAR_2, VAR_7)) {
   FUNC_5(VAR_5->ddev.dev, "chan %d wait timeout\n",
    VAR_4->id);

   FUNC_8(VAR_5, FUNC_0(VAR_4->id), 0);
   break;
  }
  FUNC_3();
  VAR_8++;
 }

 if (VAR_8)
  FUNC_4(VAR_5->ddev.dev, "terminate chan %d loops %d\n",
   VAR_4->id, VAR_8);

 return 0;
}
