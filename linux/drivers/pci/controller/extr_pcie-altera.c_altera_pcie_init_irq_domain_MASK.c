
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct altera_pcie {int irq_domain; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct device_node*,int ,int *,struct altera_pcie*) ;

__attribute__((used)) static int FUNC_2(struct altera_pcie *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 struct device_node *VAR_5 = VAR_4->of_node;


 VAR_3->irq_domain = FUNC_1(VAR_5, VAR_1,
     &VAR_2, VAR_3);
 if (!VAR_3->irq_domain) {
  FUNC_0(VAR_4, "Failed to get a INTx IRQ domain\n");
  return -VAR_0;
 }

 return 0;
}
