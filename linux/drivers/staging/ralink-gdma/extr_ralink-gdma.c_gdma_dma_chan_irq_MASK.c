
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int lock; } ;
struct gdma_dmaengine_chan {int next_sg; TYPE_3__ vchan; int id; struct gdma_dma_desc* desc; } ;
struct TYPE_7__ {int dev; } ;
struct gdma_dma_dev {int chan_issued; TYPE_2__ ddev; } ;
struct TYPE_9__ {int node; } ;
struct gdma_dma_desc {int num_sgs; TYPE_4__ vdesc; TYPE_1__* sg; int residue; scalar_t__ cyclic; } ;
struct TYPE_6__ {scalar_t__ len; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct gdma_dmaengine_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(struct gdma_dma_dev *VAR_0,
         struct gdma_dmaengine_chan *VAR_1)
{
 struct gdma_dma_desc *VAR_2;
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = 0;
 FUNC_4(&VAR_1->vchan.lock, VAR_3);
 VAR_2 = VAR_1->desc;
 if (VAR_2) {
  if (VAR_2->cyclic) {
   FUNC_7(&VAR_2->vdesc);
   if (VAR_1->next_sg == VAR_2->num_sgs)
    VAR_1->next_sg = 0;
   VAR_4 = 1;
  } else {
   VAR_2->residue -= VAR_2->sg[VAR_1->next_sg - 1].len;
   if (VAR_1->next_sg == VAR_2->num_sgs) {
    FUNC_2(&VAR_2->vdesc.node);
    FUNC_6(&VAR_2->vdesc);
    VAR_4 = FUNC_1(VAR_1);
   } else {
    VAR_4 = 1;
   }
  }
 } else {
  FUNC_0(VAR_0->ddev.dev, "chan %d no desc to complete\n",
   VAR_1->id);
 }
 if (VAR_4)
  FUNC_3(VAR_1->id, &VAR_0->chan_issued);
 FUNC_5(&VAR_1->vchan.lock, VAR_3);
}
