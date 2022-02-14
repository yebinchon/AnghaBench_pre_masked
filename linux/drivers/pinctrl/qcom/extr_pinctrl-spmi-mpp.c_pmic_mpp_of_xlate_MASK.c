
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_phandle_args {int* args; } ;
struct gpio_chip {int of_gpio_n_cells; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct gpio_chip *VAR_2,
        const struct of_phandle_args *VAR_3,
        u32 *VAR_4)
{
 if (VAR_2->of_gpio_n_cells < 2)
  return -VAR_0;

 if (VAR_4)
  *VAR_4 = VAR_3->args[1];

 return VAR_3->args[0] - VAR_1;
}
