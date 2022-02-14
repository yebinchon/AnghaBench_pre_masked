
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct xvip_dma_buffer {int dummy; } ;
struct TYPE_17__ {int device_caps; int * lock; int * ioctl_ops; int release; int vfl_dir; int vfl_type; int name; TYPE_7__* queue; int * v4l2_dev; int * fops; int entity; } ;
struct TYPE_18__ {int type; int io_modes; int buf_struct_size; int timestamp_flags; TYPE_10__* dev; int * mem_ops; int * ops; struct xvip_dma* drv_priv; int * lock; } ;
struct TYPE_19__ {int flags; } ;
struct TYPE_15__ {int width; int height; int bytesperline; int sizeimage; int field; int colorspace; int pixelformat; } ;
struct TYPE_14__ {int lock; } ;
struct xvip_dma {unsigned int port; int align; struct xvip_composite_device* xdev; TYPE_5__ video; TYPE_9__* dma; TYPE_7__ queue; int lock; TYPE_8__ pad; TYPE_3__ format; TYPE_4__* fmtinfo; int queued_lock; int queued_bufs; TYPE_2__ pipe; } ;
struct xvip_composite_device {TYPE_10__* dev; int v4l2_dev; } ;
typedef int name ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_20__ {TYPE_1__* device; } ;
struct TYPE_16__ {int bpp; int fourcc; } ;
struct TYPE_13__ {int copy_align; } ;
struct TYPE_12__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (TYPE_10__*,char*) ;
 TYPE_9__* FUNC_2 (TYPE_10__*,char*) ;
 int FUNC_3 (int *,int,TYPE_8__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,unsigned int,...) ;
 int FUNC_6 (int *) ;
 int VAR_20 ;
 int FUNC_7 (TYPE_7__*) ;
 int VAR_21 ;
 int FUNC_8 (TYPE_5__*,int ,int) ;
 int FUNC_9 (TYPE_5__*,struct xvip_dma*) ;
 int FUNC_10 (struct xvip_dma*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_4__* FUNC_11 (int ) ;

int FUNC_12(struct xvip_composite_device *VAR_25, struct xvip_dma *VAR_26,
    enum v4l2_buf_type VAR_27, unsigned int VAR_28)
{
 char VAR_29[16];
 int VAR_30;

 VAR_26->xdev = VAR_25;
 VAR_26->port = VAR_28;
 FUNC_4(&VAR_26->lock);
 FUNC_4(&VAR_26->pipe.lock);
 FUNC_0(&VAR_26->queued_bufs);
 FUNC_6(&VAR_26->queued_lock);

 VAR_26->fmtinfo = FUNC_11(VAR_17);
 VAR_26->format.pixelformat = VAR_26->fmtinfo->fourcc;
 VAR_26->format.colorspace = VAR_9;
 VAR_26->format.field = VAR_10;
 VAR_26->format.width = VAR_19;
 VAR_26->format.height = VAR_18;
 VAR_26->format.bytesperline = VAR_26->format.width * VAR_26->fmtinfo->bpp;
 VAR_26->format.sizeimage = VAR_26->format.bytesperline * VAR_26->format.height;


 VAR_26->pad.flags = VAR_27 == VAR_5
         ? VAR_1 : VAR_2;

 VAR_30 = FUNC_3(&VAR_26->video.entity, 1, &VAR_26->pad);
 if (VAR_30 < 0)
  goto error;


 VAR_26->video.fops = &VAR_22;
 VAR_26->video.v4l2_dev = &VAR_25->v4l2_dev;
 VAR_26->video.queue = &VAR_26->queue;
 FUNC_5(VAR_26->video.name, sizeof(VAR_26->video.name), "%pOFn %s %u",
   VAR_25->dev->of_node,
   VAR_27 == VAR_5 ? "output" : "input",
   VAR_28);
 VAR_26->video.vfl_type = VAR_16;
 VAR_26->video.vfl_dir = VAR_27 == VAR_5
      ? VAR_14 : VAR_15;
 VAR_26->video.release = VAR_21;
 VAR_26->video.ioctl_ops = &VAR_23;
 VAR_26->video.lock = &VAR_26->lock;
 VAR_26->video.device_caps = VAR_6;
 if (VAR_27 == VAR_5)
  VAR_26->video.device_caps |= VAR_7;
 else
  VAR_26->video.device_caps |= VAR_8;

 FUNC_9(&VAR_26->video, VAR_26);
 VAR_26->queue.type = VAR_27;
 VAR_26->queue.io_modes = VAR_12 | VAR_13 | VAR_11;
 VAR_26->queue.lock = &VAR_26->lock;
 VAR_26->queue.drv_priv = VAR_26;
 VAR_26->queue.buf_struct_size = sizeof(struct xvip_dma_buffer);
 VAR_26->queue.ops = &VAR_24;
 VAR_26->queue.mem_ops = &VAR_20;
 VAR_26->queue.timestamp_flags = VAR_3
       | VAR_4;
 VAR_26->queue.dev = VAR_26->xdev->dev;
 VAR_30 = FUNC_7(&VAR_26->queue);
 if (VAR_30 < 0) {
  FUNC_1(VAR_26->xdev->dev, "failed to initialize VB2 queue\n");
  goto error;
 }


 FUNC_5(VAR_29, sizeof(VAR_29), "port%u", VAR_28);
 VAR_26->dma = FUNC_2(VAR_26->xdev->dev, VAR_29);
 if (VAR_26->dma == ((void*)0)) {
  FUNC_1(VAR_26->xdev->dev, "no VDMA channel found\n");
  VAR_30 = -VAR_0;
  goto error;
 }

 VAR_26->align = 1 << VAR_26->dma->device->copy_align;

 VAR_30 = FUNC_8(&VAR_26->video, VAR_16, -1);
 if (VAR_30 < 0) {
  FUNC_1(VAR_26->xdev->dev, "failed to register video device\n");
  goto error;
 }

 return 0;

error:
 FUNC_10(VAR_26);
 return VAR_30;
}
