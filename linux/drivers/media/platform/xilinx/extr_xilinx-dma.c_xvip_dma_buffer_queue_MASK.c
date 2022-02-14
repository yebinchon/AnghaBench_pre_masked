
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int vb2_buf; } ;
struct xvip_dma_buffer {int queue; TYPE_5__ buf; } ;
struct TYPE_13__ {scalar_t__ type; } ;
struct TYPE_14__ {int src_sgl; int dst_sgl; int frame_size; int numf; void* src_start; int dir; void* dst_start; } ;
struct TYPE_10__ {int width; int height; scalar_t__ bytesperline; } ;
struct xvip_dma {int dma; TYPE_6__ queue; int queued_lock; int queued_bufs; TYPE_4__* xdev; TYPE_7__ xt; TYPE_3__ format; TYPE_2__* sgl; TYPE_1__* fmtinfo; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct dma_async_tx_descriptor {struct xvip_dma_buffer* callback_param; int callback; } ;
typedef void* dma_addr_t ;
struct TYPE_11__ {int dev; } ;
struct TYPE_9__ {int size; scalar_t__ icg; } ;
struct TYPE_8__ {int bpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct dma_async_tx_descriptor* FUNC_2 (int ,TYPE_7__*,int) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct vb2_v4l2_buffer* FUNC_7 (struct vb2_buffer*) ;
 struct xvip_dma_buffer* FUNC_8 (struct vb2_v4l2_buffer*) ;
 int FUNC_9 (int *,int ) ;
 void* FUNC_10 (struct vb2_buffer*,int ) ;
 struct xvip_dma* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_6__*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_13(struct vb2_buffer *VAR_7)
{
 struct vb2_v4l2_buffer *VAR_8 = FUNC_7(VAR_7);
 struct xvip_dma *VAR_9 = FUNC_11(VAR_7->vb2_queue);
 struct xvip_dma_buffer *VAR_10 = FUNC_8(VAR_8);
 struct dma_async_tx_descriptor *VAR_11;
 dma_addr_t VAR_12 = FUNC_10(VAR_7, 0);
 u32 VAR_13;

 if (VAR_9->queue.type == VAR_4) {
  VAR_13 = VAR_3 | VAR_0;
  VAR_9->xt.dir = VAR_1;
  VAR_9->xt.src_sgl = 0;
  VAR_9->xt.dst_sgl = 1;
  VAR_9->xt.dst_start = VAR_12;
 } else {
  VAR_13 = VAR_3 | VAR_0;
  VAR_9->xt.dir = VAR_2;
  VAR_9->xt.src_sgl = 1;
  VAR_9->xt.dst_sgl = 0;
  VAR_9->xt.src_start = VAR_12;
 }

 VAR_9->xt.frame_size = 1;
 VAR_9->sgl[0].size = VAR_9->format.width * VAR_9->fmtinfo->bpp;
 VAR_9->sgl[0].icg = VAR_9->format.bytesperline - VAR_9->sgl[0].size;
 VAR_9->xt.numf = VAR_9->format.height;

 VAR_11 = FUNC_2(VAR_9->dma, &VAR_9->xt, VAR_13);
 if (!VAR_11) {
  FUNC_0(VAR_9->xdev->dev, "Failed to prepare DMA transfer\n");
  FUNC_9(&VAR_10->buf.vb2_buf, VAR_5);
  return;
 }
 VAR_11->callback = VAR_6;
 VAR_11->callback_param = VAR_10;

 FUNC_5(&VAR_9->queued_lock);
 FUNC_4(&VAR_10->queue, &VAR_9->queued_bufs);
 FUNC_6(&VAR_9->queued_lock);

 FUNC_3(VAR_11);

 if (FUNC_12(&VAR_9->queue))
  FUNC_1(VAR_9->dma);
}
