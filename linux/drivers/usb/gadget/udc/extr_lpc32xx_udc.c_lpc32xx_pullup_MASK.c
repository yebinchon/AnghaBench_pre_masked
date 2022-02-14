
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct lpc32xx_udc {int dummy; } ;


 int FUNC_0 (struct lpc32xx_udc*,int) ;
 struct lpc32xx_udc* FUNC_1 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_0, int VAR_1)
{
 struct lpc32xx_udc *VAR_2 = FUNC_1(VAR_0);


 FUNC_0(VAR_2, VAR_1);

 return 0;
}
