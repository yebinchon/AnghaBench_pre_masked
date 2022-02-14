
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_usb2_phy_instance {int int_cnt; } ;


 int FUNC_0 (struct samsung_usb2_phy_instance*,int ) ;
 int FUNC_1 (struct samsung_usb2_phy_instance*,int) ;
 int FUNC_2 (struct samsung_usb2_phy_instance*) ;

__attribute__((used)) static void FUNC_3(struct samsung_usb2_phy_instance *VAR_0)
{
 if (VAR_0->int_cnt++ > 0)
  return;

 FUNC_2(VAR_0);
 FUNC_0(VAR_0, 0);
 FUNC_1(VAR_0, 1);
}
