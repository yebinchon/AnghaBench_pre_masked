
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_pcie_priv {int legacy_irq_domain; } ;
struct pcie_port {int irq; } ;
struct dw_pcie {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct device_node*,int ,int *,struct pcie_port*) ;
 int FUNC_2 (struct device_node*,int ) ;
 int FUNC_3 (int ,int ,struct pcie_port*) ;
 struct device_node* FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*) ;
 struct dw_pcie* FUNC_6 (struct pcie_port*) ;
 struct uniphier_pcie_priv* FUNC_7 (struct dw_pcie*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct pcie_port *VAR_5)
{
 struct dw_pcie *VAR_6 = FUNC_6(VAR_5);
 struct uniphier_pcie_priv *VAR_7 = FUNC_7(VAR_6);
 struct device_node *VAR_8 = VAR_6->dev->of_node;
 struct device_node *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_4(VAR_8, "legacy-interrupt-controller");
 if (!VAR_9) {
  FUNC_0(VAR_6->dev, "Failed to get legacy-interrupt-controller node\n");
  return -VAR_0;
 }

 VAR_5->irq = FUNC_2(VAR_9, 0);
 if (!VAR_5->irq) {
  FUNC_0(VAR_6->dev, "Failed to get an IRQ entry in legacy-interrupt-controller\n");
  VAR_10 = -VAR_0;
  goto out_put_node;
 }

 VAR_7->legacy_irq_domain = FUNC_1(VAR_9, VAR_2,
      &VAR_3, VAR_5);
 if (!VAR_7->legacy_irq_domain) {
  FUNC_0(VAR_6->dev, "Failed to get INTx domain\n");
  VAR_10 = -VAR_1;
  goto out_put_node;
 }

 FUNC_3(VAR_5->irq, VAR_4,
      VAR_5);

out_put_node:
 FUNC_5(VAR_9);
 return VAR_10;
}
