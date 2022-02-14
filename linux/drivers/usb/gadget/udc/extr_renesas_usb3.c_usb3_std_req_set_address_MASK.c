
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int wValue; } ;
struct renesas_usb3 {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct renesas_usb3*,int) ;
 int FUNC_2 (struct renesas_usb3*) ;

__attribute__((used)) static bool FUNC_3(struct renesas_usb3 *VAR_0,
         struct usb_ctrlrequest *VAR_1)
{
 if (FUNC_0(VAR_1->wValue) >= 128)
  return 1;

 FUNC_1(VAR_0, FUNC_0(VAR_1->wValue));
 FUNC_2(VAR_0);

 return 0;
}
