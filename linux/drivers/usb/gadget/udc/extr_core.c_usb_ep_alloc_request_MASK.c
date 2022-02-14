
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct usb_ep {TYPE_1__* ops; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct usb_request* (* alloc_request ) (struct usb_ep*,int ) ;} ;


 int VAR_0 ;
 struct usb_request* FUNC_0 (struct usb_ep*,int ) ;
 int FUNC_1 (struct usb_ep*,struct usb_request*,int ) ;

struct usb_request *FUNC_2(struct usb_ep *VAR_1,
             gfp_t VAR_2)
{
 struct usb_request *VAR_3 = ((void*)0);

 VAR_3 = VAR_1->ops->alloc_request(VAR_1, VAR_2);

 FUNC_1(VAR_1, VAR_3, VAR_3 ? 0 : -VAR_0);

 return VAR_3;
}
