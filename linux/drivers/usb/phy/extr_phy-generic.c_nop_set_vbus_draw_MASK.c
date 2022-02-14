
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy_generic {int vbus_draw_enabled; unsigned int mA; struct regulator* vbus_draw; } ;
struct regulator {int dummy; } ;


 int FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct usb_phy_generic *VAR_0, unsigned VAR_1)
{
 struct regulator *VAR_2 = VAR_0->vbus_draw;
 int VAR_3;
 int VAR_4;

 if (!VAR_2)
  return;

 VAR_3 = VAR_0->vbus_draw_enabled;
 if (VAR_1) {
  FUNC_2(VAR_2, 0, 1000 * VAR_1);
  if (!VAR_3) {
   VAR_4 = FUNC_1(VAR_2);
   if (VAR_4 < 0)
    return;
   VAR_0->vbus_draw_enabled = 1;
  }
 } else {
  if (VAR_3) {
   VAR_4 = FUNC_0(VAR_2);
   if (VAR_4 < 0)
    return;
   VAR_0->vbus_draw_enabled = 0;
  }
 }
 VAR_0->mA = VAR_1;
}
