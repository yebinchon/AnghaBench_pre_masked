
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct keystone_pcie {scalar_t__* legacy_host_irqs; struct dw_pcie* pci; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct device*,char*,unsigned int) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 struct keystone_pcie* FUNC_4 (struct irq_desc*) ;
 unsigned int FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (struct keystone_pcie*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct irq_desc *VAR_0)
{
 unsigned int VAR_1 = FUNC_5(VAR_0);
 struct keystone_pcie *VAR_2 = FUNC_4(VAR_0);
 struct dw_pcie *VAR_3 = VAR_2->pci;
 struct device *VAR_4 = VAR_3->dev;
 u32 VAR_5 = VAR_1 - VAR_2->legacy_host_irqs[0];
 struct irq_chip *VAR_6 = FUNC_3(VAR_0);

 FUNC_2(VAR_4, ": Handling legacy irq %d\n", VAR_1);






 FUNC_0(VAR_6, VAR_0);
 FUNC_6(VAR_2, VAR_5);
 FUNC_1(VAR_6, VAR_0);
}
