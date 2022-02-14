
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct usb_ep {TYPE_1__* ops; scalar_t__ address; int enabled; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* queue ) (struct usb_ep*,struct usb_request*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct usb_ep*,struct usb_request*,int ) ;
 int FUNC_2 (struct usb_ep*,struct usb_request*,int) ;

int FUNC_3(struct usb_ep *VAR_1,
          struct usb_request *VAR_2, gfp_t VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_0(!VAR_1->enabled && VAR_1->address)) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_4 = VAR_1->ops->queue(VAR_1, VAR_2, VAR_3);

out:
 FUNC_2(VAR_1, VAR_2, VAR_4);

 return VAR_4;
}
