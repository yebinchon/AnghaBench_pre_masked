
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pcie_port {scalar_t__ msi_data; } ;
struct msi_msg {int address_lo; int address_hi; scalar_t__ data; } ;
struct irq_data {scalar_t__ hwirq; } ;
struct dw_pcie {int dev; } ;


 int FUNC_0 (int ,char*,int,int ,int ) ;
 struct pcie_port* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (scalar_t__) ;
 struct dw_pcie* FUNC_3 (struct pcie_port*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0, struct msi_msg *VAR_1)
{
 struct pcie_port *VAR_2 = FUNC_1(VAR_0);
 struct dw_pcie *VAR_3 = FUNC_3(VAR_2);
 u64 VAR_4;

 VAR_4 = (u64)VAR_2->msi_data;

 VAR_1->address_lo = FUNC_2(VAR_4);
 VAR_1->address_hi = FUNC_4(VAR_4);

 VAR_1->data = VAR_0->hwirq;

 FUNC_0(VAR_3->dev, "msi#%d address_hi %#x address_lo %#x\n",
  (int)VAR_0->hwirq, VAR_1->address_hi, VAR_1->address_lo);
}
