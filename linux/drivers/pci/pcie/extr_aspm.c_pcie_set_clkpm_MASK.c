
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_link_state {int clkpm_enabled; int clkpm_capable; } ;


 int FUNC_0 (struct pcie_link_state*,int) ;

__attribute__((used)) static void FUNC_1(struct pcie_link_state *VAR_0, int VAR_1)
{

 if (!VAR_0->clkpm_capable)
  VAR_1 = 0;

 if (VAR_0->clkpm_enabled == VAR_1)
  return;
 FUNC_0(VAR_0, VAR_1);
}
