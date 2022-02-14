
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct usb_function {int dummy; } ;
struct phonet_port {int lock; struct f_phonet* usb; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {TYPE_2__* config; } ;
struct f_phonet {int * out_reqv; TYPE_4__* in_ep; TYPE_4__* out_ep; struct net_device* dev; TYPE_3__ function; } ;
struct TYPE_13__ {unsigned int bInterfaceNumber; } ;
struct TYPE_12__ {unsigned int bInterfaceNumber; } ;
struct TYPE_11__ {struct f_phonet* driver_data; int * desc; scalar_t__ enabled; } ;
struct TYPE_9__ {TYPE_1__* cdev; } ;
struct TYPE_8__ {struct usb_gadget* gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_function*) ;
 scalar_t__ FUNC_1 (struct usb_gadget*,struct usb_function*,TYPE_4__*) ;
 struct f_phonet* FUNC_2 (struct usb_function*) ;
 struct phonet_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_5 (struct f_phonet*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(struct usb_function *VAR_5, unsigned VAR_6, unsigned VAR_7)
{
 struct f_phonet *VAR_8 = FUNC_2(VAR_5);
 struct usb_gadget *VAR_9 = VAR_8->function.config->cdev->gadget;

 if (VAR_6 == VAR_3.bInterfaceNumber)

  return (VAR_7 > 0) ? -VAR_0 : 0;

 if (VAR_6 == VAR_4.bInterfaceNumber) {
  struct net_device *VAR_10 = VAR_8->dev;
  struct phonet_port *VAR_11 = FUNC_3(VAR_10);


  if (VAR_7 > 1)
   return -VAR_0;

  FUNC_6(&VAR_11->lock);

  if (VAR_8->in_ep->enabled)
   FUNC_0(VAR_5);

  if (VAR_7 == 1) {
   int VAR_12;

   if (FUNC_1(VAR_9, VAR_5, VAR_8->in_ep) ||
       FUNC_1(VAR_9, VAR_5, VAR_8->out_ep)) {
    VAR_8->in_ep->desc = ((void*)0);
    VAR_8->out_ep->desc = ((void*)0);
    FUNC_7(&VAR_11->lock);
    return -VAR_0;
   }
   FUNC_8(VAR_8->out_ep);
   FUNC_8(VAR_8->in_ep);

   VAR_11->usb = VAR_8;
   VAR_8->out_ep->driver_data = VAR_8;
   VAR_8->in_ep->driver_data = VAR_8;

   FUNC_4(VAR_10);
   for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
    FUNC_5(VAR_8, VAR_8->out_reqv[VAR_12], VAR_1);
  }
  FUNC_7(&VAR_11->lock);
  return 0;
 }

 return -VAR_0;
}
