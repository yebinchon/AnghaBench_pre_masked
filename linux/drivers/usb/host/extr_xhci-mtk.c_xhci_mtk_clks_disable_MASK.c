
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_mtk {int ref_clk; int sys_clk; int xhci_clk; int mcu_clk; int dma_clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct xhci_hcd_mtk *VAR_0)
{
 FUNC_0(VAR_0->dma_clk);
 FUNC_0(VAR_0->mcu_clk);
 FUNC_0(VAR_0->xhci_clk);
 FUNC_0(VAR_0->sys_clk);
 FUNC_0(VAR_0->ref_clk);
}
