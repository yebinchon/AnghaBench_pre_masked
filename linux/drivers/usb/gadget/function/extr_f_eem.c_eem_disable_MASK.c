
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {int dummy; } ;
struct TYPE_6__ {TYPE_2__* in_ep; } ;
struct f_eem {TYPE_3__ port; } ;
struct TYPE_5__ {scalar_t__ enabled; } ;
struct TYPE_4__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 struct f_eem* FUNC_1 (struct usb_function*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(struct usb_function *VAR_0)
{
 struct f_eem *VAR_1 = FUNC_1(VAR_0);
 struct usb_composite_dev *VAR_2 = VAR_0->config->cdev;

 FUNC_0(VAR_2, "eem deactivated\n");

 if (VAR_1->port.in_ep->enabled)
  FUNC_2(&VAR_1->port);
}
