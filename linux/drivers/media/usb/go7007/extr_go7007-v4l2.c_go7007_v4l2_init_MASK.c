
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int device_caps; scalar_t__ tvnorms; int * v4l2_dev; TYPE_2__* queue; int * lock; } ;
struct v4l2_frequency {int frequency; int type; } ;
struct go7007_buffer {int dummy; } ;
struct TYPE_4__ {int io_modes; int buf_struct_size; int * lock; int timestamp_flags; struct go7007* drv_priv; int * mem_ops; int * ops; int type; } ;
struct go7007 {int dev; TYPE_1__* board_info; int sd_video; int v4l2_dev; TYPE_2__ vidq; int serialize_lock; int queue_lock; int vidq_active; struct video_device vdev; } ;
struct TYPE_3__ {scalar_t__ num_aud_inputs; int flags; int sensor_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (int *,int ,int ,struct v4l2_frequency*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct go7007*) ;
 int FUNC_4 (struct go7007*) ;
 struct video_device VAR_31 ;
 int VAR_32 ;
 int FUNC_5 (int *) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (struct video_device*,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_10 (struct video_device*) ;
 int FUNC_11 (struct video_device*,int ,int) ;
 int FUNC_12 (struct video_device*,struct go7007*) ;

int FUNC_13(struct go7007 *VAR_39)
{
 struct video_device *VAR_40 = &VAR_39->vdev;
 int VAR_41;

 FUNC_5(&VAR_39->serialize_lock);
 FUNC_5(&VAR_39->queue_lock);

 FUNC_0(&VAR_39->vidq_active);
 VAR_39->vidq.type = VAR_9;
 VAR_39->vidq.io_modes = VAR_16 | VAR_18 | VAR_17;
 VAR_39->vidq.ops = &VAR_32;
 VAR_39->vidq.mem_ops = &VAR_37;
 VAR_39->vidq.drv_priv = VAR_39;
 VAR_39->vidq.buf_struct_size = sizeof(struct go7007_buffer);
 VAR_39->vidq.timestamp_flags = VAR_8;
 VAR_39->vidq.lock = &VAR_39->queue_lock;
 VAR_41 = FUNC_9(&VAR_39->vidq);
 if (VAR_41)
  return VAR_41;
 *VAR_40 = VAR_31;
 VAR_40->lock = &VAR_39->serialize_lock;
 VAR_40->queue = &VAR_39->vidq;
 VAR_40->device_caps = VAR_14 | VAR_11 |
       VAR_12;
 if (VAR_39->board_info->num_aud_inputs)
  VAR_40->device_caps |= VAR_10;
 if (VAR_39->board_info->flags & VAR_0)
  VAR_40->device_caps |= VAR_13;
 FUNC_12(VAR_40, VAR_39);
 VAR_40->v4l2_dev = &VAR_39->v4l2_dev;
 if (!FUNC_6(&VAR_39->v4l2_dev, 0, VAR_38, VAR_33))
  FUNC_7(VAR_40, VAR_26);
 if (!(VAR_39->board_info->flags & VAR_0)) {
  FUNC_7(VAR_40, VAR_28);
  FUNC_7(VAR_40, VAR_23);
  FUNC_7(VAR_40, VAR_30);
  FUNC_7(VAR_40, VAR_25);
 } else {
  struct v4l2_frequency VAR_42 = {
   .type = VAR_15,
   .frequency = 980,
  };

  FUNC_1(&VAR_39->v4l2_dev, VAR_36, VAR_35, &VAR_42);
 }
 if (!(VAR_39->board_info->sensor_flags & VAR_3)) {
  FUNC_7(VAR_40, VAR_24);
  FUNC_7(VAR_40, VAR_29);
  VAR_40->tvnorms = 0;
 }
 if (VAR_39->board_info->sensor_flags & VAR_2)
  FUNC_7(VAR_40, VAR_21);
 if (VAR_39->board_info->num_aud_inputs == 0) {
  FUNC_7(VAR_40, VAR_22);
  FUNC_7(VAR_40, VAR_27);
  FUNC_7(VAR_40, VAR_20);
 }

 if (VAR_39->board_info->sensor_flags & VAR_1)
  FUNC_8(VAR_39->sd_video, VAR_38, VAR_34,
    VAR_4,
    VAR_5 | VAR_7 |
    VAR_6);
 FUNC_3(VAR_39);
 if (VAR_39->board_info->sensor_flags & VAR_3)
  FUNC_4(VAR_39);
 VAR_41 = FUNC_11(VAR_40, VAR_19, -1);
 if (VAR_41 < 0)
  return VAR_41;
 FUNC_2(VAR_39->dev, "registered device %s [v4l2]\n",
   FUNC_10(VAR_40));

 return 0;
}
