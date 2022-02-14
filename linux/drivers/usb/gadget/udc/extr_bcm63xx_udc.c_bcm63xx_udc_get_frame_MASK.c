
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct bcm63xx_udc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bcm63xx_udc* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct bcm63xx_udc*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_3)
{
 struct bcm63xx_udc *VAR_4 = FUNC_0(VAR_3);

 return (FUNC_1(VAR_4, VAR_0) &
  VAR_1) >> VAR_2;
}
