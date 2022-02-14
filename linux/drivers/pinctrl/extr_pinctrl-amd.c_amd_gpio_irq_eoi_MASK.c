
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct amd_gpio {int lock; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct amd_gpio* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;
 struct gpio_chip *VAR_5 = FUNC_1(VAR_2);
 struct amd_gpio *VAR_6 = FUNC_0(VAR_5);

 FUNC_2(&VAR_6->lock, VAR_4);
 VAR_3 = FUNC_4(VAR_6->base + VAR_1);
 VAR_3 |= VAR_0;
 FUNC_5(VAR_3, VAR_6->base + VAR_1);
 FUNC_3(&VAR_6->lock, VAR_4);
}
