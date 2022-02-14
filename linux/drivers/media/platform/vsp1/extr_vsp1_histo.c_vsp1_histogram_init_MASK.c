
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct vsp1_histogram_buffer {int dummy; } ;
struct TYPE_9__ {int device_caps; TYPE_5__* queue; int * ioctl_ops; int release; int vfl_type; int name; int * fops; int * v4l2_dev; int entity; int vfl_dir; } ;
struct TYPE_10__ {int io_modes; int buf_struct_size; int dev; int timestamp_flags; int * mem_ops; int * ops; struct vsp1_histogram* drv_priv; int * lock; int type; } ;
struct TYPE_7__ {char* name; } ;
struct TYPE_8__ {int type; TYPE_1__ subdev; struct vsp1_entity_operations const* ops; } ;
struct TYPE_11__ {int flags; } ;
struct vsp1_histogram {unsigned int const* formats; unsigned int num_formats; size_t data_size; TYPE_3__ video; TYPE_5__ queue; int lock; TYPE_2__ entity; TYPE_6__ pad; int wait_queue; int irqqueue; int irqlock; int meta_format; } ;
struct vsp1_entity_operations {int dummy; } ;
struct vsp1_device {int dev; int v4l2_dev; } ;
typedef enum vsp1_entity_type { ____Placeholder_vsp1_entity_type } vsp1_entity_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
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
 int FUNC_1 (int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,TYPE_6__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (TYPE_3__*,int ,int) ;
 int FUNC_9 (TYPE_3__*,struct vsp1_histogram*) ;
 int FUNC_10 (struct vsp1_device*,TYPE_2__*,char const*,int,int *,int ) ;
 int FUNC_11 (struct vsp1_histogram*) ;

int FUNC_12(struct vsp1_device *VAR_17, struct vsp1_histogram *VAR_18,
   enum vsp1_entity_type VAR_19, const char *VAR_20,
   const struct vsp1_entity_operations *VAR_21,
   const unsigned int *VAR_22, unsigned int VAR_23,
   size_t VAR_24, u32 VAR_25)
{
 int VAR_26;

 VAR_18->formats = VAR_22;
 VAR_18->num_formats = VAR_23;
 VAR_18->data_size = VAR_24;
 VAR_18->meta_format = VAR_25;

 VAR_18->pad.flags = VAR_1;
 VAR_18->video.vfl_dir = VAR_9;

 FUNC_4(&VAR_18->lock);
 FUNC_6(&VAR_18->irqlock);
 FUNC_0(&VAR_18->irqqueue);
 FUNC_2(&VAR_18->wait_queue);


 VAR_18->entity.ops = VAR_21;
 VAR_18->entity.type = VAR_19;

 VAR_26 = FUNC_10(VAR_17, &VAR_18->entity, VAR_20, 2, &VAR_11,
          VAR_0);
 if (VAR_26 < 0)
  return VAR_26;


 VAR_26 = FUNC_3(&VAR_18->video.entity, 1, &VAR_18->pad);
 if (VAR_26 < 0)
  return VAR_26;


 VAR_18->video.v4l2_dev = &VAR_17->v4l2_dev;
 VAR_18->video.fops = &VAR_12;
 FUNC_5(VAR_18->video.name, sizeof(VAR_18->video.name),
   "%s histo", VAR_18->entity.subdev.name);
 VAR_18->video.vfl_type = VAR_10;
 VAR_18->video.release = VAR_16;
 VAR_18->video.ioctl_ops = &VAR_13;
 VAR_18->video.device_caps = VAR_4 | VAR_5;

 FUNC_9(&VAR_18->video, VAR_18);


 VAR_18->queue.type = VAR_3;
 VAR_18->queue.io_modes = VAR_7 | VAR_8 | VAR_6;
 VAR_18->queue.lock = &VAR_18->lock;
 VAR_18->queue.drv_priv = VAR_18;
 VAR_18->queue.buf_struct_size = sizeof(struct vsp1_histogram_buffer);
 VAR_18->queue.ops = &VAR_14;
 VAR_18->queue.mem_ops = &VAR_15;
 VAR_18->queue.timestamp_flags = VAR_2;
 VAR_18->queue.dev = VAR_17->dev;
 VAR_26 = FUNC_7(&VAR_18->queue);
 if (VAR_26 < 0) {
  FUNC_1(VAR_17->dev, "failed to initialize vb2 queue\n");
  goto error;
 }


 VAR_18->video.queue = &VAR_18->queue;
 VAR_26 = FUNC_8(&VAR_18->video, VAR_10, -1);
 if (VAR_26 < 0) {
  FUNC_1(VAR_17->dev, "failed to register video device\n");
  goto error;
 }

 return 0;

error:
 FUNC_11(VAR_18);
 return VAR_26;
}
