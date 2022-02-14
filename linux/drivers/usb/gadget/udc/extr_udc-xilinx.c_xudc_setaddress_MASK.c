
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xusb_udc {int dev; struct xusb_req* req; struct xusb_ep* ep; } ;
struct TYPE_2__ {scalar_t__ length; } ;
struct xusb_req {TYPE_1__ usb_req; } ;
struct xusb_ep {int dummy; } ;


 int FUNC_0 (struct xusb_ep*,struct xusb_req*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct xusb_udc*) ;

__attribute__((used)) static void FUNC_3(struct xusb_udc *VAR_0)
{
 struct xusb_ep *VAR_1 = &VAR_0->ep[0];
 struct xusb_req *VAR_2 = VAR_0->req;
 int VAR_3;

 VAR_2->usb_req.length = 0;
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == 0)
  return;

 FUNC_1(VAR_0->dev, "Can't respond to SET ADDRESS request\n");
 FUNC_2(VAR_0);
}
