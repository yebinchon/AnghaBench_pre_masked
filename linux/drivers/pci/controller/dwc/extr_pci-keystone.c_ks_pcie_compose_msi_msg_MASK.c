
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pcie_port {int dummy; } ;
struct msi_msg {int address_lo; int address_hi; scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ start; } ;
struct keystone_pcie {TYPE_1__ app; } ;
struct irq_data {scalar_t__ hwirq; } ;
struct dw_pcie {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 struct pcie_port* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (scalar_t__) ;
 struct dw_pcie* FUNC_3 (struct pcie_port*) ;
 struct keystone_pcie* FUNC_4 (struct dw_pcie*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_1, struct msi_msg *VAR_2)
{
 struct pcie_port *VAR_3 = FUNC_1(VAR_1);
 struct keystone_pcie *VAR_4;
 struct dw_pcie *VAR_5;
 u64 VAR_6;

 VAR_5 = FUNC_3(VAR_3);
 VAR_4 = FUNC_4(VAR_5);

 VAR_6 = VAR_4->app.start + VAR_0;
 VAR_2->address_lo = FUNC_2(VAR_6);
 VAR_2->address_hi = FUNC_5(VAR_6);
 VAR_2->data = VAR_1->hwirq;

 FUNC_0(VAR_5->dev, "msi#%d address_hi %#x address_lo %#x\n",
  (int)VAR_1->hwirq, VAR_2->address_hi, VAR_2->address_lo);
}
