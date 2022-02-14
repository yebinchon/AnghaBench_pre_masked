
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_hsdma_chan {scalar_t__ desc; } ;
struct TYPE_2__ {int dev; } ;
struct mtk_hsdam_engine {TYPE_1__ ddev; struct mtk_hsdma_chan* chan; int chan_issued; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtk_hsdam_engine*,struct mtk_hsdma_chan*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mtk_hsdam_engine *VAR_0)
{
 struct mtk_hsdma_chan *VAR_1;

 if (FUNC_2(0, &VAR_0->chan_issued)) {
  VAR_1 = &VAR_0->chan[0];
  if (VAR_1->desc)
   FUNC_1(VAR_0, VAR_1);
  else
   FUNC_0(VAR_0->ddev.dev, "chan 0 no desc to issue\n");
 }
}
