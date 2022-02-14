
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {int disabled_count; } ;


 int FUNC_0 (struct renesas_usb3*) ;
 int FUNC_1 (struct renesas_usb3*) ;
 int FUNC_2 (struct renesas_usb3*) ;

__attribute__((used)) static void FUNC_3(struct renesas_usb3 *VAR_0)
{
 FUNC_0(VAR_0);
 if (VAR_0->disabled_count < 3)
  FUNC_2(VAR_0);
 else
  FUNC_1(VAR_0);
}
