
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pmc {scalar_t__ wake; } ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int) ;
 struct tegra_pmc* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct tegra_pmc *VAR_3 = FUNC_4(VAR_1);
 unsigned int VAR_4, VAR_5;
 u32 VAR_6;


 if (FUNC_3(VAR_1->hwirq == VAR_0))
  return 0;

 VAR_4 = VAR_1->hwirq / 32;
 VAR_5 = VAR_1->hwirq % 32;


 FUNC_6(0x1, VAR_3->wake + FUNC_1(VAR_1->hwirq));


 VAR_6 = FUNC_5(VAR_3->wake + FUNC_2(VAR_4));

 if (!VAR_2)
  VAR_6 &= ~(1 << VAR_5);
 else
  VAR_6 |= 1 << VAR_5;

 FUNC_6(VAR_6, VAR_3->wake + FUNC_2(VAR_4));


 FUNC_6(!!VAR_2, VAR_3->wake + FUNC_0(VAR_1->hwirq));

 return 0;
}
