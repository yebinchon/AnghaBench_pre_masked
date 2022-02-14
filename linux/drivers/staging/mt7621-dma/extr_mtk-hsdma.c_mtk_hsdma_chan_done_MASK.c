
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int node; } ;
struct mtk_hsdma_desc {scalar_t__ num_sgs; TYPE_3__ vdesc; } ;
struct TYPE_5__ {int lock; } ;
struct mtk_hsdma_chan {scalar_t__ next_sg; TYPE_2__ vchan; int id; struct mtk_hsdma_desc* desc; } ;
struct TYPE_4__ {int dev; } ;
struct mtk_hsdam_engine {int chan_issued; TYPE_1__ ddev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtk_hsdma_chan*) ;
 scalar_t__ FUNC_2 (struct mtk_hsdma_desc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(struct mtk_hsdam_engine *VAR_0,
    struct mtk_hsdma_chan *VAR_1)
{
 struct mtk_hsdma_desc *VAR_2;
 int VAR_3;

 VAR_3 = 0;
 FUNC_5(&VAR_1->vchan.lock);
 VAR_2 = VAR_1->desc;
 if (FUNC_2(VAR_2)) {
  if (VAR_1->next_sg == VAR_2->num_sgs) {
   FUNC_3(&VAR_2->vdesc.node);
   FUNC_7(&VAR_2->vdesc);
   VAR_3 = FUNC_1(VAR_1);
  }
 } else {
  FUNC_0(VAR_0->ddev.dev, "no desc to complete\n");
 }

 if (VAR_3)
  FUNC_4(VAR_1->id, &VAR_0->chan_issued);
 FUNC_6(&VAR_1->vchan.lock);
}
