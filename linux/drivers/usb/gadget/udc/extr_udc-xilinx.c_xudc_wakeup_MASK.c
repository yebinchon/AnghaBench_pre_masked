
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xusb_udc {int lock; scalar_t__ addr; int (* write_fn ) (scalar_t__,scalar_t__,int ) ;int (* read_fn ) (scalar_t__) ;int remote_wkp; } ;
struct usb_gadget {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 struct xusb_udc* FUNC_6 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_7(struct usb_gadget *VAR_3)
{
 struct xusb_udc *VAR_4 = FUNC_6(VAR_3);
 u32 VAR_5;
 int VAR_6 = -VAR_0;
 unsigned long VAR_7;

 FUNC_1(&VAR_4->lock, VAR_7);


 if (!VAR_4->remote_wkp)
  goto done;

 VAR_5 = VAR_4->read_fn(VAR_4->addr + VAR_1);
 VAR_5 |= VAR_2;

 VAR_4->write_fn(VAR_4->addr, VAR_1, VAR_5);




 FUNC_0(2);

 VAR_5 &= ~VAR_2;
 VAR_4->write_fn(VAR_4->addr, VAR_1, VAR_5);
 VAR_6 = 0;
done:
 FUNC_2(&VAR_4->lock, VAR_7);
 return VAR_6;
}
