
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_usb_phy {int clk480m; scalar_t__ uart_enabled; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct rockchip_usb_phy* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_1)
{
 struct rockchip_usb_phy *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->uart_enabled)
  return -VAR_0;

 FUNC_0(VAR_2->clk480m);

 return 0;
}
