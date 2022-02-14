
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mobiveil_pcie {int intx_mask_lock; } ;
struct irq_desc {int dummy; } ;
struct irq_data {int hwirq; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mobiveil_pcie*,int ) ;
 int FUNC_1 (struct mobiveil_pcie*,int,int ) ;
 struct mobiveil_pcie* FUNC_2 (struct irq_desc*) ;
 struct irq_desc* FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_2)
{
 struct irq_desc *VAR_3 = FUNC_3(VAR_2->irq);
 struct mobiveil_pcie *VAR_4;
 unsigned long VAR_5;
 u32 VAR_6, VAR_7;

 VAR_4 = FUNC_2(VAR_3);
 VAR_6 = 1 << ((VAR_2->hwirq + VAR_1) - 1);
 FUNC_4(&VAR_4->intx_mask_lock, VAR_5);
 VAR_7 = FUNC_0(VAR_4, VAR_0);
 VAR_7 &= ~VAR_6;
 FUNC_1(VAR_4, VAR_7, VAR_0);
 FUNC_5(&VAR_4->intx_mask_lock, VAR_5);
}
