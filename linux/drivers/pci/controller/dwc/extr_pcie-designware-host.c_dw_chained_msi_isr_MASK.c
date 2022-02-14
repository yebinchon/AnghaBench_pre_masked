
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {int dummy; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct pcie_port*) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 struct pcie_port* FUNC_4 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_5(struct irq_desc *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_3(VAR_0);
 struct pcie_port *VAR_2;

 FUNC_0(VAR_1, VAR_0);

 VAR_2 = FUNC_4(VAR_0);
 FUNC_2(VAR_2);

 FUNC_1(VAR_1, VAR_0);
}
