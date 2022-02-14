
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {scalar_t__ status; scalar_t__ actual; int buf; int complete; } ;
struct usb_ep {int dummy; } ;
struct bcm63xx_udc {int lock; int gadget; int ep0_wq; struct usb_request* ep0_reply; struct bcm63xx_ep* bep; } ;
struct bcm63xx_req {int queue; scalar_t__ offset; } ;
struct bcm63xx_ep {TYPE_1__* iudma; int queue; struct bcm63xx_udc* udc; } ;
typedef int gfp_t ;
struct TYPE_2__ {int is_tx; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm63xx_udc*,TYPE_1__*,struct bcm63xx_req*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct bcm63xx_ep* FUNC_3 (struct usb_ep*) ;
 struct bcm63xx_req* FUNC_4 (struct usb_request*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_10(struct usb_ep *VAR_2, struct usb_request *VAR_3,
 gfp_t VAR_4)
{
 struct bcm63xx_ep *VAR_5 = FUNC_3(VAR_2);
 struct bcm63xx_udc *VAR_6 = VAR_5->udc;
 struct bcm63xx_req *VAR_7 = FUNC_4(VAR_3);
 unsigned long VAR_8;
 int VAR_9 = 0;

 if (FUNC_8(!VAR_3 || !VAR_3->complete || !VAR_3->buf || !VAR_2))
  return -VAR_0;

 VAR_3->actual = 0;
 VAR_3->status = 0;
 VAR_7->offset = 0;

 if (VAR_5 == &VAR_6->bep[0]) {

  if (VAR_6->ep0_reply)
   return -VAR_0;

  VAR_6->ep0_reply = VAR_3;
  FUNC_5(&VAR_6->ep0_wq);
  return 0;
 }

 FUNC_6(&VAR_6->lock, VAR_8);
 if (!VAR_5->iudma->enabled) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_9 = FUNC_9(&VAR_6->gadget, VAR_3, VAR_5->iudma->is_tx);
 if (VAR_9 == 0) {
  FUNC_1(&VAR_7->queue, &VAR_5->queue);
  if (FUNC_2(&VAR_5->queue))
   FUNC_0(VAR_6, VAR_5->iudma, VAR_7);
 }

out:
 FUNC_7(&VAR_6->lock, VAR_8);
 return VAR_9;
}
