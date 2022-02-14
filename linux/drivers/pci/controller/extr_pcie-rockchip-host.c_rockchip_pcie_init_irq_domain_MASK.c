
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pcie {int irq_domain; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct device_node*,int ,int *,struct rockchip_pcie*) ;
 struct device_node* FUNC_2 (int ,int *) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct rockchip_pcie *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct device_node *VAR_5 = FUNC_2(VAR_4->of_node, ((void*)0));

 if (!VAR_5) {
  FUNC_0(VAR_4, "missing child interrupt-controller node\n");
  return -VAR_0;
 }

 VAR_3->irq_domain = FUNC_1(VAR_5, VAR_1,
          &VAR_2, VAR_3);
 FUNC_3(VAR_5);
 if (!VAR_3->irq_domain) {
  FUNC_0(VAR_4, "failed to get a INTx IRQ domain\n");
  return -VAR_0;
 }

 return 0;
}
