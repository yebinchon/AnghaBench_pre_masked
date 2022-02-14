
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {int dummy; } ;
struct TYPE_8__ {TYPE_2__* in_ep; } ;
struct f_ncm {int timer_stopping; TYPE_3__* notify; TYPE_4__ port; int * netdev; } ;
struct TYPE_7__ {int * desc; scalar_t__ enabled; } ;
struct TYPE_6__ {scalar_t__ enabled; } ;
struct TYPE_5__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 struct f_ncm* FUNC_1 (struct usb_function*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct usb_function *VAR_0)
{
 struct f_ncm *VAR_1 = FUNC_1(VAR_0);
 struct usb_composite_dev *VAR_2 = VAR_0->config->cdev;

 FUNC_0(VAR_2, "ncm deactivated\n");

 if (VAR_1->port.in_ep->enabled) {
  VAR_1->timer_stopping = 1;
  VAR_1->netdev = ((void*)0);
  FUNC_2(&VAR_1->port);
 }

 if (VAR_1->notify->enabled) {
  FUNC_3(VAR_1->notify);
  VAR_1->notify->desc = ((void*)0);
 }
}
