
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_histb {int bus_clk; int utmi_clk; int pipe_clk; int suspend_clk; int soft_reset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd_histb *VAR_0)
{
 FUNC_1(VAR_0->soft_reset);

 FUNC_0(VAR_0->suspend_clk);
 FUNC_0(VAR_0->pipe_clk);
 FUNC_0(VAR_0->utmi_clk);
 FUNC_0(VAR_0->bus_clk);
}
