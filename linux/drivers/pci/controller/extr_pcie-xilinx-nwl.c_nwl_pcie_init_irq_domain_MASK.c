
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nwl_pcie {int leg_mask_lock; int legacy_irq_domain; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device_node*,int ,int *,struct nwl_pcie*) ;
 int VAR_3 ;
 int FUNC_2 (struct nwl_pcie*) ;
 struct device_node* FUNC_3 (struct device_node*,int *) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct nwl_pcie *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 struct device_node *VAR_7;

 VAR_7 = FUNC_3(VAR_6, ((void*)0));
 if (!VAR_7) {
  FUNC_0(VAR_5, "No legacy intc node found\n");
  return -VAR_0;
 }

 VAR_4->legacy_irq_domain = FUNC_1(VAR_7,
       VAR_2,
       &VAR_3,
       VAR_4);
 FUNC_4(VAR_7);
 if (!VAR_4->legacy_irq_domain) {
  FUNC_0(VAR_5, "failed to create IRQ domain\n");
  return -VAR_1;
 }

 FUNC_5(&VAR_4->leg_mask_lock);
 FUNC_2(VAR_4);
 return 0;
}
