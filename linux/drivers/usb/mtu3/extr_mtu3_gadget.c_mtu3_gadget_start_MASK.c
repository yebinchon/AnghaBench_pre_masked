
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct usb_gadget_driver {int function; TYPE_2__ driver; } ;
struct usb_gadget {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct mtu3 {int lock; TYPE_3__* ssusb; struct usb_gadget_driver* gadget_driver; scalar_t__ softconnect; int dev; TYPE_1__ g; } ;
struct TYPE_6__ {scalar_t__ dr_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 struct mtu3* FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (struct mtu3*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct usb_gadget *VAR_2,
  struct usb_gadget_driver *VAR_3)
{
 struct mtu3 *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;

 if (VAR_4->gadget_driver) {
  FUNC_1(VAR_4->dev, "%s is already bound to %s\n",
   VAR_4->g.name, VAR_4->gadget_driver->driver.name);
  return -VAR_0;
 }

 FUNC_0(VAR_4->dev, "bind driver %s\n", VAR_3->function);

 FUNC_4(&VAR_4->lock, VAR_5);

 VAR_4->softconnect = 0;
 VAR_4->gadget_driver = VAR_3;

 if (VAR_4->ssusb->dr_mode == VAR_1)
  FUNC_3(VAR_4);

 FUNC_5(&VAR_4->lock, VAR_5);

 return 0;
}
