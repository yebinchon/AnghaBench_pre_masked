
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_usb_phy {scalar_t__ clk; int clk480m; int np; int uart_enabled; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct rockchip_usb_phy *VAR_1 = VAR_0;

 if (!VAR_1->uart_enabled) {
  FUNC_2(VAR_1->np);
  FUNC_1(VAR_1->clk480m);
 }

 if (VAR_1->clk)
  FUNC_0(VAR_1->clk);
}
