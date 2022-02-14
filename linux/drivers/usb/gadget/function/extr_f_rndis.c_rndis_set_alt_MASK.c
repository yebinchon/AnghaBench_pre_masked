
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
struct TYPE_9__ {int is_zlp_ok; int cdc_filter; TYPE_2__* out_ep; TYPE_2__* in_ep; } ;
struct f_rndis {unsigned int ctrl_id; unsigned int data_id; TYPE_4__ port; int params; TYPE_2__* notify; } ;
struct TYPE_8__ {int * desc; scalar_t__ enabled; } ;
struct TYPE_7__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct usb_composite_dev*,char*,unsigned int) ;
 scalar_t__ FUNC_4 (int ,struct usb_function*,TYPE_2__*) ;
 struct f_rndis* FUNC_5 (struct usb_function*) ;
 struct net_device* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,struct net_device*,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(struct usb_function *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct f_rndis *VAR_4 = FUNC_5(VAR_1);
 struct usb_composite_dev *VAR_5 = VAR_1->config->cdev;



 if (VAR_2 == VAR_4->ctrl_id) {
  FUNC_3(VAR_5, "reset rndis control %d\n", VAR_2);
  FUNC_9(VAR_4->notify);

  if (!VAR_4->notify->desc) {
   FUNC_3(VAR_5, "init rndis ctrl %d\n", VAR_2);
   if (FUNC_4(VAR_5->gadget, VAR_1, VAR_4->notify))
    goto fail;
  }
  FUNC_10(VAR_4->notify);

 } else if (VAR_2 == VAR_4->data_id) {
  struct net_device *VAR_6;

  if (VAR_4->port.in_ep->enabled) {
   FUNC_0(VAR_5, "reset rndis\n");
   FUNC_7(&VAR_4->port);
  }

  if (!VAR_4->port.in_ep->desc || !VAR_4->port.out_ep->desc) {
   FUNC_0(VAR_5, "init rndis\n");
   if (FUNC_4(VAR_5->gadget, VAR_1,
            VAR_4->port.in_ep) ||
       FUNC_4(VAR_5->gadget, VAR_1,
            VAR_4->port.out_ep)) {
    VAR_4->port.in_ep->desc = ((void*)0);
    VAR_4->port.out_ep->desc = ((void*)0);
    goto fail;
   }
  }


  VAR_4->port.is_zlp_ok = 0;
  VAR_4->port.cdc_filter = 0;

  FUNC_0(VAR_5, "RNDIS RX/TX early activation ... \n");
  VAR_6 = FUNC_6(&VAR_4->port);
  if (FUNC_1(VAR_6))
   return FUNC_2(VAR_6);

  FUNC_8(VAR_4->params, VAR_6,
    &VAR_4->port.cdc_filter);
 } else
  goto fail;

 return 0;
fail:
 return -VAR_0;
}
