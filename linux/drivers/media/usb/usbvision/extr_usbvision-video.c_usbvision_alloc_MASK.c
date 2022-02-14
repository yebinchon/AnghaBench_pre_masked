
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ctrl_handler; } ;
struct usb_usbvision {TYPE_1__ v4l2_dev; int hdl; int ctrl_urb; int v4l2_lock; struct usb_device* dev; } ;
struct usb_interface {int dev; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_usbvision*) ;
 struct usb_usbvision* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static struct usb_usbvision *FUNC_8(struct usb_device *VAR_2,
          struct usb_interface *VAR_3)
{
 struct usb_usbvision *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->dev = VAR_2;
 if (FUNC_6(&VAR_3->dev, &VAR_4->v4l2_dev))
  goto err_free;

 if (FUNC_5(&VAR_4->hdl, 4))
  goto err_unreg;
 VAR_4->v4l2_dev.ctrl_handler = &VAR_4->hdl;
 FUNC_2(&VAR_4->v4l2_lock);


 VAR_4->ctrl_urb = FUNC_3(VAR_1, VAR_0);
 if (!VAR_4->ctrl_urb)
  goto err_unreg;

 return VAR_4;

err_unreg:
 FUNC_4(&VAR_4->hdl);
 FUNC_7(&VAR_4->v4l2_dev);
err_free:
 FUNC_0(VAR_4);
 return ((void*)0);
}
