
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_pfc_gpio_data_reg {TYPE_1__* info; } ;
struct sh_pfc_chip {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {unsigned int reg_width; } ;


 int FUNC_0 (struct sh_pfc_chip*,unsigned int,struct sh_pfc_gpio_data_reg**,unsigned int*) ;
 unsigned int FUNC_1 (struct sh_pfc_chip*,TYPE_1__*) ;
 struct sh_pfc_chip* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct sh_pfc_chip *VAR_2 = FUNC_2(VAR_0);
 struct sh_pfc_gpio_data_reg *VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 FUNC_0(VAR_2, VAR_1, &VAR_3, &VAR_4);

 VAR_5 = VAR_3->info->reg_width - (VAR_4 + 1);

 return (FUNC_1(VAR_2, VAR_3->info) >> VAR_5) & 1;
}
