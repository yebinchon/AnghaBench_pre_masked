
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tango_pcie {int base; int used_msi_lock; } ;
struct irq_data {int hwirq; struct tango_pcie* chip_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1, bool VAR_2)
{
 unsigned long VAR_3;
 struct tango_pcie *VAR_4 = VAR_1->chip_data;
 u32 VAR_5 = (VAR_1->hwirq / 32) * 4;
 u32 VAR_6 = FUNC_0(VAR_1->hwirq % 32);
 u32 VAR_7;

 FUNC_2(&VAR_4->used_msi_lock, VAR_3);
 VAR_7 = FUNC_1(VAR_4->base + VAR_0 + VAR_5);
 VAR_7 = VAR_2 ? VAR_7 | VAR_6 : VAR_7 & ~VAR_6;
 FUNC_4(VAR_7, VAR_4->base + VAR_0 + VAR_5);
 FUNC_3(&VAR_4->used_msi_lock, VAR_3);
}
