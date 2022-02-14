
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct renesas_usb3_ep {scalar_t__ num; } ;
struct renesas_usb3 {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct renesas_usb3* FUNC_2 (struct renesas_usb3_ep*) ;
 int FUNC_3 (struct renesas_usb3*) ;
 int FUNC_4 (struct renesas_usb3*,scalar_t__) ;
 int FUNC_5 (struct renesas_usb3*) ;
 int FUNC_6 (struct renesas_usb3*,int ,int ) ;
 struct renesas_usb3_ep* FUNC_7 (struct usb_ep*) ;

__attribute__((used)) static void FUNC_8(struct usb_ep *VAR_2)
{
 struct renesas_usb3_ep *VAR_3 = FUNC_7(VAR_2);
 struct renesas_usb3 *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;

 if (VAR_3->num) {
  FUNC_0(&VAR_4->lock, VAR_5);
  if (!FUNC_4(VAR_4, VAR_3->num)) {
   FUNC_5(VAR_4);
   FUNC_6(VAR_4, VAR_0, VAR_1);
  }
  FUNC_1(&VAR_4->lock, VAR_5);
 } else {
  FUNC_3(VAR_4);
 }
}
