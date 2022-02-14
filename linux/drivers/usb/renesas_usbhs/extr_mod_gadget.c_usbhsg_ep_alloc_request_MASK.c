
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usbhsg_request {struct usb_request req; } ;
struct usb_ep {int dummy; } ;
typedef int gfp_t ;


 struct usbhsg_request* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usbhsg_request*) ;

__attribute__((used)) static struct usb_request *FUNC_3(struct usb_ep *VAR_0,
         gfp_t VAR_1)
{
 struct usbhsg_request *VAR_2;

 VAR_2 = FUNC_0(sizeof *VAR_2, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(FUNC_2(VAR_2));

 return &VAR_2->req;
}
