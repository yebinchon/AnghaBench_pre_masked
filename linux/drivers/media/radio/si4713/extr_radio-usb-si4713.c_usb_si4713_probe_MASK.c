
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v4l2_subdev {int ctrl_handler; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {int idProduct; int idVendor; } ;
struct TYPE_9__ {int name; int release; } ;
struct TYPE_8__ {int device_caps; int vfl_dir; int release; int * lock; int * ioctl_ops; int * fops; TYPE_4__* v4l2_dev; int name; int ctrl_handler; } ;
struct i2c_adapter {int dummy; } ;
struct si4713_usb_device {struct si4713_usb_device* buffer; TYPE_4__ v4l2_dev; TYPE_1__ vdev; int lock; struct v4l2_subdev* v4l2_subdev; struct i2c_adapter i2c_adapter; struct usb_interface* intf; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,...) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct si4713_usb_device*) ;
 struct si4713_usb_device* FUNC_5 (int ,int ) ;
 struct si4713_usb_device* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int FUNC_8 (struct si4713_usb_device*) ;
 int FUNC_9 (struct si4713_usb_device*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct usb_interface*,TYPE_4__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int *,TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;
 struct v4l2_subdev* FUNC_14 (TYPE_4__*,struct i2c_adapter*,int *,int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_16 (TYPE_1__*,int ,int) ;
 int FUNC_17 (TYPE_1__*,struct si4713_usb_device*) ;

__attribute__((used)) static int FUNC_18(struct usb_interface *VAR_13,
    const struct usb_device_id *VAR_14)
{
 struct si4713_usb_device *VAR_15;
 struct i2c_adapter *VAR_16;
 struct v4l2_subdev *VAR_17;
 int VAR_18 = -VAR_2;

 FUNC_1(&VAR_13->dev, "Si4713 development board discovered: (%04X:%04X)\n",
   VAR_14->idVendor, VAR_14->idProduct);


 VAR_15 = FUNC_6(sizeof(struct si4713_usb_device), VAR_3);
 if (VAR_15)
  VAR_15->buffer = FUNC_5(VAR_0, VAR_3);

 if (!VAR_15 || !VAR_15->buffer) {
  FUNC_0(&VAR_13->dev, "kmalloc for si4713_usb_device failed\n");
  FUNC_4(VAR_15);
  return -VAR_2;
 }

 FUNC_7(&VAR_15->lock);

 VAR_15->usbdev = FUNC_3(VAR_13);
 VAR_15->intf = VAR_13;
 FUNC_11(VAR_13, &VAR_15->v4l2_dev);

 VAR_18 = FUNC_9(VAR_15);
 if (VAR_18 < 0)
  goto err_v4l2;

 VAR_18 = FUNC_12(&VAR_13->dev, &VAR_15->v4l2_dev);
 if (VAR_18 < 0) {
  FUNC_0(&VAR_13->dev, "couldn't register v4l2_device\n");
  goto err_v4l2;
 }

 VAR_18 = FUNC_8(VAR_15);
 if (VAR_18 < 0) {
  FUNC_0(&VAR_13->dev, "could not register i2c device\n");
  goto err_i2cdev;
 }

 VAR_16 = &VAR_15->i2c_adapter;
 VAR_17 = FUNC_14(&VAR_15->v4l2_dev, VAR_16,
       &VAR_8, ((void*)0));
 VAR_15->v4l2_subdev = VAR_17;
 if (!VAR_17) {
  FUNC_0(&VAR_13->dev, "cannot get v4l2 subdevice\n");
  VAR_18 = -VAR_1;
  goto del_adapter;
 }

 VAR_15->vdev.ctrl_handler = VAR_17->ctrl_handler;
 VAR_15->v4l2_dev.release = VAR_11;
 FUNC_10(VAR_15->vdev.name, VAR_15->v4l2_dev.name,
  sizeof(VAR_15->vdev.name));
 VAR_15->vdev.v4l2_dev = &VAR_15->v4l2_dev;
 VAR_15->vdev.fops = &VAR_9;
 VAR_15->vdev.ioctl_ops = &VAR_10;
 VAR_15->vdev.lock = &VAR_15->lock;
 VAR_15->vdev.release = VAR_12;
 VAR_15->vdev.vfl_dir = VAR_6;
 VAR_15->vdev.device_caps = VAR_4 | VAR_5;

 FUNC_17(&VAR_15->vdev, VAR_15);

 VAR_18 = FUNC_16(&VAR_15->vdev, VAR_7, -1);
 if (VAR_18 < 0) {
  FUNC_0(&VAR_13->dev, "could not register video device\n");
  goto del_adapter;
 }

 FUNC_1(&VAR_13->dev, "V4L2 device registered as %s\n",
   FUNC_15(&VAR_15->vdev));

 return 0;

del_adapter:
 FUNC_2(VAR_16);
err_i2cdev:
 FUNC_13(&VAR_15->v4l2_dev);
err_v4l2:
 FUNC_4(VAR_15->buffer);
 FUNC_4(VAR_15);
 return VAR_18;
}
