
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ speed; } ;
struct usba_udc {int lock; TYPE_1__ gadget; int driver; } ;
struct usba_request {int queue; scalar_t__ last_transaction; scalar_t__ using_dma; scalar_t__ submitted; } ;
struct TYPE_4__ {scalar_t__ desc; int name; } ;
struct usba_ep {scalar_t__ state; scalar_t__ is_in; int queue; TYPE_2__ ep; scalar_t__ can_dma; struct usba_udc* udc; } ;
struct usb_request {scalar_t__ actual; int status; int length; } ;
struct usb_ep {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ,struct usba_request*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (struct usba_ep*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct usba_udc*,struct usba_ep*,struct usba_request*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct usba_ep* FUNC_6 (struct usb_ep*) ;
 struct usba_request* FUNC_7 (struct usb_request*) ;
 int FUNC_8 (struct usba_ep*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct usb_ep *VAR_11, struct usb_request *VAR_12, gfp_t VAR_13)
{
 struct usba_request *VAR_14 = FUNC_7(VAR_12);
 struct usba_ep *VAR_15 = FUNC_6(VAR_11);
 struct usba_udc *VAR_16 = VAR_15->udc;
 unsigned long VAR_17;
 int VAR_18;

 FUNC_0(VAR_2 | VAR_3 | VAR_4, "%s: queue req %p, len %u\n",
   VAR_15->ep.name, VAR_14, VAR_12->length);

 if (!VAR_16->driver || VAR_16->gadget.speed == VAR_10 ||
     !VAR_15->ep.desc)
  return -VAR_6;

 VAR_14->submitted = 0;
 VAR_14->using_dma = 0;
 VAR_14->last_transaction = 0;

 VAR_12->status = -VAR_5;
 VAR_12->actual = 0;

 if (VAR_15->can_dma)
  return FUNC_3(VAR_16, VAR_15, VAR_14, VAR_13);


 VAR_18 = -VAR_6;
 FUNC_4(&VAR_16->lock, VAR_17);
 if (VAR_15->ep.desc) {
  FUNC_2(&VAR_14->queue, &VAR_15->queue);

  if ((!FUNC_1(VAR_15) && VAR_15->is_in) ||
   (FUNC_1(VAR_15)
    && (VAR_15->state == VAR_1
     || VAR_15->state == VAR_7)))
   FUNC_8(VAR_15, VAR_0, VAR_9);
  else
   FUNC_8(VAR_15, VAR_0, VAR_8);
  VAR_18 = 0;
 }
 FUNC_5(&VAR_16->lock, VAR_17);

 return VAR_18;
}
