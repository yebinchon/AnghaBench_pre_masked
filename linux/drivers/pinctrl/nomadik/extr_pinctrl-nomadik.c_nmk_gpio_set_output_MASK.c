
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmk_gpio_chip {int clk; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct nmk_gpio_chip*,unsigned int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct nmk_gpio_chip* FUNC_3 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1,
    int VAR_2)
{
 struct nmk_gpio_chip *VAR_3 = FUNC_3(VAR_0);

 FUNC_2(VAR_3->clk);

 FUNC_0(VAR_3, VAR_1, VAR_2);

 FUNC_1(VAR_3->clk);
}
