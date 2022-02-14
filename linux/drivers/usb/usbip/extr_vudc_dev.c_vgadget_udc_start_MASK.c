
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vudc {int lock; scalar_t__ desc_cached; scalar_t__ connected; scalar_t__ pullup; struct usb_gadget_driver* driver; } ;
struct usb_gadget_driver {int dummy; } ;
struct usb_gadget {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vudc* FUNC_2 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_3(struct usb_gadget *VAR_0,
  struct usb_gadget_driver *VAR_1)
{
 struct vudc *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;

 FUNC_0(&VAR_2->lock, VAR_3);
 VAR_2->driver = VAR_1;
 VAR_2->pullup = VAR_2->connected = VAR_2->desc_cached = 0;
 FUNC_1(&VAR_2->lock, VAR_3);

 return 0;
}
