
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpif_cap_buffer {int dummy; } ;
struct video_device {int device_caps; int * lock; struct vb2_queue* queue; int vfl_dir; int * v4l2_dev; int * ioctl_ops; int * fops; int release; int name; } ;
struct vb2_queue {int io_modes; int buf_struct_size; int min_buffers_needed; int dev; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct channel_obj* drv_priv; void* type; } ;
struct TYPE_5__ {void* type; } ;
struct common_obj {int lock; int dma_queue; struct vb2_queue buffer_queue; TYPE_2__ fmt; int irqlock; } ;
struct TYPE_4__ {int dv_timings; int stdid; } ;
struct channel_obj {int channel_id; struct video_device video_dev; struct common_obj* common; TYPE_1__ video; } ;
struct TYPE_6__ {int v4l2_dev; int sd; struct channel_obj** dev; int config; } ;


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
 size_t VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int VAR_13 ;
 int FUNC_8 (struct vb2_queue*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (struct video_device*,int ,int) ;
 int FUNC_10 (struct video_device*,struct channel_obj*) ;
 int FUNC_11 (struct video_device*) ;
 int VAR_16 ;
 int FUNC_12 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_3__ VAR_19 ;
 int FUNC_13 (int ,struct channel_obj*,int ) ;
 int FUNC_14 (struct channel_obj*) ;

__attribute__((used)) static int FUNC_15(void)
{
 struct common_obj *VAR_20;
 struct video_device *VAR_21;
 struct channel_obj *VAR_22;
 struct vb2_queue *VAR_23;
 int VAR_24, VAR_25, VAR_26;

 for (VAR_24 = 0; VAR_24 < VAR_10; VAR_24++) {
  VAR_22 = VAR_19.dev[VAR_24];
  VAR_22->channel_id = VAR_24;
  VAR_20 = &(VAR_22->common[VAR_12]);
  FUNC_4(&VAR_20->irqlock);
  FUNC_3(&VAR_20->lock);


  VAR_25 = FUNC_13(VAR_19.config, VAR_22, 0);
  if (VAR_25)
   goto probe_out;


  VAR_22->video.stdid = VAR_4;
  FUNC_2(&VAR_22->video.dv_timings, 0, sizeof(VAR_22->video.dv_timings));
  VAR_20->fmt.type = VAR_1;
  FUNC_14(VAR_22);


  VAR_23 = &VAR_20->buffer_queue;
  VAR_23->type = VAR_1;
  VAR_23->io_modes = VAR_6 | VAR_7 | VAR_5;
  VAR_23->drv_priv = VAR_22;
  VAR_23->ops = &VAR_15;
  VAR_23->mem_ops = &VAR_13;
  VAR_23->buf_struct_size = sizeof(struct vpif_cap_buffer);
  VAR_23->timestamp_flags = VAR_0;
  VAR_23->min_buffers_needed = 1;
  VAR_23->lock = &VAR_20->lock;
  VAR_23->dev = VAR_16;

  VAR_25 = FUNC_8(VAR_23);
  if (VAR_25) {
   FUNC_12("vpif_capture: vb2_queue_init() failed\n");
   goto probe_out;
  }

  FUNC_0(&VAR_20->dma_queue);


  VAR_21 = &VAR_22->video_dev;
  FUNC_5(VAR_21->name, VAR_11, sizeof(VAR_21->name));
  VAR_21->release = VAR_14;
  VAR_21->fops = &VAR_17;
  VAR_21->ioctl_ops = &VAR_18;
  VAR_21->v4l2_dev = &VAR_19.v4l2_dev;
  VAR_21->vfl_dir = VAR_8;
  VAR_21->queue = VAR_23;
  VAR_21->lock = &VAR_20->lock;
  VAR_21->device_caps = VAR_3 | VAR_2;
  FUNC_10(&VAR_22->video_dev, VAR_22);
  VAR_25 = FUNC_9(VAR_21,
         VAR_9, (VAR_24 ? 1 : 0));
  if (VAR_25)
   goto probe_out;
 }

 FUNC_7(&VAR_19.v4l2_dev, "VPIF capture driver initialized\n");
 return 0;

probe_out:
 for (VAR_26 = 0; VAR_26 < VAR_24; VAR_26++) {

  VAR_22 = VAR_19.dev[VAR_26];
  VAR_20 = &VAR_22->common[VAR_26];

  FUNC_11(&VAR_22->video_dev);
 }
 FUNC_1(VAR_19.sd);
 FUNC_6(&VAR_19.v4l2_dev);

 return VAR_25;
}
