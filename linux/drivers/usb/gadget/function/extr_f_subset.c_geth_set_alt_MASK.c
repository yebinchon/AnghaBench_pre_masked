
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {int gadget; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {TYPE_4__* out_ep; TYPE_4__* in_ep; } ;
struct f_gether {TYPE_2__ port; } ;
struct TYPE_7__ {int * desc; scalar_t__ enabled; } ;
struct TYPE_5__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ,struct usb_function*,TYPE_4__*) ;
 struct f_gether* FUNC_3 (struct usb_function*) ;
 struct net_device* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct usb_function *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct f_gether *VAR_4 = FUNC_3(VAR_1);
 struct usb_composite_dev *VAR_5 = VAR_1->config->cdev;
 struct net_device *VAR_6;



 if (VAR_4->port.in_ep->enabled) {
  FUNC_0(VAR_5, "reset cdc subset\n");
  FUNC_5(&VAR_4->port);
 }

 FUNC_0(VAR_5, "init + activate cdc subset\n");
 if (FUNC_2(VAR_5->gadget, VAR_1, VAR_4->port.in_ep) ||
     FUNC_2(VAR_5->gadget, VAR_1, VAR_4->port.out_ep)) {
  VAR_4->port.in_ep->desc = ((void*)0);
  VAR_4->port.out_ep->desc = ((void*)0);
  return -VAR_0;
 }

 VAR_6 = FUNC_4(&VAR_4->port);
 return FUNC_1(VAR_6);
}
