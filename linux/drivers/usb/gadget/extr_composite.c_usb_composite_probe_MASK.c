
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
struct usb_gadget_driver {char* function; int max_speed; TYPE_1__ driver; } ;
struct usb_composite_driver {char* name; int max_speed; struct usb_gadget_driver gadget_driver; int bind; int dev; } ;


 int VAR_0 ;
 struct usb_gadget_driver VAR_1 ;
 int FUNC_0 (struct usb_gadget_driver*) ;

int FUNC_1(struct usb_composite_driver *VAR_2)
{
 struct usb_gadget_driver *VAR_3;

 if (!VAR_2 || !VAR_2->dev || !VAR_2->bind)
  return -VAR_0;

 if (!VAR_2->name)
  VAR_2->name = "composite";

 VAR_2->gadget_driver = VAR_1;
 VAR_3 = &VAR_2->gadget_driver;

 VAR_3->function = (char *) VAR_2->name;
 VAR_3->driver.name = VAR_2->name;
 VAR_3->max_speed = VAR_2->max_speed;

 return FUNC_0(VAR_3);
}
