
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp2p_entry {int irq_enabled; } ;
struct irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 struct smp2p_entry* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct smp2p_entry *VAR_1 = FUNC_0(VAR_0);
 irq_hw_number_t VAR_2 = FUNC_1(VAR_0);

 FUNC_2(VAR_2, VAR_1->irq_enabled);
}
