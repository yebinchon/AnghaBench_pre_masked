
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {int dummy; } ;
struct dw_pcie {struct device* dev; } ;
struct dra7xx_pcie {int irq_domain; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct device_node*,int ,int *,struct pcie_port*) ;
 struct device_node* FUNC_2 (struct device_node*,int *) ;
 int FUNC_3 (struct device_node*) ;
 struct dra7xx_pcie* FUNC_4 (struct dw_pcie*) ;
 struct dw_pcie* FUNC_5 (struct pcie_port*) ;

__attribute__((used)) static int FUNC_6(struct pcie_port *VAR_3)
{
 struct dw_pcie *VAR_4 = FUNC_5(VAR_3);
 struct device *VAR_5 = VAR_4->dev;
 struct dra7xx_pcie *VAR_6 = FUNC_4(VAR_4);
 struct device_node *VAR_7 = VAR_5->of_node;
 struct device_node *VAR_8 = FUNC_2(VAR_7, ((void*)0));

 if (!VAR_8) {
  FUNC_0(VAR_5, "No PCIe Intc node found\n");
  return -VAR_0;
 }

 VAR_6->irq_domain = FUNC_1(VAR_8, VAR_1,
         &VAR_2, VAR_3);
 FUNC_3(VAR_8);
 if (!VAR_6->irq_domain) {
  FUNC_0(VAR_5, "Failed to get a INTx IRQ domain\n");
  return -VAR_0;
 }

 return 0;
}
