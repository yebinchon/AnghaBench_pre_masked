
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_device {int name; struct vb2_queue* queue; int * lock; int vfl_dir; struct v4l2_ctrl_handler* ctrl_handler; int * v4l2_dev; } ;
struct vb2_queue {int io_modes; int min_buffers_needed; int buf_struct_size; int * dev; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct cx25821_channel* drv_priv; int gfp_flags; int type; } ;
struct v4l2_ctrl_handler {int error; } ;
struct cx25821_dev {int tvnorm; char* name; size_t nr; int lock; int v4l2_dev; TYPE_3__* pci; TYPE_1__* vid_out_data; struct cx25821_channel* channels; int slock; } ;
struct TYPE_6__ {int active; } ;
struct cx25821_channel {int width; int height; scalar_t__ pixel_formats; struct vb2_queue vidq; TYPE_2__ dma_vidq; TYPE_4__* sram_channels; void* fmt; int field; TYPE_1__* out; struct v4l2_ctrl_handler hdl; struct video_device vdev; } ;
struct cx25821_buffer {int dummy; } ;
struct TYPE_8__ {int int_stat; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {struct cx25821_channel* chan; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* FUNC_1 (int ) ;
 TYPE_4__* VAR_26 ;
 struct video_device VAR_27 ;
 struct video_device VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (struct cx25821_dev*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,char*,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_8 (struct v4l2_ctrl_handler*) ;
 int FUNC_9 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 int VAR_30 ;
 int FUNC_10 (struct vb2_queue*) ;
 int * VAR_31 ;
 int FUNC_11 (struct video_device*,int ,int ) ;
 int FUNC_12 (struct video_device*,struct cx25821_channel*) ;

int FUNC_13(struct cx25821_dev *VAR_32)
{
 int VAR_33;
 int VAR_34;


 VAR_32->tvnorm = VAR_17;

 FUNC_6(&VAR_32->slock);

 for (VAR_34 = 0; VAR_34 < VAR_1 - 1; ++VAR_34) {
  struct cx25821_channel *VAR_35 = &VAR_32->channels[VAR_34];
  struct video_device *VAR_36 = &VAR_35->vdev;
  struct v4l2_ctrl_handler *VAR_37 = &VAR_35->hdl;
  struct vb2_queue *VAR_38;
  bool VAR_39 = VAR_34 > VAR_4;

  if (VAR_34 == VAR_4)
   continue;

  if (!VAR_39) {
   FUNC_7(VAR_37, 4);
   FUNC_9(VAR_37, &VAR_25,
     VAR_9, 0, 10000, 1, 6200);
   FUNC_9(VAR_37, &VAR_25,
     VAR_10, 0, 10000, 1, 5000);
   FUNC_9(VAR_37, &VAR_25,
     VAR_12, 0, 10000, 1, 5000);
   FUNC_9(VAR_37, &VAR_25,
     VAR_11, 0, 10000, 1, 5000);
   if (VAR_37->error) {
    VAR_33 = VAR_37->error;
    goto fail_unreg;
   }
   VAR_33 = FUNC_8(VAR_37);
   if (VAR_33)
    goto fail_unreg;
  } else {
   VAR_35->out = &VAR_32->vid_out_data[VAR_34 - VAR_5];
   VAR_35->out->chan = VAR_35;
  }

  VAR_35->sram_channels = &VAR_26[VAR_34];
  VAR_35->width = 720;
  VAR_35->field = VAR_13;
  if (VAR_32->tvnorm & VAR_16)
   VAR_35->height = 576;
  else
   VAR_35->height = 480;

  if (VAR_35->pixel_formats == VAR_3)
   VAR_35->fmt = FUNC_1(VAR_14);
  else
   VAR_35->fmt = FUNC_1(VAR_15);

  FUNC_4(VAR_35->sram_channels->int_stat, 0xffffffff);

  FUNC_0(&VAR_35->dma_vidq.active);

  VAR_38 = &VAR_35->vidq;

  VAR_38->type = VAR_39 ? VAR_8 :
          VAR_7;
  VAR_38->io_modes = VAR_19 | VAR_21 | VAR_18;
  VAR_38->io_modes |= VAR_39 ? VAR_22 : VAR_20;
  VAR_38->gfp_flags = VAR_0;
  VAR_38->min_buffers_needed = 2;
  VAR_38->drv_priv = VAR_35;
  VAR_38->buf_struct_size = sizeof(struct cx25821_buffer);
  VAR_38->ops = &VAR_29;
  VAR_38->mem_ops = &VAR_30;
  VAR_38->timestamp_flags = VAR_6;
  VAR_38->lock = &VAR_32->lock;
  VAR_38->dev = &VAR_32->pci->dev;

  if (!VAR_39) {
   VAR_33 = FUNC_10(VAR_38);
   if (VAR_33 < 0)
    goto fail_unreg;
  }


  *VAR_36 = VAR_39 ? VAR_28 : VAR_27;
  VAR_36->v4l2_dev = &VAR_32->v4l2_dev;
  if (!VAR_39)
   VAR_36->ctrl_handler = VAR_37;
  else
   VAR_36->vfl_dir = VAR_23;
  VAR_36->lock = &VAR_32->lock;
  VAR_36->queue = VAR_38;
  FUNC_5(VAR_36->name, sizeof(VAR_36->name), "%s #%d", VAR_32->name, VAR_34);
  FUNC_12(VAR_36, VAR_35);

  VAR_33 = FUNC_11(VAR_36, VAR_24,
         VAR_31[VAR_32->nr]);

  if (VAR_33 < 0)
   goto fail_unreg;
 }


 FUNC_3(VAR_2, 0xff);

 return 0;

fail_unreg:
 while (VAR_34 >= 0)
  FUNC_2(VAR_32, VAR_34--);
 return VAR_33;
}
