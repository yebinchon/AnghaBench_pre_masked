
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pcie_port {TYPE_1__* pcie; scalar_t__ base; } ;
struct msi_msg {int address_lo; int address_hi; scalar_t__ data; } ;
struct irq_data {scalar_t__ hwirq; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 struct mtk_pcie_port* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1, struct msi_msg *VAR_2)
{
 struct mtk_pcie_port *VAR_3 = FUNC_1(VAR_1);
 phys_addr_t VAR_4;


 VAR_4 = FUNC_3(VAR_3->base + VAR_0);
 VAR_2->address_hi = 0;
 VAR_2->address_lo = FUNC_2(VAR_4);

 VAR_2->data = VAR_1->hwirq;

 FUNC_0(VAR_3->pcie->dev, "msi#%d address_hi %#x address_lo %#x\n",
  (int)VAR_1->hwirq, VAR_2->address_hi, VAR_2->address_lo);
}
