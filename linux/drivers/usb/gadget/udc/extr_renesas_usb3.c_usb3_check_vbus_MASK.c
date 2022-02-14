
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {int extcon_usb; int extcon_work; scalar_t__ workaround_for_vbus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct renesas_usb3*) ;
 int FUNC_2 (struct renesas_usb3*) ;
 int FUNC_3 (struct renesas_usb3*,int ) ;

__attribute__((used)) static void FUNC_4(struct renesas_usb3 *VAR_2)
{
 if (VAR_2->workaround_for_vbus) {
  FUNC_1(VAR_2);
 } else {
  VAR_2->extcon_usb = !!(FUNC_3(VAR_2, VAR_0) &
       VAR_1);
  if (VAR_2->extcon_usb)
   FUNC_1(VAR_2);
  else
   FUNC_2(VAR_2);

  FUNC_0(&VAR_2->extcon_work);
 }
}
