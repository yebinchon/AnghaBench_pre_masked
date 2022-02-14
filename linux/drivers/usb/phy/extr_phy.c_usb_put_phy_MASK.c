
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_phy {TYPE_2__* dev; } ;
struct module {int dummy; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {struct module* owner; } ;


 int FUNC_0 (struct module*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct usb_phy *VAR_0)
{
 if (VAR_0) {
  struct module *VAR_1 = VAR_0->dev->driver->owner;

  FUNC_1(VAR_0->dev);
  FUNC_0(VAR_1);
 }
}
