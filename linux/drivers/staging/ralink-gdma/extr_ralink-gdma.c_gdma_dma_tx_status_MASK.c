
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct TYPE_11__ {int lock; } ;
struct gdma_dmaengine_chan {int next_sg; TYPE_5__ vchan; struct gdma_dma_desc* desc; } ;
struct TYPE_7__ {scalar_t__ cookie; } ;
struct TYPE_8__ {TYPE_1__ tx; } ;
struct gdma_dma_desc {scalar_t__ residue; TYPE_3__* sg; scalar_t__ cyclic; TYPE_2__ vdesc; } ;
struct dma_tx_state {scalar_t__ residue; } ;
struct dma_chan {TYPE_4__* device; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;
struct TYPE_12__ {scalar_t__ residue; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct gdma_dmaengine_chan* FUNC_4 (struct dma_chan*) ;
 TYPE_6__* FUNC_5 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_6 (TYPE_5__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_7(struct dma_chan *VAR_1,
       dma_cookie_t VAR_2,
       struct dma_tx_state *VAR_3)
{
 struct gdma_dmaengine_chan *VAR_4 = FUNC_4(VAR_1);
 struct virt_dma_desc *VAR_5;
 enum dma_status VAR_6;
 unsigned long VAR_7;
 struct gdma_dma_desc *VAR_8;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_6 == VAR_0 || !VAR_3)
  return VAR_6;

 FUNC_2(&VAR_4->vchan.lock, VAR_7);
 VAR_8 = VAR_4->desc;
 if (VAR_8 && (VAR_2 == VAR_8->vdesc.tx.cookie)) {





  if (VAR_8->cyclic)
   VAR_3->residue = VAR_8->residue -
    ((VAR_4->next_sg - 1) * VAR_8->sg[0].len);
  else
   VAR_3->residue = VAR_8->residue;
 } else {
  VAR_5 = FUNC_6(&VAR_4->vchan, VAR_2);
  if (VAR_5)
   VAR_3->residue = FUNC_5(VAR_5)->residue;
 }
 FUNC_3(&VAR_4->vchan.lock, VAR_7);

 FUNC_0(VAR_1->device->dev, "tx residue %d bytes\n", VAR_3->residue);

 return VAR_6;
}
