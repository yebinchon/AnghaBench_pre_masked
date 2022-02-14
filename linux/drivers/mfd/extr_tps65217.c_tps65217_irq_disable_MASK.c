
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tps65217 {int irq_mask; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct tps65217* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 struct tps65217 *VAR_2 = FUNC_1(VAR_1);
 u8 VAR_3 = FUNC_0(VAR_1->hwirq) << VAR_0;

 VAR_2->irq_mask |= VAR_3;
}
