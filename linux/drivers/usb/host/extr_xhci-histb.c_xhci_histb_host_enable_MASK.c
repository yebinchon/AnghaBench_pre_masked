
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_histb {int bus_clk; int utmi_clk; int pipe_clk; int soft_reset; int dev; int suspend_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct xhci_hcd_histb *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->bus_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to enable bus clk\n");
  return VAR_1;
 }

 VAR_1 = FUNC_1(VAR_0->utmi_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to enable utmi clk\n");
  goto err_utmi_clk;
 }

 VAR_1 = FUNC_1(VAR_0->pipe_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to enable pipe clk\n");
  goto err_pipe_clk;
 }

 VAR_1 = FUNC_1(VAR_0->suspend_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to enable suspend clk\n");
  goto err_suspend_clk;
 }

 FUNC_3(VAR_0->soft_reset);

 return 0;

err_suspend_clk:
 FUNC_0(VAR_0->pipe_clk);
err_pipe_clk:
 FUNC_0(VAR_0->utmi_clk);
err_utmi_clk:
 FUNC_0(VAR_0->bus_clk);

 return VAR_1;
}
