
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_device {int name; int release; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_7__ {int error; } ;
struct TYPE_6__ {int device_caps; TYPE_3__* ctrl_handler; int * lock; int release; int * ioctl_ops; int * fops; struct v4l2_device* v4l2_dev; int name; } ;
struct dsbr100_device {int curfreq; int muted; struct dsbr100_device* transfer_buffer; TYPE_3__ hdl; TYPE_1__ videodev; int usbdev; int v4l2_lock; struct v4l2_device v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct dsbr100_device*) ;
 struct dsbr100_device* FUNC_2 (int ,int ) ;
 struct dsbr100_device* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct usb_interface*,struct dsbr100_device*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,int *,int ,int ,int,int,int) ;
 int FUNC_10 (int *,struct v4l2_device*) ;
 int FUNC_11 (struct v4l2_device*) ;
 int FUNC_12 (struct v4l2_device*,char*) ;
 int VAR_14 ;
 int FUNC_13 (TYPE_1__*,int ,int ) ;
 int FUNC_14 (TYPE_1__*,struct dsbr100_device*) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_15,
    const struct usb_device_id *VAR_16)
{
 struct dsbr100_device *VAR_17;
 struct v4l2_device *VAR_18;
 int VAR_19;

 VAR_17 = FUNC_3(sizeof(struct dsbr100_device), VAR_3);

 if (!VAR_17)
  return -VAR_0;

 VAR_17->transfer_buffer = FUNC_2(VAR_4, VAR_3);

 if (!(VAR_17->transfer_buffer)) {
  FUNC_1(VAR_17);
  return -VAR_0;
 }

 VAR_18 = &VAR_17->v4l2_dev;
 VAR_18->release = VAR_13;

 VAR_19 = FUNC_10(&VAR_15->dev, VAR_18);
 if (VAR_19 < 0) {
  FUNC_12(VAR_18, "couldn't register v4l2_device\n");
  goto err_reg_dev;
 }

 FUNC_8(&VAR_17->hdl, 1);
 FUNC_9(&VAR_17->hdl, &VAR_10,
     VAR_7, 0, 1, 1, 1);
 if (VAR_17->hdl.error) {
  VAR_19 = VAR_17->hdl.error;
  FUNC_12(VAR_18, "couldn't register control\n");
  goto err_reg_ctrl;
 }
 FUNC_4(&VAR_17->v4l2_lock);
 FUNC_5(VAR_17->videodev.name, VAR_18->name,
  sizeof(VAR_17->videodev.name));
 VAR_17->videodev.v4l2_dev = VAR_18;
 VAR_17->videodev.fops = &VAR_11;
 VAR_17->videodev.ioctl_ops = &VAR_12;
 VAR_17->videodev.release = VAR_14;
 VAR_17->videodev.lock = &VAR_17->v4l2_lock;
 VAR_17->videodev.ctrl_handler = &VAR_17->hdl;
 VAR_17->videodev.device_caps = VAR_5 | VAR_6;

 VAR_17->usbdev = FUNC_0(VAR_15);
 VAR_17->curfreq = VAR_1 * VAR_2;
 VAR_17->muted = 1;

 FUNC_14(&VAR_17->videodev, VAR_17);
 FUNC_6(VAR_15, VAR_17);

 VAR_19 = FUNC_13(&VAR_17->videodev, VAR_8, VAR_9);
 if (VAR_19 == 0)
  return 0;
 FUNC_12(VAR_18, "couldn't register video device\n");

err_reg_ctrl:
 FUNC_7(&VAR_17->hdl);
 FUNC_11(VAR_18);
err_reg_dev:
 FUNC_1(VAR_17->transfer_buffer);
 FUNC_1(VAR_17);
 return VAR_19;
}
