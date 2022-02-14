
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct renesas_usb3_ep {int wedge; } ;


 int FUNC_0 (struct renesas_usb3_ep*,int,int) ;
 struct renesas_usb3_ep* FUNC_1 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_2(struct usb_ep *VAR_0)
{
 struct renesas_usb3_ep *VAR_1 = FUNC_1(VAR_0);

 VAR_1->wedge = 1;
 return FUNC_0(VAR_1, 1, 0);
}
