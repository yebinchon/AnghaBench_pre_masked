
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;
struct amd_gpio {int lock; scalar_t__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct amd_gpio* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_1)
{
 u32 VAR_2;
 unsigned long VAR_3;
 struct gpio_chip *VAR_4 = FUNC_2(VAR_1);
 struct amd_gpio *VAR_5 = FUNC_1(VAR_4);

 FUNC_3(&VAR_5->lock, VAR_3);
 VAR_2 = FUNC_5(VAR_5->base + (VAR_1->hwirq)*4);
 VAR_2 |= FUNC_0(VAR_0);
 FUNC_6(VAR_2, VAR_5->base + (VAR_1->hwirq)*4);
 FUNC_4(&VAR_5->lock, VAR_3);
}
