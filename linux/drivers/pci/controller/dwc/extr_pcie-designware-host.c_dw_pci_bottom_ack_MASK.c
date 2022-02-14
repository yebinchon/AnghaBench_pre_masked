
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {int dummy; } ;
struct irq_data {unsigned int hwirq; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pcie_port*,scalar_t__,int,int ) ;
 struct pcie_port* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_3)
{
 struct pcie_port *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5, VAR_6, VAR_7;

 VAR_7 = VAR_3->hwirq / VAR_0;
 VAR_5 = VAR_7 * VAR_1;
 VAR_6 = VAR_3->hwirq % VAR_0;

 FUNC_1(VAR_4, VAR_2 + VAR_5, 4, FUNC_0(VAR_6));
}
