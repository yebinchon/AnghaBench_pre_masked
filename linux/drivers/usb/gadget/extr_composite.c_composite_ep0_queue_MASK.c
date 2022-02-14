
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct usb_composite_dev {int setup_pending; int os_desc_pending; struct usb_request* os_desc_req; struct usb_request* req; TYPE_1__* gadget; } ;
typedef int gfp_t ;
struct TYPE_2__ {int ep0; } ;


 int FUNC_0 (int,char*,struct usb_request*) ;
 int FUNC_1 (int ,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_composite_dev *VAR_0,
  struct usb_request *VAR_1, gfp_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->gadget->ep0, VAR_1, VAR_2);
 if (VAR_3 == 0) {
  if (VAR_0->req == VAR_1)
   VAR_0->setup_pending = 1;
  else if (VAR_0->os_desc_req == VAR_1)
   VAR_0->os_desc_pending = 1;
  else
   FUNC_0(1, "unknown request %p\n", VAR_1);
 }

 return VAR_3;
}
