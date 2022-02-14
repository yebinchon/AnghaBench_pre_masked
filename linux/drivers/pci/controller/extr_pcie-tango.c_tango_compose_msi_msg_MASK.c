
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tango_pcie {int msi_doorbell; } ;
struct msi_msg {int data; int address_hi; int address_lo; } ;
struct irq_data {int hwirq; struct tango_pcie* chip_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0, struct msi_msg *VAR_1)
{
 struct tango_pcie *VAR_2 = VAR_0->chip_data;
 VAR_1->address_lo = FUNC_0(VAR_2->msi_doorbell);
 VAR_1->address_hi = FUNC_1(VAR_2->msi_doorbell);
 VAR_1->data = VAR_0->hwirq;
}
