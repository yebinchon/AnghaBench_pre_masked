
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct gpio_chip {unsigned int base; } ;


 struct gpio_chip* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct seq_file*,struct pinctrl_dev*,struct gpio_chip*,unsigned int,unsigned int) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct pinctrl_dev *VAR_0, struct seq_file *VAR_1,
     unsigned VAR_2)
{
 struct gpio_chip *VAR_3 = FUNC_0(VAR_2);

 if (!VAR_3) {
  FUNC_2(VAR_1, "invalid pin offset");
  return;
 }
 FUNC_1(VAR_1, VAR_0, VAR_3, VAR_2 - VAR_3->base, VAR_2);
}
