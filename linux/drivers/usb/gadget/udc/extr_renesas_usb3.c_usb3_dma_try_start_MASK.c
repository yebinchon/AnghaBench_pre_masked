
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {int dummy; } ;
struct renesas_usb3 {int dummy; } ;


 int FUNC_0 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 scalar_t__ FUNC_1 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 int FUNC_2 (struct renesas_usb3_ep*) ;
 int FUNC_3 (struct renesas_usb3*) ;
 struct renesas_usb3* FUNC_4 (struct renesas_usb3_ep*) ;
 int FUNC_5 (struct renesas_usb3*) ;
 int FUNC_6 (struct renesas_usb3*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_7(struct renesas_usb3_ep *VAR_1,
          struct renesas_usb3_request *VAR_2)
{
 struct renesas_usb3 *VAR_3 = FUNC_4(VAR_1);

 if (!VAR_0)
  return 0;

 if (FUNC_1(VAR_1, VAR_2)) {
  FUNC_6(VAR_3);
  FUNC_3(VAR_3);
  FUNC_0(VAR_1, VAR_2);
  FUNC_2(VAR_1);
  FUNC_5(VAR_3);
  return 1;
 }

 return 0;
}
