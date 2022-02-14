
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
struct renesas_usb3_request {TYPE_1__ req; } ;
struct renesas_usb3_ep {int started; scalar_t__ dir_in; } ;
struct renesas_usb3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct renesas_usb3*,int ,int ) ;
 struct renesas_usb3* FUNC_1 (struct renesas_usb3_ep*) ;
 int FUNC_2 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 int FUNC_3 (struct renesas_usb3*,int ,int ) ;
 int FUNC_4 (struct renesas_usb3*) ;
 int FUNC_5 (struct renesas_usb3*) ;

__attribute__((used)) static void FUNC_6(struct renesas_usb3_ep *VAR_2,
        struct renesas_usb3_request *VAR_3)
{
 struct renesas_usb3 *VAR_4 = FUNC_1(VAR_2);

 if (VAR_2->started)
  return;

 VAR_2->started = 1;

 if (VAR_2->dir_in) {
  FUNC_3(VAR_4, VAR_0, VAR_1);
  FUNC_4(VAR_4);
 } else {
  FUNC_0(VAR_4, VAR_0, VAR_1);
  if (VAR_3->req.length)
   FUNC_5(VAR_4);
 }

 FUNC_2(VAR_2, VAR_3);
}
