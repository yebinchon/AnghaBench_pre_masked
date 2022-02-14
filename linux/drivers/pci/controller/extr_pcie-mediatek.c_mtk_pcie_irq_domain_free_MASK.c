
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pcie_port {int lock; int msi_irq_in_use; TYPE_1__* pcie; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 struct mtk_pcie_port* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_domain*,unsigned int,unsigned int) ;
 struct irq_data* FUNC_4 (struct irq_domain*,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct irq_domain *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_4(VAR_0, VAR_1);
 struct mtk_pcie_port *VAR_4 = FUNC_2(VAR_3);

 FUNC_5(&VAR_4->lock);

 if (!FUNC_7(VAR_3->hwirq, VAR_4->msi_irq_in_use))
  FUNC_1(VAR_4->pcie->dev, "trying to free unused MSI#%lu\n",
   VAR_3->hwirq);
 else
  FUNC_0(VAR_3->hwirq, VAR_4->msi_irq_in_use);

 FUNC_6(&VAR_4->lock);

 FUNC_3(VAR_0, VAR_1, VAR_2);
}
