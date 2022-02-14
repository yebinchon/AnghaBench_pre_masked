
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dvb_usb_device {TYPE_1__* udev; struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_vbuffer {int dummy; } ;
struct TYPE_10__ {int io_modes; int buf_struct_size; int min_buffers_needed; int * lock; int timestamp_flags; struct dvb_usb_device* drv_priv; int * mem_ops; int * ops; int type; } ;
struct cxusb_medion_dev {TYPE_6__ videoqueue; TYPE_2__* videodev; int dev_lock; int v4l2dev; } ;
struct TYPE_9__ {int * lock; int release; int tvnorms; int * ioctl_ops; int vfl_dir; int name; TYPE_6__* queue; int * v4l2_dev; int * fops; int device_caps; } ;
struct TYPE_8__ {int dev; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int VAR_14 ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_2__*,struct dvb_usb_device*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_device *VAR_16)
{
 struct cxusb_medion_dev *VAR_17 = VAR_16->priv;
 int VAR_18;

 VAR_17->videoqueue.type = VAR_2;
 VAR_17->videoqueue.io_modes = VAR_5 | VAR_7 | VAR_6 |
  VAR_4;
 VAR_17->videoqueue.ops = &VAR_10;
 VAR_17->videoqueue.mem_ops = &VAR_14;
 VAR_17->videoqueue.drv_priv = VAR_16;
 VAR_17->videoqueue.buf_struct_size =
  sizeof(struct cxusb_medion_vbuffer);
 VAR_17->videoqueue.timestamp_flags = VAR_1;
 VAR_17->videoqueue.min_buffers_needed = 6;
 VAR_17->videoqueue.lock = &VAR_17->dev_lock;

 VAR_18 = FUNC_2(&VAR_17->videoqueue);
 if (VAR_18) {
  FUNC_0(&VAR_16->udev->dev,
   "video queue init failed, ret = %d\n", VAR_18);
  return VAR_18;
 }

 VAR_17->videodev = FUNC_4();
 if (!VAR_17->videodev) {
  FUNC_0(&VAR_16->udev->dev, "video device alloc failed\n");
  VAR_18 = -VAR_0;
  goto ret_qrelease;
 }

 VAR_17->videodev->device_caps = VAR_15;
 VAR_17->videodev->fops = &VAR_12;
 VAR_17->videodev->v4l2_dev = &VAR_17->v4l2dev;
 VAR_17->videodev->queue = &VAR_17->videoqueue;
 FUNC_1(VAR_17->videodev->name, "cxusb", sizeof(VAR_17->videodev->name));
 VAR_17->videodev->vfl_dir = VAR_8;
 VAR_17->videodev->ioctl_ops = &VAR_13;
 VAR_17->videodev->tvnorms = VAR_3;
 VAR_17->videodev->release = VAR_11;
 VAR_17->videodev->lock = &VAR_17->dev_lock;
 FUNC_7(VAR_17->videodev, VAR_16);

 VAR_18 = FUNC_6(VAR_17->videodev, VAR_9, -1);
 if (VAR_18) {
  FUNC_0(&VAR_16->udev->dev,
   "video device register failed, ret = %d\n", VAR_18);
  goto ret_vrelease;
 }

 return 0;

ret_vrelease:
 FUNC_5(VAR_17->videodev);

ret_qrelease:
 FUNC_3(&VAR_17->videoqueue);

 return VAR_18;
}
