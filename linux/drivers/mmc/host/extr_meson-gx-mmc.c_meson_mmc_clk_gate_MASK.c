
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_host {scalar_t__ regs; scalar_t__ pins_clk_gate; int pinctrl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct meson_host *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->pins_clk_gate) {
  FUNC_0(VAR_2->pinctrl, VAR_2->pins_clk_gate);
 } else {




  VAR_3 = FUNC_1(VAR_2->regs + VAR_1);
  VAR_3 |= VAR_0;
  FUNC_2(VAR_3, VAR_2->regs + VAR_1);
 }
}
