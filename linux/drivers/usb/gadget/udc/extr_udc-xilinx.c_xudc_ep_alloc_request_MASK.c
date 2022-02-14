
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct xusb_req {struct usb_request usb_req; int queue; struct xusb_ep* ep; } ;
struct xusb_ep {int dummy; } ;
struct usb_ep {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct xusb_req* FUNC_1 (int,int ) ;
 struct xusb_ep* FUNC_2 (struct usb_ep*) ;

__attribute__((used)) static struct usb_request *FUNC_3(struct usb_ep *VAR_0,
       gfp_t VAR_1)
{
 struct xusb_ep *VAR_2 = FUNC_2(VAR_0);
 struct xusb_req *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->ep = VAR_2;
 FUNC_0(&VAR_3->queue);
 return &VAR_3->usb_req;
}
