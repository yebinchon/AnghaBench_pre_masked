
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_10__ {int name; int release; TYPE_5__* ctrl_handler; } ;
struct TYPE_11__ {int error; } ;
struct TYPE_9__ {int device_caps; int * lock; int release; int * ioctl_ops; int * fops; TYPE_3__* v4l2_dev; int name; } ;
struct amradio_device {double curfreq; struct amradio_device* buffer; TYPE_3__ v4l2_dev; TYPE_5__ hdl; TYPE_1__ vdev; struct usb_interface* intf; int usbdev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct amradio_device*) ;
 struct amradio_device* FUNC_3 (int ,int ) ;
 struct amradio_device* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_9 ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct amradio_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (struct usb_interface*,TYPE_3__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,int) ;
 int FUNC_11 (TYPE_5__*,int *,int ,int ,int,int,int) ;
 int FUNC_12 (int *,TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int VAR_14 ;
 int FUNC_14 (TYPE_1__*,int ,int ) ;
 int FUNC_15 (TYPE_1__*,struct amradio_device*) ;

__attribute__((used)) static int FUNC_16(struct usb_interface *VAR_15,
    const struct usb_device_id *VAR_16)
{
 struct amradio_device *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_4(sizeof(struct amradio_device), VAR_3);

 if (!VAR_17) {
  FUNC_0(&VAR_15->dev, "kmalloc for amradio_device failed\n");
  VAR_18 = -VAR_1;
  goto err;
 }

 VAR_17->buffer = FUNC_3(VAR_0, VAR_3);

 if (!VAR_17->buffer) {
  FUNC_0(&VAR_15->dev, "kmalloc for radio->buffer failed\n");
  VAR_18 = -VAR_1;
  goto err_nobuf;
 }

 VAR_18 = FUNC_12(&VAR_15->dev, &VAR_17->v4l2_dev);
 if (VAR_18 < 0) {
  FUNC_0(&VAR_15->dev, "couldn't register v4l2_device\n");
  goto err_v4l2;
 }

 FUNC_10(&VAR_17->hdl, 1);
 FUNC_11(&VAR_17->hdl, &VAR_10,
     VAR_7, 0, 1, 1, 1);
 if (VAR_17->hdl.error) {
  VAR_18 = VAR_17->hdl.error;
  FUNC_0(&VAR_15->dev, "couldn't register control\n");
  goto err_ctrl;
 }
 FUNC_5(&VAR_17->lock);

 VAR_17->v4l2_dev.ctrl_handler = &VAR_17->hdl;
 VAR_17->v4l2_dev.release = VAR_13;
 FUNC_6(VAR_17->vdev.name, VAR_17->v4l2_dev.name,
  sizeof(VAR_17->vdev.name));
 VAR_17->vdev.v4l2_dev = &VAR_17->v4l2_dev;
 VAR_17->vdev.fops = &VAR_11;
 VAR_17->vdev.ioctl_ops = &VAR_12;
 VAR_17->vdev.release = VAR_14;
 VAR_17->vdev.lock = &VAR_17->lock;
 VAR_17->vdev.device_caps = VAR_5 | VAR_6 |
      VAR_4;

 VAR_17->usbdev = FUNC_1(VAR_15);
 VAR_17->intf = VAR_15;
 FUNC_8(VAR_15, &VAR_17->v4l2_dev);
 VAR_17->curfreq = 95.16 * VAR_2;

 FUNC_15(&VAR_17->vdev, VAR_17);
 VAR_18 = FUNC_7(VAR_17);
 if (VAR_18)
  goto err_vdev;

 VAR_18 = FUNC_14(&VAR_17->vdev, VAR_8,
     VAR_9);
 if (VAR_18 < 0) {
  FUNC_0(&VAR_15->dev, "could not register video device\n");
  goto err_vdev;
 }

 return 0;

err_vdev:
 FUNC_9(&VAR_17->hdl);
err_ctrl:
 FUNC_13(&VAR_17->v4l2_dev);
err_v4l2:
 FUNC_2(VAR_17->buffer);
err_nobuf:
 FUNC_2(VAR_17);
err:
 return VAR_18;
}
