
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dvb_usb_device {TYPE_1__* udev; struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {TYPE_2__* radiodev; int dev_lock; int v4l2dev; } ;
struct TYPE_7__ {int * lock; int (* release ) (TYPE_2__*) ;int * ioctl_ops; int vfl_dir; int name; int * v4l2_dev; int * fops; int device_caps; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,struct dvb_usb_device*) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_6)
{
 struct cxusb_medion_dev *VAR_7 = VAR_6->priv;
 int VAR_8;

 VAR_7->radiodev = FUNC_2();
 if (!VAR_7->radiodev) {
  FUNC_0(&VAR_6->udev->dev, "radio device alloc failed\n");
  return -VAR_0;
 }

 VAR_7->radiodev->device_caps = VAR_5;
 VAR_7->radiodev->fops = &VAR_3;
 VAR_7->radiodev->v4l2_dev = &VAR_7->v4l2dev;
 FUNC_1(VAR_7->radiodev->name, "cxusb", sizeof(VAR_7->radiodev->name));
 VAR_7->radiodev->vfl_dir = VAR_1;
 VAR_7->radiodev->ioctl_ops = &VAR_4;
 VAR_7->radiodev->release = FUNC_3;
 VAR_7->radiodev->lock = &VAR_7->dev_lock;
 FUNC_5(VAR_7->radiodev, VAR_6);

 VAR_8 = FUNC_4(VAR_7->radiodev, VAR_2, -1);
 if (VAR_8) {
  FUNC_0(&VAR_6->udev->dev,
   "radio device register failed, ret = %d\n", VAR_8);
  FUNC_3(VAR_7->radiodev);
  return VAR_8;
 }

 return 0;
}
