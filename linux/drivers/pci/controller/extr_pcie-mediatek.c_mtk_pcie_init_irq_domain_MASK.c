
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pcie_port {int irq_domain; TYPE_1__* pcie; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct device_node*,int ,int *,struct mtk_pcie_port*) ;
 int FUNC_3 (struct mtk_pcie_port*) ;
 struct device_node* FUNC_4 (struct device_node*,int *) ;
 int FUNC_5 (struct device_node*) ;

__attribute__((used)) static int FUNC_6(struct mtk_pcie_port *VAR_4,
        struct device_node *VAR_5)
{
 struct device *VAR_6 = VAR_4->pcie->dev;
 struct device_node *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_4(VAR_5, ((void*)0));
 if (!VAR_7) {
  FUNC_1(VAR_6, "no PCIe Intc node found\n");
  return -VAR_1;
 }

 VAR_4->irq_domain = FUNC_2(VAR_7, VAR_2,
       &VAR_3, VAR_4);
 FUNC_5(VAR_7);
 if (!VAR_4->irq_domain) {
  FUNC_1(VAR_6, "failed to get INTx IRQ domain\n");
  return -VAR_1;
 }

 if (FUNC_0(VAR_0)) {
  VAR_8 = FUNC_3(VAR_4);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
