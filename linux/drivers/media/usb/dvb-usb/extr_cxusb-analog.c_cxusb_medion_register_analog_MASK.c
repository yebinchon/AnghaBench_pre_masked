
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_usb_device {TYPE_1__* udev; struct cxusb_medion_dev* priv; } ;
struct TYPE_5__ {int release; } ;
struct cxusb_medion_dev {int width; int height; int v4l2_release; TYPE_2__ v4l2dev; int videodev; int buflist; int urbwork; int dev_lock; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (struct dvb_usb_device*) ;
 int FUNC_4 (struct dvb_usb_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct dvb_usb_device *VAR_2)
{
 struct cxusb_medion_dev *VAR_3 = VAR_2->priv;
 int VAR_4;

 FUNC_8(&VAR_3->dev_lock);

 FUNC_6(&VAR_3->v4l2_release);

 VAR_3->v4l2dev.release = VAR_0;

 VAR_4 = FUNC_10(&VAR_2->udev->dev, &VAR_3->v4l2dev);
 if (VAR_4 != 0) {
  FUNC_5(&VAR_2->udev->dev,
   "V4L2 device registration failed, ret = %d\n", VAR_4);
  FUNC_7(&VAR_3->dev_lock);
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  goto ret_unregister;

 FUNC_1(&VAR_3->urbwork, VAR_1);
 FUNC_0(&VAR_3->buflist);

 VAR_3->width = 320;
 VAR_3->height = 240;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  goto ret_unregister;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  goto ret_vunreg;

 return 0;

ret_vunreg:
 FUNC_11(VAR_3->videodev);

ret_unregister:
 FUNC_9(&VAR_3->v4l2dev);
 FUNC_12(&VAR_3->v4l2_release);

 return VAR_4;
}
