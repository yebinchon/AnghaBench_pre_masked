
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
struct TYPE_6__ {int is_zlp_ok; int cdc_filter; TYPE_4__* out_ep; TYPE_4__* in_ep; } ;
struct f_eem {unsigned int ctrl_id; TYPE_2__ port; } ;
struct TYPE_7__ {int * desc; } ;
struct TYPE_5__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,struct usb_function*,TYPE_4__*) ;
 struct f_eem* FUNC_4 (struct usb_function*) ;
 struct net_device* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct usb_function *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 struct f_eem *VAR_5 = FUNC_4(VAR_2);
 struct usb_composite_dev *VAR_6 = VAR_2->config->cdev;
 struct net_device *VAR_7;


 if (VAR_4 != 0)
  goto fail;

 if (VAR_3 == VAR_5->ctrl_id) {
  FUNC_0(VAR_6, "reset eem\n");
  FUNC_6(&VAR_5->port);

  if (!VAR_5->port.in_ep->desc || !VAR_5->port.out_ep->desc) {
   FUNC_0(VAR_6, "init eem\n");
   if (FUNC_3(VAR_6->gadget, VAR_2,
            VAR_5->port.in_ep) ||
       FUNC_3(VAR_6->gadget, VAR_2,
            VAR_5->port.out_ep)) {
    VAR_5->port.in_ep->desc = ((void*)0);
    VAR_5->port.out_ep->desc = ((void*)0);
    goto fail;
   }
  }




  VAR_5->port.is_zlp_ok = 1;
  VAR_5->port.cdc_filter = VAR_0;
  FUNC_0(VAR_6, "activate eem\n");
  VAR_7 = FUNC_5(&VAR_5->port);
  if (FUNC_1(VAR_7))
   return FUNC_2(VAR_7);
 } else
  goto fail;

 return 0;
fail:
 return -VAR_1;
}
