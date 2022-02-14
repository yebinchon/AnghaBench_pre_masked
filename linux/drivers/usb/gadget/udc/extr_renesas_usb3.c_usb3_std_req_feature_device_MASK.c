
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_ctrlrequest {int wIndex; int wValue; } ;
struct TYPE_2__ {int speed; } ;
struct renesas_usb3 {int test_mode; TYPE_1__ gadget; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct renesas_usb3*,int) ;
 int FUNC_2 (struct renesas_usb3*,int) ;

__attribute__((used)) static bool FUNC_3(struct renesas_usb3 *VAR_1,
     struct usb_ctrlrequest *VAR_2, bool VAR_3)
{
 bool VAR_4 = 1;
 u16 VAR_5 = FUNC_0(VAR_2->wValue);

 switch (VAR_5) {
 case 130:
  if (!VAR_3)
   break;
  VAR_1->test_mode = FUNC_0(VAR_2->wIndex) >> 8;
  VAR_4 = 0;
  break;
 case 129:
 case 128:
  if (VAR_1->gadget.speed != VAR_0)
   break;
  if (VAR_5 == 129)
   FUNC_1(VAR_1, VAR_3);
  if (VAR_5 == 128)
   FUNC_2(VAR_1, VAR_3);
  VAR_4 = 0;
  break;
 default:
  break;
 }

 return VAR_4;
}
