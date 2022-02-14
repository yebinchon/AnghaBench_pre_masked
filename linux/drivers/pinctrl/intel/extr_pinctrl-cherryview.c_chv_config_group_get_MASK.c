
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (struct pinctrl_dev*,unsigned int const,unsigned long*) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned int const**,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
    unsigned int VAR_1,
    unsigned long *VAR_2)
{
 const unsigned int *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_3[0], VAR_2);
 if (VAR_5)
  return VAR_5;

 return 0;
}
