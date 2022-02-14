
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6030_usb {int vbus_enable; int set_vbus_work; } ;
struct phy_companion {int dummy; } ;


 struct twl6030_usb* FUNC_0 (struct phy_companion*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct phy_companion *VAR_0, bool VAR_1)
{
 struct twl6030_usb *VAR_2 = FUNC_0(VAR_0);

 VAR_2->vbus_enable = VAR_1;
 FUNC_1(&VAR_2->set_vbus_work);

 return 0;
}
