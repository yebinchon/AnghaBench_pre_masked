
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct renesas_usb3_request {TYPE_1__ req; } ;
struct renesas_usb3_ep {scalar_t__ dir_in; } ;
struct renesas_usb3 {int dummy; } ;


 struct renesas_usb3* FUNC_0 (struct renesas_usb3_ep*) ;
 int FUNC_1 (struct renesas_usb3*) ;
 int FUNC_2 (struct renesas_usb3*) ;
 int FUNC_3 (struct renesas_usb3*) ;

__attribute__((used)) static void FUNC_4(struct renesas_usb3_ep *VAR_0,
      struct renesas_usb3_request *VAR_1)
{
 struct renesas_usb3 *VAR_2 = FUNC_0(VAR_0);

 if (VAR_0->dir_in) {
  FUNC_1(VAR_2);
 } else {
  if (!VAR_1->req.length)
   FUNC_3(VAR_2);
  else
   FUNC_2(VAR_2);
 }
}
