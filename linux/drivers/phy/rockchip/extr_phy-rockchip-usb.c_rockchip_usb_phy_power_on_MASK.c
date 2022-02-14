
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_usb_phy {int clk480m; scalar_t__ vbus; scalar_t__ uart_enabled; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct rockchip_usb_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_1)
{
 struct rockchip_usb_phy *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->uart_enabled)
  return -VAR_0;

 if (VAR_2->vbus) {
  int VAR_3;

  VAR_3 = FUNC_2(VAR_2->vbus);
  if (VAR_3)
   return VAR_3;
 }

 return FUNC_0(VAR_2->clk480m);
}
