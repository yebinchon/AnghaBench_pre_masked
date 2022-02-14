
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mobiveil_msi {int lock; int msi_irq_in_use; } ;
struct mobiveil_pcie {TYPE_1__* pdev; struct mobiveil_msi msi; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 struct mobiveil_pcie* FUNC_2 (struct irq_data*) ;
 struct irq_data* FUNC_3 (struct irq_domain*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct irq_domain *VAR_0,
      unsigned int VAR_1,
      unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_3(VAR_0, VAR_1);
 struct mobiveil_pcie *VAR_4 = FUNC_2(VAR_3);
 struct mobiveil_msi *VAR_5 = &VAR_4->msi;

 FUNC_4(&VAR_5->lock);

 if (!FUNC_6(VAR_3->hwirq, VAR_5->msi_irq_in_use))
  FUNC_1(&VAR_4->pdev->dev, "trying to free unused MSI#%lu\n",
   VAR_3->hwirq);
 else
  FUNC_0(VAR_3->hwirq, VAR_5->msi_irq_in_use);

 FUNC_5(&VAR_5->lock);
}
