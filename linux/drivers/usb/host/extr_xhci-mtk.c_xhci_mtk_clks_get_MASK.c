
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_mtk {void* dma_clk; void* mcu_clk; void* ref_clk; void* xhci_clk; void* sys_clk; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*) ;

__attribute__((used)) static int FUNC_6(struct xhci_hcd_mtk *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;

 VAR_0->sys_clk = FUNC_4(VAR_1, "sys_ck");
 if (FUNC_0(VAR_0->sys_clk)) {
  FUNC_3(VAR_1, "fail to get sys_ck\n");
  return FUNC_1(VAR_0->sys_clk);
 }

 VAR_0->xhci_clk = FUNC_5(VAR_1, "xhci_ck");
 if (FUNC_0(VAR_0->xhci_clk))
  return FUNC_1(VAR_0->xhci_clk);

 VAR_0->ref_clk = FUNC_5(VAR_1, "ref_ck");
 if (FUNC_0(VAR_0->ref_clk))
  return FUNC_1(VAR_0->ref_clk);

 VAR_0->mcu_clk = FUNC_5(VAR_1, "mcu_ck");
 if (FUNC_0(VAR_0->mcu_clk))
  return FUNC_1(VAR_0->mcu_clk);

 VAR_0->dma_clk = FUNC_5(VAR_1, "dma_ck");
 return FUNC_2(VAR_0->dma_clk);
}
