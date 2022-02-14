
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mtk_pcie_port {int irq; int slot; struct mtk_pcie* pcie; } ;
struct mtk_pcie {struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ,struct mtk_pcie_port*) ;
 int FUNC_2 (struct mtk_pcie_port*,struct device_node*) ;
 int VAR_0 ;
 int FUNC_3 (struct platform_device*,int ) ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct mtk_pcie_port *VAR_1,
         struct device_node *VAR_2)
{
 struct mtk_pcie *VAR_3 = VAR_1->pcie;
 struct device *VAR_4 = VAR_3->dev;
 struct platform_device *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2);
 if (VAR_6) {
  FUNC_0(VAR_4, "failed to init PCIe IRQ domain\n");
  return VAR_6;
 }

 VAR_1->irq = FUNC_3(VAR_5, VAR_1->slot);
 FUNC_1(VAR_1->irq,
      VAR_0, VAR_1);

 return 0;
}
