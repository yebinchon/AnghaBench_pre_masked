
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8xxx_gpio {unsigned int npins; } ;
struct pinctrl_dev {int dummy; } ;


 struct pm8xxx_gpio* FUNC_0 (struct pinctrl_dev*) ;
 char** VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_1,
          unsigned VAR_2,
          const char * const **VAR_3,
          unsigned * const VAR_4)
{
 struct pm8xxx_gpio *VAR_5 = FUNC_0(VAR_1);

 *VAR_3 = VAR_0;
 *VAR_4 = VAR_5->npins;
 return 0;
}
