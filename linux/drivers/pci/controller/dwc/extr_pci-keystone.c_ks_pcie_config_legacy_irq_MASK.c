
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keystone_pcie {int* legacy_host_irqs; struct irq_domain* legacy_irq_domain; scalar_t__ is_am6; struct device_node* np; TYPE_1__* pci; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 struct irq_domain* FUNC_3 (struct device_node*,int,int *,int *) ;
 int FUNC_4 (struct device_node*,int) ;
 int FUNC_5 (int,int ,struct keystone_pcie*) ;
 int FUNC_6 (struct keystone_pcie*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct device_node* FUNC_7 (struct device_node*,char*) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct device_node*) ;

__attribute__((used)) static int FUNC_10(struct keystone_pcie *VAR_5)
{
 struct device *VAR_6 = VAR_5->pci->dev;
 struct irq_domain *VAR_7;
 struct device_node *VAR_8 = VAR_5->np;
 struct device_node *VAR_9;
 int VAR_10, VAR_11, VAR_12 = 0, VAR_13;

 VAR_9 = FUNC_7(VAR_8, "legacy-interrupt-controller");
 if (!VAR_9) {




  if (VAR_5->is_am6)
   return 0;
  FUNC_2(VAR_6, "legacy-interrupt-controller node is absent\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_8(VAR_9);
 if (!VAR_10) {
  FUNC_1(VAR_6, "No IRQ entries in legacy-interrupt-controller\n");
  VAR_12 = -VAR_0;
  goto err;
 }

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  VAR_11 = FUNC_4(VAR_9, VAR_13);
  if (!VAR_11) {
   VAR_12 = -VAR_0;
   goto err;
  }
  VAR_5->legacy_host_irqs[VAR_13] = VAR_11;

  FUNC_5(VAR_11,
       VAR_4,
       VAR_5);
 }

 VAR_7 =
  FUNC_3(VAR_9, VAR_2,
          &VAR_3, ((void*)0));
 if (!VAR_7) {
  FUNC_1(VAR_6, "Failed to add irq domain for legacy irqs\n");
  VAR_12 = -VAR_0;
  goto err;
 }
 VAR_5->legacy_irq_domain = VAR_7;

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
  FUNC_6(VAR_5, FUNC_0(VAR_13), VAR_1);

err:
 FUNC_9(VAR_9);
 return VAR_12;
}
