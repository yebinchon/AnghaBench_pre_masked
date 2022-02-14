
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int dummy; } ;
struct musb {scalar_t__ hwvers; } ;


 scalar_t__ VAR_0 ;
 struct musb* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct usb_hcd*,struct urb*) ;

__attribute__((used)) static void FUNC_3(struct usb_hcd *VAR_1, struct urb *VAR_2)
{
 struct musb *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_1, VAR_2);


 if (VAR_3->hwvers < VAR_0)
  return;

 FUNC_1(VAR_2);
}
