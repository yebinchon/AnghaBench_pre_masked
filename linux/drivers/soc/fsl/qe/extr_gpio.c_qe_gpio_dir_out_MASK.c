
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qe_gpio_chip {int lock; } ;
struct of_mm_gpio_chip {int regs; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int ,int ,int ,int ) ;
 struct qe_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct of_mm_gpio_chip* FUNC_5 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct of_mm_gpio_chip *VAR_4 = FUNC_5(VAR_1);
 struct qe_gpio_chip *VAR_5 = FUNC_1(VAR_1);
 unsigned long VAR_6;

 FUNC_2(VAR_1, VAR_2, VAR_3);

 FUNC_3(&VAR_5->lock, VAR_6);

 FUNC_0(VAR_4->regs, VAR_2, VAR_0, 0, 0, 0);

 FUNC_4(&VAR_5->lock, VAR_6);

 return 0;
}
