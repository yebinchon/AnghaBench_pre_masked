
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {int dummy; } ;
struct renesas_usb3 {scalar_t__ test_mode; } ;


 struct renesas_usb3_ep* FUNC_0 (struct renesas_usb3*,int ) ;
 struct renesas_usb3_request* FUNC_1 (struct renesas_usb3_ep*) ;
 int FUNC_2 (struct renesas_usb3_ep*,struct renesas_usb3_request*,int ) ;
 int FUNC_3 (struct renesas_usb3*) ;

__attribute__((used)) static void FUNC_4(struct renesas_usb3 *VAR_0)
{
 struct renesas_usb3_ep *VAR_1 = FUNC_0(VAR_0, 0);
 struct renesas_usb3_request *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2)
  FUNC_2(VAR_1, VAR_2, 0);
 if (VAR_0->test_mode)
  FUNC_3(VAR_0);
}
