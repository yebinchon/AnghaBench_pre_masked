
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int speed; int name; } ;
struct xusb_udc {int lock; scalar_t__ remote_wkp; int addr; int (* write_fn ) (int ,int ,int ) ;TYPE_2__ gadget; struct usb_gadget_driver* driver; int dev; struct xusb_ep* ep; } ;
struct xusb_ep {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct usb_gadget_driver {int max_speed; TYPE_1__ driver; } ;
struct usb_gadget {int dummy; } ;
struct usb_endpoint_descriptor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct xusb_ep*,struct usb_endpoint_descriptor const*) ;
 struct usb_endpoint_descriptor VAR_3 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ,int ) ;
 struct xusb_udc* FUNC_5 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_6(struct usb_gadget *VAR_4,
        struct usb_gadget_driver *VAR_5)
{
 struct xusb_udc *VAR_6 = FUNC_5(VAR_4);
 struct xusb_ep *VAR_7 = &VAR_6->ep[VAR_2];
 const struct usb_endpoint_descriptor *VAR_8 = &VAR_3;
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_2(&VAR_6->lock, VAR_9);

 if (VAR_6->driver) {
  FUNC_1(VAR_6->dev, "%s is already bound to %s\n",
   VAR_6->gadget.name, VAR_6->driver->driver.name);
  VAR_10 = -VAR_0;
  goto err;
 }


 VAR_6->driver = VAR_5;
 VAR_6->gadget.speed = VAR_5->max_speed;


 VAR_10 = FUNC_0(VAR_7, VAR_8);


 VAR_6->write_fn(VAR_6->addr, VAR_1, 0);
 VAR_6->remote_wkp = 0;
err:
 FUNC_3(&VAR_6->lock, VAR_9);
 return VAR_10;
}
