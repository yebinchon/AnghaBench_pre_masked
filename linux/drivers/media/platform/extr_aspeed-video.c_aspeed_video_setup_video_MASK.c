
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct video_device {int device_caps; int * lock; int * ioctl_ops; int release; int vfl_dir; int vfl_type; int name; struct v4l2_device* v4l2_dev; int * fops; struct vb2_queue* queue; } ;
struct vb2_queue {int io_modes; int buf_struct_size; int min_buffers_needed; int timestamp_flags; struct aspeed_video* drv_priv; int * mem_ops; int * ops; int * lock; int dev; int type; } ;
struct v4l2_device {int dev; TYPE_2__* ctrl_handler; } ;
struct aspeed_video_buffer {int dummy; } ;
struct TYPE_7__ {scalar_t__ error; } ;
struct TYPE_6__ {int quantization; int colorspace; int field; int pixelformat; } ;
struct aspeed_video {int dev; TYPE_2__ ctrl_handler; int video_lock; int v4l2_input_status; TYPE_1__ pix_fmt; struct video_device vdev; struct vb2_queue queue; struct v4l2_device v4l2_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int *,int ,int ,scalar_t__,int,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int ,int const,int ) ;
 int FUNC_7 (int ,struct v4l2_device*) ;
 int FUNC_8 (struct v4l2_device*) ;
 int VAR_25 ;
 int FUNC_9 (struct vb2_queue*) ;
 int FUNC_10 (struct vb2_queue*) ;
 int VAR_26 ;
 int FUNC_11 (struct video_device*,int ,int ) ;
 int FUNC_12 (struct video_device*,struct aspeed_video*) ;

__attribute__((used)) static int FUNC_13(struct aspeed_video *VAR_27)
{
 const u64 VAR_28 = ~(FUNC_0(VAR_13) |
      FUNC_0(VAR_12));
 struct v4l2_device *VAR_29 = &VAR_27->v4l2_dev;
 struct vb2_queue *VAR_30 = &VAR_27->queue;
 struct video_device *VAR_31 = &VAR_27->vdev;
 int VAR_32;

 VAR_27->pix_fmt.pixelformat = VAR_14;
 VAR_27->pix_fmt.field = VAR_10;
 VAR_27->pix_fmt.colorspace = VAR_9;
 VAR_27->pix_fmt.quantization = VAR_15;
 VAR_27->v4l2_input_status = VAR_11;

 VAR_32 = FUNC_7(VAR_27->dev, VAR_29);
 if (VAR_32) {
  FUNC_1(VAR_27->dev, "Failed to register v4l2 device\n");
  return VAR_32;
 }

 FUNC_4(&VAR_27->ctrl_handler, 2);
 FUNC_5(&VAR_27->ctrl_handler, &VAR_21,
     VAR_8, 0,
     VAR_0 - 1, 1, 0);
 FUNC_6(&VAR_27->ctrl_handler, &VAR_21,
          VAR_7,
          VAR_12, VAR_28,
          VAR_13);

 if (VAR_27->ctrl_handler.error) {
  FUNC_3(&VAR_27->ctrl_handler);
  FUNC_8(VAR_29);

  FUNC_1(VAR_27->dev, "Failed to init controls: %d\n",
   VAR_27->ctrl_handler.error);
  return VAR_32;
 }

 VAR_29->ctrl_handler = &VAR_27->ctrl_handler;

 VAR_30->type = VAR_3;
 VAR_30->io_modes = VAR_17 | VAR_18 | VAR_16;
 VAR_30->dev = VAR_29->dev;
 VAR_30->lock = &VAR_27->video_lock;
 VAR_30->ops = &VAR_24;
 VAR_30->mem_ops = &VAR_25;
 VAR_30->drv_priv = VAR_27;
 VAR_30->buf_struct_size = sizeof(struct aspeed_video_buffer);
 VAR_30->timestamp_flags = VAR_2;
 VAR_30->min_buffers_needed = 3;

 VAR_32 = FUNC_9(VAR_30);
 if (VAR_32) {
  FUNC_3(&VAR_27->ctrl_handler);
  FUNC_8(VAR_29);

  FUNC_1(VAR_27->dev, "Failed to init vb2 queue\n");
  return VAR_32;
 }

 VAR_31->queue = VAR_30;
 VAR_31->fops = &VAR_23;
 VAR_31->device_caps = VAR_6 | VAR_4 |
  VAR_5;
 VAR_31->v4l2_dev = VAR_29;
 FUNC_2(VAR_31->name, VAR_1, sizeof(VAR_31->name));
 VAR_31->vfl_type = VAR_20;
 VAR_31->vfl_dir = VAR_19;
 VAR_31->release = VAR_26;
 VAR_31->ioctl_ops = &VAR_22;
 VAR_31->lock = &VAR_27->video_lock;

 FUNC_12(VAR_31, VAR_27);
 VAR_32 = FUNC_11(VAR_31, VAR_20, 0);
 if (VAR_32) {
  FUNC_10(VAR_30);
  FUNC_3(&VAR_27->ctrl_handler);
  FUNC_8(VAR_29);

  FUNC_1(VAR_27->dev, "Failed to register video device\n");
  return VAR_32;
 }

 return 0;
}
