
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int device_caps; int * ioctl_ops; int * fops; int * lock; int release; int name; int * queue; int * v4l2_dev; } ;
struct TYPE_4__ {int height; int width; int pixelformat; } ;
struct sun4i_csi {int dev; struct video_device vdev; int subdev_fmt; TYPE_2__ fmt; int lock; int queue; int v4l; } ;
struct TYPE_3__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sun4i_csi*,TYPE_2__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct video_device*) ;
 int VAR_10 ;
 int FUNC_4 (struct video_device*,int ,int) ;
 int FUNC_5 (struct video_device*,struct sun4i_csi*) ;

int FUNC_6(struct sun4i_csi *VAR_11)
{
 struct video_device *VAR_12 = &VAR_11->vdev;
 int VAR_13;

 VAR_12->device_caps = VAR_4 | VAR_3;
 VAR_12->v4l2_dev = &VAR_11->v4l;
 VAR_12->queue = &VAR_11->queue;
 FUNC_2(VAR_12->name, VAR_2, sizeof(VAR_12->name));
 VAR_12->release = VAR_10;
 VAR_12->lock = &VAR_11->lock;


 VAR_11->fmt.pixelformat = VAR_7[0].fourcc,
 VAR_11->fmt.width = VAR_1;
 VAR_11->fmt.height = VAR_0;
 FUNC_0(VAR_11, &VAR_11->fmt);
 VAR_11->subdev_fmt = VAR_9;

 VAR_12->fops = &VAR_6;
 VAR_12->ioctl_ops = &VAR_8;
 FUNC_5(VAR_12, VAR_11);

 VAR_13 = FUNC_4(&VAR_11->vdev, VAR_5, -1);
 if (VAR_13)
  return VAR_13;

 FUNC_1(VAR_11->dev, "Device registered as %s\n",
   FUNC_3(VAR_12));

 return 0;
}
