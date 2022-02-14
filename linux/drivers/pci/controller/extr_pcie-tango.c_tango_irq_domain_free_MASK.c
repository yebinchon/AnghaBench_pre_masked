
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tango_pcie {int used_msi_lock; int used_msi; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; struct tango_pcie* chip_data; } ;


 int FUNC_0 (int ,int ) ;
 struct irq_data* FUNC_1 (struct irq_domain*,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct irq_domain *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2)
{
 unsigned long VAR_3;
 struct irq_data *VAR_4 = FUNC_1(VAR_0, VAR_1);
 struct tango_pcie *VAR_5 = VAR_4->chip_data;

 FUNC_2(&VAR_5->used_msi_lock, VAR_3);
 FUNC_0(VAR_4->hwirq, VAR_5->used_msi);
 FUNC_3(&VAR_5->used_msi_lock, VAR_3);
}
