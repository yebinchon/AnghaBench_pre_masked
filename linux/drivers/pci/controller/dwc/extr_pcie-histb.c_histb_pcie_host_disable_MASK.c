
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct histb_pcie {scalar_t__ vpcie; int reset_gpio; int bus_clk; int sys_clk; int pipe_clk; int aux_clk; int bus_reset; int sys_reset; int soft_reset; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct histb_pcie *VAR_0)
{
 FUNC_4(VAR_0->soft_reset);
 FUNC_4(VAR_0->sys_reset);
 FUNC_4(VAR_0->bus_reset);

 FUNC_0(VAR_0->aux_clk);
 FUNC_0(VAR_0->pipe_clk);
 FUNC_0(VAR_0->sys_clk);
 FUNC_0(VAR_0->bus_clk);

 if (FUNC_1(VAR_0->reset_gpio))
  FUNC_2(VAR_0->reset_gpio, 0);

 if (VAR_0->vpcie)
  FUNC_3(VAR_0->vpcie);
}
