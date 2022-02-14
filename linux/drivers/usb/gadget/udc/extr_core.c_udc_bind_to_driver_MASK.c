
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * driver; int kobj; } ;
struct usb_udc {TYPE_2__* gadget; TYPE_4__ dev; struct usb_gadget_driver* driver; } ;
struct usb_gadget_driver {int (* bind ) (TYPE_2__*,struct usb_gadget_driver*) ;int function; int (* unbind ) (TYPE_2__*) ;int max_speed; int driver; } ;
struct TYPE_6__ {int * driver; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,char*,int ) ;
 int FUNC_1 (TYPE_4__*,char*,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,struct usb_gadget_driver*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct usb_udc*,int ) ;
 int FUNC_6 (struct usb_udc*) ;
 int FUNC_7 (struct usb_udc*) ;

__attribute__((used)) static int FUNC_8(struct usb_udc *VAR_2, struct usb_gadget_driver *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_2->dev, "registering UDC driver [%s]\n",
   VAR_3->function);

 VAR_2->driver = VAR_3;
 VAR_2->dev.driver = &VAR_3->driver;
 VAR_2->gadget->dev.driver = &VAR_3->driver;

 FUNC_5(VAR_2, VAR_3->max_speed);

 VAR_4 = VAR_3->bind(VAR_2->gadget, VAR_3);
 if (VAR_4)
  goto err1;
 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4) {
  VAR_3->unbind(VAR_2->gadget);
  goto err1;
 }
 FUNC_7(VAR_2);

 FUNC_2(&VAR_2->dev.kobj, VAR_1);
 return 0;
err1:
 if (VAR_4 != -VAR_0)
  FUNC_1(&VAR_2->dev, "failed to start %s: %d\n",
   VAR_2->driver->function, VAR_4);
 VAR_2->driver = ((void*)0);
 VAR_2->dev.driver = ((void*)0);
 VAR_2->gadget->dev.driver = ((void*)0);
 return VAR_4;
}
