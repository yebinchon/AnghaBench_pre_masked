
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_phandle_args {int* args; } ;
struct gpio_chip {int of_gpio_n_cells; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct gpio_chip *VAR_1,
    const struct of_phandle_args *VAR_2,
    u32 *VAR_3)
{
 if (VAR_1->of_gpio_n_cells < 2)
  return -VAR_0;

 if (VAR_3)
  *VAR_3 = VAR_2->args[1];

 return VAR_2->args[0] - 1;
}
