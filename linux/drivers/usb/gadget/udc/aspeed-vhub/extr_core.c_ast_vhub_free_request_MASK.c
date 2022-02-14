
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct ast_vhub_req {int dummy; } ;


 int FUNC_0 (struct ast_vhub_req*) ;
 struct ast_vhub_req* FUNC_1 (struct usb_request*) ;

void FUNC_2(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct ast_vhub_req *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2);
}
