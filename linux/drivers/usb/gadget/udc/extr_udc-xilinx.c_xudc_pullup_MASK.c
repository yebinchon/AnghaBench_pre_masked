
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xusb_udc {int lock; scalar_t__ addr; int (* write_fn ) (scalar_t__,scalar_t__,int ) ;int (* read_fn ) (scalar_t__) ;} ;
struct usb_gadget {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 struct xusb_udc* FUNC_4 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget *VAR_2, int VAR_3)
{
 struct xusb_udc *VAR_4 = FUNC_4(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_0(&VAR_4->lock, VAR_5);

 VAR_6 = VAR_4->read_fn(VAR_4->addr + VAR_0);
 if (VAR_3)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;

 VAR_4->write_fn(VAR_4->addr, VAR_0, VAR_6);

 FUNC_1(&VAR_4->lock, VAR_5);

 return 0;
}
