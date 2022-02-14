
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xusb_udc {int lock; int gadget; scalar_t__ dma_enabled; int dev; } ;
struct TYPE_4__ {int status; int (* complete ) (TYPE_2__*,TYPE_1__*) ;scalar_t__ length; } ;
struct xusb_req {TYPE_1__ usb_req; int queue; } ;
struct TYPE_5__ {int name; } ;
struct xusb_ep {TYPE_2__ ep_usb; int is_in; scalar_t__ epnumber; struct xusb_udc* udc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,struct xusb_req*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_6(struct xusb_ep *VAR_2, struct xusb_req *VAR_3, int VAR_4)
{
 struct xusb_udc *VAR_5 = VAR_2->udc;

 FUNC_1(&VAR_3->queue);

 if (VAR_3->usb_req.status == -VAR_0)
  VAR_3->usb_req.status = VAR_4;
 else
  VAR_4 = VAR_3->usb_req.status;

 if (VAR_4 && VAR_4 != -VAR_1)
  FUNC_0(VAR_5->dev, "%s done %p, status %d\n",
   VAR_2->ep_usb.name, VAR_3, VAR_4);

 if (VAR_5->dma_enabled && VAR_2->epnumber && VAR_3->usb_req.length)
  FUNC_5(&VAR_5->gadget, &VAR_3->usb_req,
      VAR_2->is_in);

 if (VAR_3->usb_req.complete) {
  FUNC_3(&VAR_5->lock);
  VAR_3->usb_req.complete(&VAR_2->ep_usb, &VAR_3->usb_req);
  FUNC_2(&VAR_5->lock);
 }
}
