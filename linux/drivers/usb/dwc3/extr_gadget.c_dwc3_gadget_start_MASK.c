
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct usb_gadget_driver {TYPE_2__ driver; } ;
struct usb_gadget {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct dwc3 {int irq_gadget; int lock; int dev; struct usb_gadget_driver* gadget_driver; TYPE_1__ gadget; int ev_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc3*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,struct dwc3*) ;
 struct dwc3* FUNC_3 (struct usb_gadget*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,int ,char*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct usb_gadget *VAR_4,
  struct usb_gadget_driver *VAR_5)
{
 struct dwc3 *VAR_6 = FUNC_3(VAR_4);
 unsigned long VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_9 = VAR_6->irq_gadget;
 VAR_8 = FUNC_5(VAR_9, VAR_2, VAR_3,
   VAR_1, "dwc3", VAR_6->ev_buf);
 if (VAR_8) {
  FUNC_1(VAR_6->dev, "failed to request irq #%d --> %d\n",
    VAR_9, VAR_8);
  goto err0;
 }

 FUNC_6(&VAR_6->lock, VAR_7);
 if (VAR_6->gadget_driver) {
  FUNC_1(VAR_6->dev, "%s is already bound to %s\n",
    VAR_6->gadget.name,
    VAR_6->gadget_driver->driver.name);
  VAR_8 = -VAR_0;
  goto err1;
 }

 VAR_6->gadget_driver = VAR_5;

 if (FUNC_4(VAR_6->dev))
  FUNC_0(VAR_6);

 FUNC_7(&VAR_6->lock, VAR_7);

 return 0;

err1:
 FUNC_7(&VAR_6->lock, VAR_7);
 FUNC_2(VAR_9, VAR_6);

err0:
 return VAR_8;
}
