
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int state; } ;
struct u132 {int power; } ;


 int VAR_0 ;
 struct usb_hcd* FUNC_0 (struct u132*) ;

__attribute__((used)) static void FUNC_1(struct u132 *VAR_1, int VAR_2)
{
 struct usb_hcd *VAR_3 = FUNC_0(VAR_1)
  ;
 if (VAR_2) {
  if (VAR_1->power)
   return;
  VAR_1->power = 1;
 } else {
  VAR_1->power = 0;
  VAR_3->state = VAR_0;
 }
}
