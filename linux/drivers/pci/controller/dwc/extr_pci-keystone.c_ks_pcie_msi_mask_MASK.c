
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_port {int lock; } ;
struct keystone_pcie {int dummy; } ;
struct irq_data {int hwirq; } ;
struct dw_pcie {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct pcie_port* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct keystone_pcie*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct dw_pcie* FUNC_6 (struct pcie_port*) ;
 struct keystone_pcie* FUNC_7 (struct dw_pcie*) ;

__attribute__((used)) static void FUNC_8(struct irq_data *VAR_0)
{
 struct pcie_port *VAR_1 = FUNC_2(VAR_0);
 struct keystone_pcie *VAR_2;
 u32 VAR_3 = VAR_0->hwirq;
 struct dw_pcie *VAR_4;
 unsigned long VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 FUNC_4(&VAR_1->lock, VAR_5);

 VAR_4 = FUNC_6(VAR_1);
 VAR_2 = FUNC_7(VAR_4);

 VAR_6 = VAR_3 % 8;
 VAR_7 = VAR_3 >> 3;

 FUNC_3(VAR_2, FUNC_1(VAR_6),
      FUNC_0(VAR_7));

 FUNC_5(&VAR_1->lock, VAR_5);
}
