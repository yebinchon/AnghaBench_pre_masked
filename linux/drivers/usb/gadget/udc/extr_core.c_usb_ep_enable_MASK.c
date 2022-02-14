
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ep {int enabled; int desc; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable ) (struct usb_ep*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ep*,int ) ;
 int FUNC_1 (struct usb_ep*,int) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct usb_ep *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->enabled)
  goto out;


 if (FUNC_2(VAR_1->desc) == 0) {





  VAR_2 = -VAR_0;
  goto out;
 }

 VAR_2 = VAR_1->ops->enable(VAR_1, VAR_1->desc);
 if (VAR_2)
  goto out;

 VAR_1->enabled = 1;

out:
 FUNC_1(VAR_1, VAR_2);

 return VAR_2;
}
