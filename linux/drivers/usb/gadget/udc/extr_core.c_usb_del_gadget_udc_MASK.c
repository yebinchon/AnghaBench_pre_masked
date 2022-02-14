
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; int parent; } ;
struct usb_udc {TYPE_1__ dev; struct usb_gadget_driver* driver; int list; } ;
struct usb_gadget_driver {int pending; } ;
struct usb_gadget {TYPE_1__ dev; int work; struct usb_udc* udc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (struct usb_udc*) ;

void FUNC_10(struct usb_gadget *VAR_3)
{
 struct usb_udc *VAR_4 = VAR_3->udc;

 if (!VAR_4)
  return;

 FUNC_0(VAR_3->dev.parent, "unregistering gadget\n");

 FUNC_7(&VAR_2);
 FUNC_5(&VAR_4->list);

 if (VAR_4->driver) {
  struct usb_gadget_driver *VAR_5 = VAR_4->driver;

  FUNC_9(VAR_4);
  FUNC_4(&VAR_5->pending, &VAR_1);
 }
 FUNC_8(&VAR_2);

 FUNC_3(&VAR_4->dev.kobj, VAR_0);
 FUNC_2(&VAR_3->work);
 FUNC_1(&VAR_4->dev);
 FUNC_1(&VAR_3->dev);
 FUNC_6(&VAR_3->dev, 0x00, sizeof(VAR_3->dev));
}
