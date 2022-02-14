
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int length; int * complete; int buf; } ;
struct TYPE_2__ {struct usb_request req; } ;
struct bcm63xx_udc {int ep0_ctrl_buf; TYPE_1__ ep0_ctrl_req; } ;


 int FUNC_0 (struct bcm63xx_udc*,int,struct usb_request*) ;

__attribute__((used)) static void FUNC_1(struct bcm63xx_udc *VAR_0, int VAR_1,
 int VAR_2)
{
 struct usb_request *VAR_3 = &VAR_0->ep0_ctrl_req.req;

 VAR_3->buf = VAR_0->ep0_ctrl_buf;
 VAR_3->length = VAR_2;
 VAR_3->complete = ((void*)0);

 FUNC_0(VAR_0, VAR_1, VAR_3);
}
