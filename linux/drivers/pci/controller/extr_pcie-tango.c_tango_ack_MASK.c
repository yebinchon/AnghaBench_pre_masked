
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tango_pcie {int base; } ;
struct irq_data {int hwirq; struct tango_pcie* chip_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 struct tango_pcie *VAR_2 = VAR_1->chip_data;
 u32 VAR_3 = (VAR_1->hwirq / 32) * 4;
 u32 VAR_4 = FUNC_0(VAR_1->hwirq % 32);

 FUNC_1(VAR_4, VAR_2->base + VAR_0 + VAR_3);
}
