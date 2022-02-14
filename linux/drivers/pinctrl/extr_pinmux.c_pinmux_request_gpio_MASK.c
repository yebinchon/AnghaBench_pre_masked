
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int name; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*,int ,unsigned int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int,char const*,struct pinctrl_gpio_range*) ;

int FUNC_3(struct pinctrl_dev *VAR_2,
   struct pinctrl_gpio_range *VAR_3,
   unsigned VAR_4, unsigned VAR_5)
{
 const char *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_0(VAR_1, "%s:%d", VAR_3->name, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_6, VAR_3);
 if (VAR_7 < 0)
  FUNC_1(VAR_6);

 return VAR_7;
}
