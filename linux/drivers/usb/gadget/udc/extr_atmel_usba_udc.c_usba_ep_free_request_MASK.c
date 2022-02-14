
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usba_request {int dummy; } ;
struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;


 int FUNC_0 (int ,char*,struct usb_ep*,struct usb_request*) ;
 int VAR_0 ;
 int FUNC_1 (struct usba_request*) ;
 struct usba_request* FUNC_2 (struct usb_request*) ;

__attribute__((used)) static void
FUNC_3(struct usb_ep *VAR_1, struct usb_request *VAR_2)
{
 struct usba_request *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_0, "ep_free_request: %p, %p\n", VAR_1, VAR_2);

 FUNC_1(VAR_3);
}
