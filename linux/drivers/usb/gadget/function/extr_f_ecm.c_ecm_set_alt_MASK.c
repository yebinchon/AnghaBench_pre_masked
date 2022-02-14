
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {int gadget; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int cdc_filter; int is_zlp_ok; TYPE_2__* out_ep; TYPE_2__* in_ep; } ;
struct f_ecm {unsigned int ctrl_id; unsigned int data_id; TYPE_4__ port; TYPE_2__* notify; } ;
struct TYPE_8__ {int * desc; scalar_t__ enabled; } ;
struct TYPE_7__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct usb_composite_dev*,char*,unsigned int) ;
 scalar_t__ FUNC_4 (int ,struct usb_function*,TYPE_2__*) ;
 int FUNC_5 (struct f_ecm*) ;
 struct f_ecm* FUNC_6 (struct usb_function*) ;
 int FUNC_7 (int ) ;
 struct net_device* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(struct usb_function *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 struct f_ecm *VAR_5 = FUNC_6(VAR_2);
 struct usb_composite_dev *VAR_6 = VAR_2->config->cdev;


 if (VAR_3 == VAR_5->ctrl_id) {
  if (VAR_4 != 0)
   goto fail;

  FUNC_3(VAR_6, "reset ecm control %d\n", VAR_3);
  FUNC_10(VAR_5->notify);
  if (!(VAR_5->notify->desc)) {
   FUNC_3(VAR_6, "init ecm ctrl %d\n", VAR_3);
   if (FUNC_4(VAR_6->gadget, VAR_2, VAR_5->notify))
    goto fail;
  }
  FUNC_11(VAR_5->notify);


 } else if (VAR_3 == VAR_5->data_id) {
  if (VAR_4 > 1)
   goto fail;

  if (VAR_5->port.in_ep->enabled) {
   FUNC_0(VAR_6, "reset ecm\n");
   FUNC_9(&VAR_5->port);
  }

  if (!VAR_5->port.in_ep->desc ||
      !VAR_5->port.out_ep->desc) {
   FUNC_0(VAR_6, "init ecm\n");
   if (FUNC_4(VAR_6->gadget, VAR_2,
            VAR_5->port.in_ep) ||
       FUNC_4(VAR_6->gadget, VAR_2,
            VAR_5->port.out_ep)) {
    VAR_5->port.in_ep->desc = ((void*)0);
    VAR_5->port.out_ep->desc = ((void*)0);
    goto fail;
   }
  }




  if (VAR_4 == 1) {
   struct net_device *VAR_7;




   VAR_5->port.is_zlp_ok =
    FUNC_7(VAR_6->gadget);
   VAR_5->port.cdc_filter = VAR_0;
   FUNC_0(VAR_6, "activate ecm\n");
   VAR_7 = FUNC_8(&VAR_5->port);
   if (FUNC_1(VAR_7))
    return FUNC_2(VAR_7);
  }







  FUNC_5(VAR_5);
 } else
  goto fail;

 return 0;
fail:
 return -VAR_1;
}
