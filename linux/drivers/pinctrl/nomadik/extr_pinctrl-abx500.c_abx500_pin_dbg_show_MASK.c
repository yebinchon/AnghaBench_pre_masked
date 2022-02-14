
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct gpio_chip {unsigned int base; } ;
struct abx500_pinctrl {struct gpio_chip chip; } ;


 int FUNC_0 (struct seq_file*,struct pinctrl_dev*,struct gpio_chip*,unsigned int,unsigned int) ;
 struct abx500_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static void FUNC_2(struct pinctrl_dev *VAR_0,
    struct seq_file *VAR_1, unsigned VAR_2)
{
 struct abx500_pinctrl *VAR_3 = FUNC_1(VAR_0);
 struct gpio_chip *VAR_4 = &VAR_3->chip;

 FUNC_0(VAR_1, VAR_0, VAR_4, VAR_2,
     VAR_4->base + VAR_2 - 1);
}
