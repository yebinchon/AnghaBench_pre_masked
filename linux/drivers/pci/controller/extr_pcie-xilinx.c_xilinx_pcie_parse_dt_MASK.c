
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_pcie_port {int irq; int reg_base; struct device* dev; } ;
struct resource {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,struct resource*) ;
 int FUNC_4 (struct device*,int ,int ,int,char*,struct xilinx_pcie_port*) ;
 int FUNC_5 (struct device_node*,int ) ;
 int FUNC_6 (struct device_node*,int ,struct resource*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct xilinx_pcie_port *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct device_node *VAR_5 = VAR_4->of_node;
 struct resource VAR_6;
 int VAR_7;

 VAR_7 = FUNC_6(VAR_5, 0, &VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_4, "missing \"reg\" property\n");
  return VAR_7;
 }

 VAR_3->reg_base = FUNC_3(VAR_4, &VAR_6);
 if (FUNC_0(VAR_3->reg_base))
  return FUNC_1(VAR_3->reg_base);

 VAR_3->irq = FUNC_5(VAR_5, 0);
 VAR_7 = FUNC_4(VAR_4, VAR_3->irq, VAR_2,
          VAR_1 | VAR_0,
          "xilinx-pcie", VAR_3);
 if (VAR_7) {
  FUNC_2(VAR_4, "unable to request irq %d\n", VAR_3->irq);
  return VAR_7;
 }

 return 0;
}
