
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct dwc2_hsotg_req {int dummy; } ;
struct dwc2_hsotg_ep {TYPE_1__* req; struct dwc2_hsotg* parent; } ;
struct dwc2_hsotg {int lock; int dev; } ;
struct TYPE_2__ {struct usb_request req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct usb_ep*,struct usb_request*) ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_hsotg_ep*,struct dwc2_hsotg_req*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_hsotg_ep*) ;
 int FUNC_3 (struct dwc2_hsotg_ep*,struct dwc2_hsotg_req*) ;
 struct dwc2_hsotg_ep* FUNC_4 (struct usb_ep*) ;
 struct dwc2_hsotg_req* FUNC_5 (struct usb_request*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct usb_ep *VAR_2, struct usb_request *VAR_3)
{
 struct dwc2_hsotg_req *VAR_4 = FUNC_5(VAR_3);
 struct dwc2_hsotg_ep *VAR_5 = FUNC_4(VAR_2);
 struct dwc2_hsotg *VAR_6 = VAR_5->parent;
 unsigned long VAR_7;

 FUNC_0(VAR_6->dev, "ep_dequeue(%p,%p)\n", VAR_2, VAR_3);

 FUNC_6(&VAR_6->lock, VAR_7);

 if (!FUNC_3(VAR_5, VAR_4)) {
  FUNC_7(&VAR_6->lock, VAR_7);
  return -VAR_1;
 }


 if (VAR_3 == &VAR_5->req->req)
  FUNC_2(VAR_6, VAR_5);

 FUNC_1(VAR_6, VAR_5, VAR_4, -VAR_0);
 FUNC_7(&VAR_6->lock, VAR_7);

 return 0;
}
