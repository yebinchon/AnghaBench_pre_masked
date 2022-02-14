
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_msg {int data; int address_hi; int address_lo; } ;
struct irq_data {int irq; } ;
struct advk_pcie {int msi_msg; } ;
typedef int phys_addr_t ;


 struct advk_pcie* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0,
      struct msi_msg *VAR_1)
{
 struct advk_pcie *VAR_2 = FUNC_0(VAR_0);
 phys_addr_t VAR_3 = FUNC_3(&VAR_2->msi_msg);

 VAR_1->address_lo = FUNC_1(VAR_3);
 VAR_1->address_hi = FUNC_2(VAR_3);
 VAR_1->data = VAR_0->irq;
}
