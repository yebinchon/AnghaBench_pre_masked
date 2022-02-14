
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_udc {int clocked; int usb_slv_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct lpc32xx_udc *VAR_0, int VAR_1)
{
 if (VAR_1 != 0) {
  if (VAR_0->clocked)
   return;

  VAR_0->clocked = 1;
  FUNC_1(VAR_0->usb_slv_clk);
 } else {
  if (!VAR_0->clocked)
   return;

  VAR_0->clocked = 0;
  FUNC_0(VAR_0->usb_slv_clk);
 }
}
