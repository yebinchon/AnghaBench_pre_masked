
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {int device_caps; int * ioctl_ops; int * fops; int * lock; int release; int name; int * queue; TYPE_2__* v4l2_dev; } ;
struct TYPE_5__ {int notify; } ;
struct TYPE_6__ {int colorspace; int field; int height; int width; int pixelformat; } ;
struct rvin_dev {int id; struct video_device vdev; TYPE_2__ v4l2_dev; TYPE_3__ format; TYPE_1__* info; int lock; int queue; } ;
struct TYPE_4__ {scalar_t__ use_mc; } ;


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
 int FUNC_0 (struct rvin_dev*,TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct rvin_dev*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (struct video_device*) ;
 int VAR_13 ;
 int FUNC_5 (struct video_device*,int ,int) ;
 int FUNC_6 (struct video_device*,struct rvin_dev*) ;
 int FUNC_7 (struct rvin_dev*,char*) ;

int FUNC_8(struct rvin_dev *VAR_14)
{
 struct video_device *VAR_15 = &VAR_14->vdev;
 int VAR_16;

 VAR_14->v4l2_dev.notify = VAR_12;


 VAR_15->v4l2_dev = &VAR_14->v4l2_dev;
 VAR_15->queue = &VAR_14->queue;
 FUNC_2(VAR_15->name, sizeof(VAR_15->name), "VIN%u output", VAR_14->id);
 VAR_15->release = VAR_13;
 VAR_15->lock = &VAR_14->lock;
 VAR_15->fops = &VAR_9;
 VAR_15->device_caps = VAR_7 | VAR_6 |
  VAR_5;


 VAR_14->format.pixelformat = VAR_2;
 VAR_14->format.width = VAR_4;
 VAR_14->format.height = VAR_3;
 VAR_14->format.field = VAR_1;
 VAR_14->format.colorspace = VAR_0;

 if (VAR_14->info->use_mc) {
  VAR_15->ioctl_ops = &VAR_11;
 } else {
  VAR_15->ioctl_ops = &VAR_10;
  FUNC_1(VAR_14);
 }

 FUNC_0(VAR_14, &VAR_14->format);

 VAR_16 = FUNC_5(&VAR_14->vdev, VAR_8, -1);
 if (VAR_16) {
  FUNC_7(VAR_14, "Failed to register video device\n");
  return VAR_16;
 }

 FUNC_6(&VAR_14->vdev, VAR_14);

 FUNC_3(&VAR_14->v4l2_dev, "Device registered as %s\n",
    FUNC_4(&VAR_14->vdev));

 return VAR_16;
}
