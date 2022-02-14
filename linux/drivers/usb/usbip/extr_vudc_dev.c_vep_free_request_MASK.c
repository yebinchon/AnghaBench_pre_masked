
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vrequest {int dummy; } ;
struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;


 int FUNC_0 (struct vrequest*) ;
 struct vrequest* FUNC_1 (struct usb_request*) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct vrequest *VAR_2;


 if (!VAR_1)
  return;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2);
}
