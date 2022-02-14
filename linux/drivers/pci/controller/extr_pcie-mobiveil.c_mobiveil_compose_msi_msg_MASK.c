
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msi_msg {int data; int address_lo; int address_hi; } ;
struct mobiveil_pcie {TYPE_1__* pdev; scalar_t__ pcie_reg_base; } ;
struct irq_data {int hwirq; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int,int ,int ) ;
 struct mobiveil_pcie* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0, struct msi_msg *VAR_1)
{
 struct mobiveil_pcie *VAR_2 = FUNC_1(VAR_0);
 phys_addr_t VAR_3 = VAR_2->pcie_reg_base + (VAR_0->hwirq * sizeof(int));

 VAR_1->address_lo = FUNC_2(VAR_3);
 VAR_1->address_hi = FUNC_3(VAR_3);
 VAR_1->data = VAR_0->hwirq;

 FUNC_0(&VAR_2->pdev->dev, "msi#%d address_hi %#x address_lo %#x\n",
  (int)VAR_0->hwirq, VAR_1->address_hi, VAR_1->address_lo);
}
