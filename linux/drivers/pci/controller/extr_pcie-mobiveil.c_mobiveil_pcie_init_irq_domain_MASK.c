
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mobiveil_pcie {int intx_mask_lock; int intx_domain; TYPE_1__* pdev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct device_node*,int ,int *,struct mobiveil_pcie*) ;
 int FUNC_2 (struct mobiveil_pcie*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mobiveil_pcie *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 struct device_node *VAR_5 = VAR_4->of_node;
 int VAR_6;


 VAR_3->intx_domain = FUNC_1(VAR_5, VAR_1,
        &VAR_2, VAR_3);

 if (!VAR_3->intx_domain) {
  FUNC_0(VAR_4, "Failed to get a INTx IRQ domain\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_3->intx_mask_lock);


 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6)
  return VAR_6;

 return 0;
}
