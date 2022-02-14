
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_mtk {int ref_clk; int sys_clk; int xhci_clk; int mcu_clk; int dev; int dma_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct xhci_hcd_mtk *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->ref_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to enable ref_clk\n");
  goto ref_clk_err;
 }

 VAR_1 = FUNC_1(VAR_0->sys_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to enable sys_clk\n");
  goto sys_clk_err;
 }

 VAR_1 = FUNC_1(VAR_0->xhci_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to enable xhci_clk\n");
  goto xhci_clk_err;
 }

 VAR_1 = FUNC_1(VAR_0->mcu_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to enable mcu_clk\n");
  goto mcu_clk_err;
 }

 VAR_1 = FUNC_1(VAR_0->dma_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to enable dma_clk\n");
  goto dma_clk_err;
 }

 return 0;

dma_clk_err:
 FUNC_0(VAR_0->mcu_clk);
mcu_clk_err:
 FUNC_0(VAR_0->xhci_clk);
xhci_clk_err:
 FUNC_0(VAR_0->sys_clk);
sys_clk_err:
 FUNC_0(VAR_0->ref_clk);
ref_clk_err:
 return VAR_1;
}
