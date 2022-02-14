
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ep {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* fifo_flush ) (struct usb_ep*) ;} ;


 int FUNC_0 (struct usb_ep*) ;
 int FUNC_1 (struct usb_ep*,int ) ;

void FUNC_2(struct usb_ep *VAR_0)
{
 if (VAR_0->ops->fifo_flush)
  VAR_0->ops->fifo_flush(VAR_0);

 FUNC_1(VAR_0, 0);
}
