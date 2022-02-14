
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct lpc32xx_udc {int lock; int clocked; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct lpc32xx_udc* FUNC_2 (struct usb_gadget*) ;
 scalar_t__ FUNC_3 (struct lpc32xx_udc*) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;
 struct lpc32xx_udc *VAR_4 = FUNC_2(VAR_1);

 if (!VAR_4->clocked)
  return -VAR_0;

 FUNC_0(&VAR_4->lock, VAR_3);

 VAR_2 = (int) FUNC_3(VAR_4);

 FUNC_1(&VAR_4->lock, VAR_3);

 return VAR_2;
}
