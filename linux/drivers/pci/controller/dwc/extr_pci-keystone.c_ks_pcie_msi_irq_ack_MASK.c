
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_port {int dummy; } ;
struct keystone_pcie {int dummy; } ;
struct irq_data {int hwirq; } ;
struct dw_pcie {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 struct pcie_port* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct keystone_pcie*,int ,scalar_t__) ;
 struct dw_pcie* FUNC_4 (struct pcie_port*) ;
 struct keystone_pcie* FUNC_5 (struct dw_pcie*) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_2)
{
 struct pcie_port *VAR_3 = FUNC_2(VAR_2);
 struct keystone_pcie *VAR_4;
 u32 VAR_5 = VAR_2->hwirq;
 struct dw_pcie *VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_4(VAR_3);
 VAR_4 = FUNC_5(VAR_6);

 VAR_7 = VAR_5 % 8;
 VAR_8 = VAR_5 >> 3;

 FUNC_3(VAR_4, FUNC_1(VAR_7),
      FUNC_0(VAR_8));
 FUNC_3(VAR_4, VAR_0, VAR_7 + VAR_1);
}
