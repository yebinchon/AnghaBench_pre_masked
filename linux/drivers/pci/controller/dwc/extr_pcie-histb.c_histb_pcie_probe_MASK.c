
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct pcie_port {scalar_t__ msi_irq; int * ops; } ;
struct histb_pcie {int * phy; int * bus_reset; int * sys_reset; int * soft_reset; int * bus_clk; int * sys_clk; int * pipe_clk; int * aux_clk; int reset_gpio; int * vpcie; int * ctrl; struct dw_pcie* pci; } ;
struct dw_pcie {int * dbi_base; int * ops; struct device* dev; struct pcie_port pp; } ;
struct device_node {int dummy; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int ,unsigned long,char*) ;
 void* FUNC_7 (struct device*,struct resource*) ;
 void* FUNC_8 (struct device*,int,int ) ;
 int * FUNC_9 (struct device*,char*) ;
 int * FUNC_10 (struct device*,char*) ;
 void* FUNC_11 (struct device*,char*) ;
 int FUNC_12 (struct pcie_port*) ;
 int VAR_8 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct pcie_port*) ;
 int VAR_9 ;
 int FUNC_15 (struct device_node*,char*,int ,int*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (struct platform_device*,char*) ;
 struct resource* FUNC_18 (struct platform_device*,int ,char*) ;
 int FUNC_19 (struct platform_device*,struct histb_pcie*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_10)
{
 struct histb_pcie *VAR_11;
 struct dw_pcie *VAR_12;
 struct pcie_port *VAR_13;
 struct resource *VAR_14;
 struct device_node *VAR_15 = VAR_10->dev.of_node;
 struct device *VAR_16 = &VAR_10->dev;
 enum of_gpio_flags VAR_17;
 unsigned long VAR_18 = VAR_5;
 int VAR_19;

 VAR_11 = FUNC_8(VAR_16, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = FUNC_8(VAR_16, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_11->pci = VAR_12;
 VAR_13 = &VAR_12->pp;
 VAR_12->dev = VAR_16;
 VAR_12->ops = &VAR_8;

 VAR_14 = FUNC_18(VAR_10, VAR_6, "control");
 VAR_11->ctrl = FUNC_7(VAR_16, VAR_14);
 if (FUNC_1(VAR_11->ctrl)) {
  FUNC_3(VAR_16, "cannot get control reg base\n");
  return FUNC_2(VAR_11->ctrl);
 }

 VAR_14 = FUNC_18(VAR_10, VAR_6, "rc-dbi");
 VAR_12->dbi_base = FUNC_7(VAR_16, VAR_14);
 if (FUNC_1(VAR_12->dbi_base)) {
  FUNC_3(VAR_16, "cannot get rc-dbi base\n");
  return FUNC_2(VAR_12->dbi_base);
 }

 VAR_11->vpcie = FUNC_10(VAR_16, "vpcie");
 if (FUNC_1(VAR_11->vpcie)) {
  if (FUNC_2(VAR_11->vpcie) != -VAR_1)
   return FUNC_2(VAR_11->vpcie);
  VAR_11->vpcie = ((void*)0);
 }

 VAR_11->reset_gpio = FUNC_15(VAR_15,
    "reset-gpios", 0, &VAR_17);
 if (VAR_17 & VAR_7)
  VAR_18 |= VAR_4;
 if (FUNC_13(VAR_11->reset_gpio)) {
  VAR_19 = FUNC_6(VAR_16, VAR_11->reset_gpio,
    VAR_18, "PCIe device power control");
  if (VAR_19) {
   FUNC_3(VAR_16, "unable to request gpio\n");
   return VAR_19;
  }
 }

 VAR_11->aux_clk = FUNC_5(VAR_16, "aux");
 if (FUNC_1(VAR_11->aux_clk)) {
  FUNC_3(VAR_16, "Failed to get PCIe aux clk\n");
  return FUNC_2(VAR_11->aux_clk);
 }

 VAR_11->pipe_clk = FUNC_5(VAR_16, "pipe");
 if (FUNC_1(VAR_11->pipe_clk)) {
  FUNC_3(VAR_16, "Failed to get PCIe pipe clk\n");
  return FUNC_2(VAR_11->pipe_clk);
 }

 VAR_11->sys_clk = FUNC_5(VAR_16, "sys");
 if (FUNC_1(VAR_11->sys_clk)) {
  FUNC_3(VAR_16, "Failed to get PCIEe sys clk\n");
  return FUNC_2(VAR_11->sys_clk);
 }

 VAR_11->bus_clk = FUNC_5(VAR_16, "bus");
 if (FUNC_1(VAR_11->bus_clk)) {
  FUNC_3(VAR_16, "Failed to get PCIe bus clk\n");
  return FUNC_2(VAR_11->bus_clk);
 }

 VAR_11->soft_reset = FUNC_11(VAR_16, "soft");
 if (FUNC_1(VAR_11->soft_reset)) {
  FUNC_3(VAR_16, "couldn't get soft reset\n");
  return FUNC_2(VAR_11->soft_reset);
 }

 VAR_11->sys_reset = FUNC_11(VAR_16, "sys");
 if (FUNC_1(VAR_11->sys_reset)) {
  FUNC_3(VAR_16, "couldn't get sys reset\n");
  return FUNC_2(VAR_11->sys_reset);
 }

 VAR_11->bus_reset = FUNC_11(VAR_16, "bus");
 if (FUNC_1(VAR_11->bus_reset)) {
  FUNC_3(VAR_16, "couldn't get bus reset\n");
  return FUNC_2(VAR_11->bus_reset);
 }

 if (FUNC_0(VAR_0)) {
  VAR_13->msi_irq = FUNC_17(VAR_10, "msi");
  if (VAR_13->msi_irq < 0) {
   FUNC_3(VAR_16, "Failed to get MSI IRQ\n");
   return VAR_13->msi_irq;
  }
 }

 VAR_11->phy = FUNC_9(VAR_16, "phy");
 if (FUNC_1(VAR_11->phy)) {
  FUNC_4(VAR_16, "no pcie-phy found\n");
  VAR_11->phy = ((void*)0);




 } else {
  FUNC_16(VAR_11->phy);
 }

 VAR_13->ops = &VAR_9;

 FUNC_19(VAR_10, VAR_11);

 VAR_19 = FUNC_14(VAR_13);
 if (VAR_19) {
  FUNC_3(VAR_16, "failed to enable host\n");
  return VAR_19;
 }

 VAR_19 = FUNC_12(VAR_13);
 if (VAR_19) {
  FUNC_3(VAR_16, "failed to initialize host\n");
  return VAR_19;
 }

 return 0;
}
