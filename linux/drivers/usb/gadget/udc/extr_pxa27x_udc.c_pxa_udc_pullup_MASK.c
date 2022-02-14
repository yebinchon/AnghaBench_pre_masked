
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct pxa_udc {int udc_command; int gpiod; } ;


 int VAR_0 ;
 int FUNC_0 (struct pxa_udc*,int) ;
 scalar_t__ FUNC_1 (struct pxa_udc*) ;
 scalar_t__ FUNC_2 (struct pxa_udc*) ;
 struct pxa_udc* FUNC_3 (struct usb_gadget*) ;
 int FUNC_4 (struct pxa_udc*) ;
 int FUNC_5 (struct pxa_udc*) ;

__attribute__((used)) static int FUNC_6(struct usb_gadget *VAR_1, int VAR_2)
{
 struct pxa_udc *VAR_3 = FUNC_3(VAR_1);

 if (!VAR_3->gpiod && !VAR_3->udc_command)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_2);

 if (FUNC_2(VAR_3))
  FUNC_5(VAR_3);
 if (FUNC_1(VAR_3))
  FUNC_4(VAR_3);
 return 0;
}
