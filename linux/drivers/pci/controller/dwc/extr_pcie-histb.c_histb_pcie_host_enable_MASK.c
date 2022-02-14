
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {int dummy; } ;
struct histb_pcie {scalar_t__ vpcie; int bus_clk; int sys_clk; int pipe_clk; int bus_reset; int sys_reset; int soft_reset; int aux_clk; int reset_gpio; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct dw_pcie* FUNC_9 (struct pcie_port*) ;
 struct histb_pcie* FUNC_10 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_11(struct pcie_port *VAR_0)
{
 struct dw_pcie *VAR_1 = FUNC_9(VAR_0);
 struct histb_pcie *VAR_2 = FUNC_10(VAR_1);
 struct device *VAR_3 = VAR_1->dev;
 int VAR_4;


 if (VAR_2->vpcie) {
  VAR_4 = FUNC_6(VAR_2->vpcie);
  if (VAR_4) {
   FUNC_2(VAR_3, "failed to enable regulator: %d\n", VAR_4);
   return VAR_4;
  }
 }

 if (FUNC_3(VAR_2->reset_gpio))
  FUNC_4(VAR_2->reset_gpio, 1);

 VAR_4 = FUNC_1(VAR_2->bus_clk);
 if (VAR_4) {
  FUNC_2(VAR_3, "cannot prepare/enable bus clk\n");
  goto err_bus_clk;
 }

 VAR_4 = FUNC_1(VAR_2->sys_clk);
 if (VAR_4) {
  FUNC_2(VAR_3, "cannot prepare/enable sys clk\n");
  goto err_sys_clk;
 }

 VAR_4 = FUNC_1(VAR_2->pipe_clk);
 if (VAR_4) {
  FUNC_2(VAR_3, "cannot prepare/enable pipe clk\n");
  goto err_pipe_clk;
 }

 VAR_4 = FUNC_1(VAR_2->aux_clk);
 if (VAR_4) {
  FUNC_2(VAR_3, "cannot prepare/enable aux clk\n");
  goto err_aux_clk;
 }

 FUNC_7(VAR_2->soft_reset);
 FUNC_8(VAR_2->soft_reset);

 FUNC_7(VAR_2->sys_reset);
 FUNC_8(VAR_2->sys_reset);

 FUNC_7(VAR_2->bus_reset);
 FUNC_8(VAR_2->bus_reset);

 return 0;

err_aux_clk:
 FUNC_0(VAR_2->pipe_clk);
err_pipe_clk:
 FUNC_0(VAR_2->sys_clk);
err_sys_clk:
 FUNC_0(VAR_2->bus_clk);
err_bus_clk:
 if (VAR_2->vpcie)
  FUNC_5(VAR_2->vpcie);

 return VAR_4;
}
