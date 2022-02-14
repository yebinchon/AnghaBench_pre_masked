
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nmk_gpio_chip {int clk; scalar_t__ addr; } ;
struct irq_desc {int dummy; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct irq_desc*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct nmk_gpio_chip* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_4(VAR_1);
 struct nmk_gpio_chip *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4;

 FUNC_2(VAR_3->clk);
 VAR_4 = FUNC_5(VAR_3->addr + VAR_0);
 FUNC_1(VAR_3->clk);

 FUNC_0(VAR_1, VAR_4);
}
