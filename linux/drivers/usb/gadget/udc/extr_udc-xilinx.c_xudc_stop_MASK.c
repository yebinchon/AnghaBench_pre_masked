
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct xusb_udc {int lock; scalar_t__ remote_wkp; int addr; int (* write_fn ) (int ,int ,int ) ;int * driver; TYPE_1__ gadget; } ;
struct usb_gadget {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int ,int ) ;
 struct xusb_udc* FUNC_3 (struct usb_gadget*) ;
 int FUNC_4 (struct xusb_udc*) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget *VAR_2)
{
 struct xusb_udc *VAR_3 = FUNC_3(VAR_2);
 unsigned long VAR_4;

 FUNC_0(&VAR_3->lock, VAR_4);

 VAR_3->gadget.speed = VAR_0;
 VAR_3->driver = ((void*)0);


 VAR_3->write_fn(VAR_3->addr, VAR_1, 0);
 VAR_3->remote_wkp = 0;

 FUNC_4(VAR_3);

 FUNC_1(&VAR_3->lock, VAR_4);

 return 0;
}
