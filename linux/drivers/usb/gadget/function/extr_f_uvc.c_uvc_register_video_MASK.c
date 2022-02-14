
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int device_caps; int dev; int name; int * lock; int vfl_dir; int release; int * ioctl_ops; int * fops; int * v4l2_dev; } ;
struct TYPE_10__ {int mutex; } ;
struct TYPE_9__ {TYPE_1__* config; } ;
struct uvc_device {TYPE_5__ vdev; TYPE_3__ video; int v4l2_dev; TYPE_2__ func; } ;
struct usb_composite_dev {TYPE_4__* gadget; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_8__ {struct usb_composite_dev* cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 int FUNC_3 (TYPE_5__*,struct uvc_device*) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static int
FUNC_5(struct uvc_device *VAR_8)
{
 struct usb_composite_dev *VAR_9 = VAR_8->func.config->cdev;
 int VAR_10;


 VAR_8->vdev.v4l2_dev = &VAR_8->v4l2_dev;
 VAR_8->vdev.fops = &VAR_5;
 VAR_8->vdev.ioctl_ops = &VAR_6;
 VAR_8->vdev.release = VAR_7;
 VAR_8->vdev.vfl_dir = VAR_2;
 VAR_8->vdev.lock = &VAR_8->video.mutex;
 VAR_8->vdev.device_caps = VAR_1 | VAR_0;
 FUNC_1(VAR_8->vdev.name, VAR_9->gadget->name, sizeof(VAR_8->vdev.name));

 FUNC_3(&VAR_8->vdev, VAR_8);

 VAR_10 = FUNC_2(&VAR_8->vdev, VAR_3, -1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_0(&VAR_8->vdev.dev, &VAR_4);
 if (VAR_10 < 0) {
  FUNC_4(&VAR_8->vdev);
  return VAR_10;
 }

 return 0;
}
