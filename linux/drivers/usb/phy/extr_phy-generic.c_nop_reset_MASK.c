
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy_generic {int gpiod_reset; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct usb_phy_generic *VAR_0)
{
 if (!VAR_0->gpiod_reset)
  return;

 FUNC_0(VAR_0->gpiod_reset, 1);
 FUNC_1(10000, 20000);
 FUNC_0(VAR_0->gpiod_reset, 0);
}
