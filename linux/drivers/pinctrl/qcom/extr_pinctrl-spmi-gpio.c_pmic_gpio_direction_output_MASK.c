
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmic_gpio_state {int ctrl; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct pmic_gpio_state* FUNC_0 (struct gpio_chip*) ;
 unsigned long FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned int,unsigned long*,int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1,
          unsigned VAR_2, int VAR_3)
{
 struct pmic_gpio_state *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_3);

 return FUNC_2(VAR_4->ctrl, VAR_2, &VAR_5, 1);
}
