
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_gpio_bank {int pc; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct st_gpio_bank* FUNC_0 (struct pinctrl_gpio_range*) ;
 int FUNC_1 (struct st_gpio_bank*,unsigned int,int ) ;
 int FUNC_2 (int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_2,
   struct pinctrl_gpio_range *VAR_3, unsigned VAR_4,
   bool VAR_5)
{
 struct st_gpio_bank *VAR_6 = FUNC_0(VAR_3);





 FUNC_2(&VAR_6->pc, VAR_4, 0);
 FUNC_1(VAR_6, VAR_4, VAR_5 ?
  VAR_0 : VAR_1);

 return 0;
}
