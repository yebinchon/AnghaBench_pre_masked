
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ep {int enabled; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* disable ) (struct usb_ep*) ;} ;


 int FUNC_0 (struct usb_ep*) ;
 int FUNC_1 (struct usb_ep*,int) ;

int FUNC_2(struct usb_ep *VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0->enabled)
  goto out;

 VAR_1 = VAR_0->ops->disable(VAR_0);
 if (VAR_1)
  goto out;

 VAR_0->enabled = 0;

out:
 FUNC_1(VAR_0, VAR_1);

 return VAR_1;
}
