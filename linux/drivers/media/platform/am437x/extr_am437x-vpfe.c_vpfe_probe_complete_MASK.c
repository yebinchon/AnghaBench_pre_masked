
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ctrl_handler; } ;
struct video_device {int device_caps; int * lock; struct vb2_queue* queue; int vfl_dir; TYPE_4__* v4l2_dev; int * ioctl_ops; int * fops; int release; int name; } ;
struct vb2_queue {int io_modes; int buf_struct_size; int min_buffers_needed; int dev; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct vpfe_device* drv_priv; void* type; } ;
struct TYPE_5__ {void* type; } ;
struct vpfe_device {TYPE_4__ v4l2_dev; struct video_device video_dev; int lock; int dma_queue; int pdev; struct vb2_queue buffer_queue; TYPE_3__** sd; TYPE_2__* cfg; int * current_subdev; TYPE_1__ fmt; int dma_queue_lock; } ;
struct vpfe_cap_buffer {int dummy; } ;
struct TYPE_7__ {int ctrl_handler; } ;
struct TYPE_6__ {int * sub_devs; } ;


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
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_11 ;
 int FUNC_5 (struct vb2_queue*) ;
 int VAR_12 ;
 int FUNC_6 (struct video_device*,int ,int) ;
 int FUNC_7 (struct video_device*,struct vpfe_device*) ;
 int FUNC_8 (struct vpfe_device*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (struct vpfe_device*,int ) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_10(struct vpfe_device *VAR_16)
{
 struct video_device *VAR_17;
 struct vb2_queue *VAR_18;
 int VAR_19;

 FUNC_2(&VAR_16->dma_queue_lock);
 FUNC_1(&VAR_16->lock);

 VAR_16->fmt.type = VAR_1;


 VAR_16->current_subdev = &VAR_16->cfg->sub_devs[0];
 VAR_16->v4l2_dev.ctrl_handler = VAR_16->sd[0]->ctrl_handler;

 VAR_19 = FUNC_9(VAR_16, 0);
 if (VAR_19)
  goto probe_out;


 VAR_18 = &VAR_16->buffer_queue;
 VAR_18->type = VAR_1;
 VAR_18->io_modes = VAR_6 | VAR_5 | VAR_7;
 VAR_18->drv_priv = VAR_16;
 VAR_18->ops = &VAR_15;
 VAR_18->mem_ops = &VAR_11;
 VAR_18->buf_struct_size = sizeof(struct vpfe_cap_buffer);
 VAR_18->timestamp_flags = VAR_0;
 VAR_18->lock = &VAR_16->lock;
 VAR_18->min_buffers_needed = 1;
 VAR_18->dev = VAR_16->pdev;

 VAR_19 = FUNC_5(VAR_18);
 if (VAR_19) {
  FUNC_8(VAR_16, "vb2_queue_init() failed\n");
  goto probe_out;
 }

 FUNC_0(&VAR_16->dma_queue);

 VAR_17 = &VAR_16->video_dev;
 FUNC_3(VAR_17->name, VAR_10, sizeof(VAR_17->name));
 VAR_17->release = VAR_12;
 VAR_17->fops = &VAR_13;
 VAR_17->ioctl_ops = &VAR_14;
 VAR_17->v4l2_dev = &VAR_16->v4l2_dev;
 VAR_17->vfl_dir = VAR_8;
 VAR_17->queue = VAR_18;
 VAR_17->lock = &VAR_16->lock;
 VAR_17->device_caps = VAR_4 | VAR_3 |
       VAR_2;
 FUNC_7(VAR_17, VAR_16);
 VAR_19 = FUNC_6(&VAR_16->video_dev, VAR_9, -1);
 if (VAR_19) {
  FUNC_8(VAR_16,
   "Unable to register video device.\n");
  goto probe_out;
 }

 return 0;

probe_out:
 FUNC_4(&VAR_16->v4l2_dev);
 return VAR_19;
}
