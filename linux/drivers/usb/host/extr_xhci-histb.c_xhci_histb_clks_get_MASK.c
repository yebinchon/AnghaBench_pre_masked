
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_histb {void* suspend_clk; void* pipe_clk; void* utmi_clk; void* bus_clk; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;

__attribute__((used)) static int FUNC_4(struct xhci_hcd_histb *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;

 VAR_0->bus_clk = FUNC_3(VAR_1, "bus");
 if (FUNC_0(VAR_0->bus_clk)) {
  FUNC_2(VAR_1, "fail to get bus clk\n");
  return FUNC_1(VAR_0->bus_clk);
 }

 VAR_0->utmi_clk = FUNC_3(VAR_1, "utmi");
 if (FUNC_0(VAR_0->utmi_clk)) {
  FUNC_2(VAR_1, "fail to get utmi clk\n");
  return FUNC_1(VAR_0->utmi_clk);
 }

 VAR_0->pipe_clk = FUNC_3(VAR_1, "pipe");
 if (FUNC_0(VAR_0->pipe_clk)) {
  FUNC_2(VAR_1, "fail to get pipe clk\n");
  return FUNC_1(VAR_0->pipe_clk);
 }

 VAR_0->suspend_clk = FUNC_3(VAR_1, "suspend");
 if (FUNC_0(VAR_0->suspend_clk)) {
  FUNC_2(VAR_1, "fail to get suspend clk\n");
  return FUNC_1(VAR_0->suspend_clk);
 }

 return 0;
}
