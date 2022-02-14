
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keystone_pcie {int msi_host_irq; scalar_t__ is_am6; struct device_node* np; TYPE_1__* pci; } ;
struct irq_data {int hwirq; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 struct irq_data* FUNC_3 (int) ;
 int FUNC_4 (struct device_node*,int) ;
 int FUNC_5 (int,int ,struct keystone_pcie*) ;
 int VAR_2 ;
 struct device_node* FUNC_6 (struct device_node*,char*) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*) ;

__attribute__((used)) static int FUNC_9(struct keystone_pcie *VAR_3)
{
 struct device *VAR_4 = VAR_3->pci->dev;
 struct device_node *VAR_5 = VAR_3->np;
 struct device_node *VAR_6;
 struct irq_data *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 if (!FUNC_0(VAR_0))
  return 0;

 VAR_6 = FUNC_6(VAR_5, "msi-interrupt-controller");
 if (!VAR_6) {
  if (VAR_3->is_am6)
   return 0;
  FUNC_2(VAR_4, "msi-interrupt-controller node is absent\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_7(VAR_6);
 if (!VAR_8) {
  FUNC_1(VAR_4, "No IRQ entries in msi-interrupt-controller\n");
  VAR_10 = -VAR_1;
  goto err;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_9 = FUNC_4(VAR_6, VAR_11);
  if (!VAR_9) {
   VAR_10 = -VAR_1;
   goto err;
  }

  if (!VAR_3->msi_host_irq) {
   VAR_7 = FUNC_3(VAR_9);
   if (!VAR_7) {
    VAR_10 = -VAR_1;
    goto err;
   }
   VAR_3->msi_host_irq = VAR_7->hwirq;
  }

  FUNC_5(VAR_9, VAR_2,
       VAR_3);
 }

 FUNC_8(VAR_6);
 return 0;

err:
 FUNC_8(VAR_6);
 return VAR_10;
}
