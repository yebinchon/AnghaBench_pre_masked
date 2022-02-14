
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_otg {TYPE_2__* gadget; } ;
struct otg_fsm {struct usb_otg* otg; } ;
struct device {TYPE_1__* driver; } ;
struct TYPE_6__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_3__ dev; } ;
struct TYPE_4__ {int (* suspend ) (struct device*,int ) ;int (* resume ) (struct device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ) ;

int FUNC_3(struct otg_fsm *VAR_2, int VAR_3)
{
 struct usb_otg *VAR_4 = VAR_2->otg;
 struct device *VAR_5;

 if (!VAR_4->gadget || !VAR_4->gadget->dev.parent)
  return -VAR_0;

 FUNC_0("gadget %s\n", VAR_3 ? "on" : "off");
 VAR_5 = VAR_4->gadget->dev.parent;

 if (VAR_3) {
  if (VAR_5->driver->resume)
   VAR_5->driver->resume(VAR_5);
 } else {
  if (VAR_5->driver->suspend)
   VAR_5->driver->suspend(VAR_5, VAR_1);
 }

 return 0;
}
