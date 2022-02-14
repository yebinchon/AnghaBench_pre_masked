
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pinctrl_dev*,unsigned int const,unsigned long*) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned int const**,unsigned int*) ;

int FUNC_2(struct pinctrl_dev *VAR_1,
  unsigned int VAR_2,
  unsigned long *VAR_3)
{
 const unsigned int *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_4[0], VAR_3);

 return VAR_6;
}
