
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct isp1760_request {int dummy; } ;


 int FUNC_0 (struct isp1760_request*) ;
 struct isp1760_request* FUNC_1 (struct usb_request*) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct isp1760_request *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2);
}
