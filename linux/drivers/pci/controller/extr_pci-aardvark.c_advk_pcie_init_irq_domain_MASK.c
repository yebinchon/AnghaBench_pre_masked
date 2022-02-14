
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_chip {int irq_unmask; void* irq_mask_ack; void* irq_mask; int name; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct advk_pcie {int irq_domain; struct irq_chip irq_chip; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ,char*,int ) ;
 int FUNC_3 (struct device_node*,int ,int *,struct advk_pcie*) ;
 struct device_node* FUNC_4 (struct device_node*,int *) ;
 int FUNC_5 (struct device_node*) ;

__attribute__((used)) static int FUNC_6(struct advk_pcie *VAR_7)
{
 struct device *VAR_8 = &VAR_7->pdev->dev;
 struct device_node *VAR_9 = VAR_8->of_node;
 struct device_node *VAR_10;
 struct irq_chip *VAR_11;
 int VAR_12 = 0;

 VAR_10 = FUNC_4(VAR_9, ((void*)0));
 if (!VAR_10) {
  FUNC_0(VAR_8, "No PCIe Intc node found\n");
  return -VAR_0;
 }

 VAR_11 = &VAR_7->irq_chip;

 VAR_11->name = FUNC_2(VAR_8, VAR_2, "%s-irq",
     FUNC_1(VAR_8));
 if (!VAR_11->name) {
  VAR_12 = -VAR_1;
  goto out_put_node;
 }

 VAR_11->irq_mask = VAR_5;
 VAR_11->irq_mask_ack = VAR_5;
 VAR_11->irq_unmask = VAR_6;

 VAR_7->irq_domain =
  FUNC_3(VAR_10, VAR_3,
          &VAR_4, VAR_7);
 if (!VAR_7->irq_domain) {
  FUNC_0(VAR_8, "Failed to get a INTx IRQ domain\n");
  VAR_12 = -VAR_1;
  goto out_put_node;
 }

out_put_node:
 FUNC_5(VAR_10);
 return VAR_12;
}
