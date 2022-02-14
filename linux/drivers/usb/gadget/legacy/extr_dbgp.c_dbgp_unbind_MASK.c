
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_gadget {int ep0; } ;
struct TYPE_4__ {TYPE_1__* req; int * serial; } ;
struct TYPE_3__ {int * buf; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct usb_gadget *VAR_1)
{




 if (VAR_0.req) {
  FUNC_0(VAR_0.req->buf);
  FUNC_1(VAR_1->ep0, VAR_0.req);
  VAR_0.req = ((void*)0);
 }
}
