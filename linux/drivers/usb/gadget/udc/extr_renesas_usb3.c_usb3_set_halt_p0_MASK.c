
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_ep {int halt; int num; } ;
struct renesas_usb3 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct renesas_usb3* FUNC_1 (struct renesas_usb3_ep*) ;
 int FUNC_2 (struct renesas_usb3*) ;
 int FUNC_3 (struct renesas_usb3*) ;

__attribute__((used)) static int FUNC_4(struct renesas_usb3_ep *VAR_1, bool VAR_2)
{
 struct renesas_usb3 *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_1->num))
  return -VAR_0;

 VAR_1->halt = VAR_2;
 if (VAR_2)
  FUNC_2(VAR_3);
 else
  FUNC_3(VAR_3);

 return 0;
}
