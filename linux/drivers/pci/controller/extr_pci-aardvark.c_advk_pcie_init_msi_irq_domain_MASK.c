
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msi_domain_info {int flags; struct irq_chip* chip; } ;
struct irq_chip {char* name; int irq_set_affinity; int irq_compose_msi_msg; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct advk_pcie {int msi_inner_domain; int msi_domain; int msi_msg; struct msi_domain_info msi_domain_info; struct irq_chip msi_irq_chip; struct irq_chip msi_bottom_irq_chip; int msi_used_lock; TYPE_1__* pdev; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct advk_pcie*,int ,int ) ;
 int FUNC_1 (int *,int ,int *,struct advk_pcie*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (int ,struct msi_domain_info*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct advk_pcie *VAR_10)
{
 struct device *VAR_11 = &VAR_10->pdev->dev;
 struct device_node *VAR_12 = VAR_11->of_node;
 struct irq_chip *VAR_13, *VAR_14;
 struct msi_domain_info *VAR_15;
 phys_addr_t VAR_16;

 FUNC_4(&VAR_10->msi_used_lock);

 VAR_13 = &VAR_10->msi_bottom_irq_chip;

 VAR_13->name = "MSI";
 VAR_13->irq_compose_msi_msg = VAR_8;
 VAR_13->irq_set_affinity = VAR_9;

 VAR_14 = &VAR_10->msi_irq_chip;
 VAR_14->name = "advk-MSI";

 VAR_15 = &VAR_10->msi_domain_info;
 VAR_15->flags = VAR_3 | VAR_2 |
  VAR_1;
 VAR_15->chip = VAR_14;

 VAR_16 = FUNC_8(&VAR_10->msi_msg);

 FUNC_0(VAR_10, FUNC_3(VAR_16),
      VAR_6);
 FUNC_0(VAR_10, FUNC_7(VAR_16),
      VAR_5);

 VAR_10->msi_inner_domain =
  FUNC_1(((void*)0), VAR_4,
          &VAR_7, VAR_10);
 if (!VAR_10->msi_inner_domain)
  return -VAR_0;

 VAR_10->msi_domain =
  FUNC_6(FUNC_5(VAR_12),
       VAR_15, VAR_10->msi_inner_domain);
 if (!VAR_10->msi_domain) {
  FUNC_2(VAR_10->msi_inner_domain);
  return -VAR_0;
 }

 return 0;
}
