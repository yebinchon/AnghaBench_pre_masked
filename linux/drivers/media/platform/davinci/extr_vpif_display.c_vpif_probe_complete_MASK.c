
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vpif_disp_buffer {int dummy; } ;
struct video_device {int device_caps; int * lock; struct vb2_queue* queue; int vfl_dir; int * v4l2_dev; int * ioctl_ops; int * fops; int release; int name; } ;
struct vb2_queue {int io_modes; int buf_struct_size; int min_buffers_needed; int dev; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct channel_obj* drv_priv; void* type; } ;
struct TYPE_8__ {void* type; } ;
struct common_obj {int lock; int dma_queue; struct vb2_queue buffer_queue; TYPE_4__ fmt; int * next_frm; int * cur_frm; scalar_t__ cbtm_off; scalar_t__ ctop_off; scalar_t__ ybtm_off; scalar_t__ ytop_off; int * set_addr; int irqlock; } ;
struct TYPE_5__ {TYPE_4__ dv_timings; int stdid; } ;
struct channel_obj {int channel_id; struct video_device video_dev; struct common_obj* common; TYPE_1__ video; TYPE_4__ vpifparams; int sd; scalar_t__ initialized; } ;
struct TYPE_7__ {struct channel_obj** dev; int v4l2_dev; TYPE_2__* config; int * sd; } ;
struct TYPE_6__ {scalar_t__ subdev_count; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;
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
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_15 ;
 int FUNC_5 (struct vb2_queue*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (struct video_device*,int ,int) ;
 int FUNC_7 (struct video_device*,struct channel_obj*) ;
 int FUNC_8 (struct video_device*) ;
 int FUNC_9 (int,int ,char*,struct channel_obj*,struct video_device*) ;
 int VAR_18 ;
 int FUNC_10 (char*) ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_3__ VAR_21 ;
 int FUNC_11 (TYPE_2__*,struct channel_obj*,int ) ;
 int FUNC_12 (struct channel_obj*) ;

__attribute__((used)) static int FUNC_13(void)
{
 struct common_obj *VAR_22;
 struct video_device *VAR_23;
 struct channel_obj *VAR_24;
 struct vb2_queue *VAR_25;
 int VAR_26, VAR_27, VAR_28;

 for (VAR_26 = 0; VAR_26 < VAR_10; VAR_26++) {
  VAR_24 = VAR_21.dev[VAR_26];

  for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
   VAR_22 = &VAR_24->common[VAR_28];
   FUNC_3(&VAR_22->irqlock);
   FUNC_2(&VAR_22->lock);
   VAR_22->set_addr = ((void*)0);
   VAR_22->ytop_off = 0;
   VAR_22->ybtm_off = 0;
   VAR_22->ctop_off = 0;
   VAR_22->cbtm_off = 0;
   VAR_22->cur_frm = ((void*)0);
   VAR_22->next_frm = ((void*)0);
   FUNC_1(&VAR_22->fmt, 0, sizeof(VAR_22->fmt));
  }
  VAR_24->initialized = 0;
  if (VAR_21.config->subdev_count)
   VAR_24->sd = VAR_21.sd[0];
  VAR_24->channel_id = VAR_26;

  FUNC_1(&VAR_24->vpifparams, 0, sizeof(VAR_24->vpifparams));

  VAR_24->common[VAR_13].fmt.type =
      VAR_1;


  VAR_27 = FUNC_11(VAR_21.config, VAR_24, 0);
  if (VAR_27)
   goto probe_out;


  VAR_24->video.stdid = VAR_4;
  FUNC_1(&VAR_24->video.dv_timings, 0, sizeof(VAR_24->video.dv_timings));
  FUNC_12(VAR_24);


  VAR_25 = &VAR_22->buffer_queue;
  VAR_25->type = VAR_1;
  VAR_25->io_modes = VAR_6 | VAR_7 | VAR_5;
  VAR_25->drv_priv = VAR_24;
  VAR_25->ops = &VAR_17;
  VAR_25->mem_ops = &VAR_15;
  VAR_25->buf_struct_size = sizeof(struct vpif_disp_buffer);
  VAR_25->timestamp_flags = VAR_0;
  VAR_25->min_buffers_needed = 1;
  VAR_25->lock = &VAR_22->lock;
  VAR_25->dev = VAR_18;
  VAR_27 = FUNC_5(VAR_25);
  if (VAR_27) {
   FUNC_10("vpif_display: vb2_queue_init() failed\n");
   goto probe_out;
  }

  FUNC_0(&VAR_22->dma_queue);


  FUNC_9(1, VAR_14, "channel=%p,channel->video_dev=%p\n",
    VAR_24, &VAR_24->video_dev);


  VAR_23 = &VAR_24->video_dev;
  FUNC_4(VAR_23->name, VAR_11, sizeof(VAR_23->name));
  VAR_23->release = VAR_16;
  VAR_23->fops = &VAR_19;
  VAR_23->ioctl_ops = &VAR_20;
  VAR_23->v4l2_dev = &VAR_21.v4l2_dev;
  VAR_23->vfl_dir = VAR_8;
  VAR_23->queue = VAR_25;
  VAR_23->lock = &VAR_22->lock;
  VAR_23->device_caps = VAR_3 | VAR_2;
  FUNC_7(&VAR_24->video_dev, VAR_24);
  VAR_27 = FUNC_6(VAR_23, VAR_9,
         (VAR_26 ? 3 : 2));
  if (VAR_27 < 0)
   goto probe_out;
 }

 return 0;

probe_out:
 for (VAR_28 = 0; VAR_28 < VAR_26; VAR_28++) {
  VAR_24 = VAR_21.dev[VAR_28];
  VAR_22 = &VAR_24->common[VAR_28];
  FUNC_8(&VAR_24->video_dev);
 }
 return VAR_27;
}
