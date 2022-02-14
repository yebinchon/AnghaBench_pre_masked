
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_pcie_port {scalar_t__ base; } ;
struct irq_data {int hwirq; } ;


 scalar_t__ VAR_0 ;
 struct mtk_pcie_port* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 struct mtk_pcie_port *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3 = VAR_1->hwirq;

 FUNC_1(1 << VAR_3, VAR_2->base + VAR_0);
}
