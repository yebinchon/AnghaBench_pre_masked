
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_otg {scalar_t__ state; struct usb_gadget* gadget; TYPE_1__* usb_phy; } ;
struct usb_gadget {int dummy; } ;
struct TYPE_2__ {int notifier; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,struct usb_gadget*) ;

__attribute__((used)) static int FUNC_1(struct usb_otg *VAR_4, struct usb_gadget *VAR_5)
{
 if (!VAR_4)
  return -VAR_0;

 if (!VAR_5) {
  VAR_4->gadget = ((void*)0);
  return -VAR_0;
 }

 VAR_4->gadget = VAR_5;
 if (VAR_4->state == VAR_2)
  FUNC_0(&VAR_4->usb_phy->notifier,
        VAR_3, VAR_4->gadget);
 else
  VAR_4->state = VAR_1;
 return 0;
}
