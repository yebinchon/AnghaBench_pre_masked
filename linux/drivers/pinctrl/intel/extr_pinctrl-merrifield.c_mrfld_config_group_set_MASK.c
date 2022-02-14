
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (struct pinctrl_dev*,unsigned int const,unsigned long*,unsigned int) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned int const**,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
      unsigned int VAR_1, unsigned long *VAR_2,
      unsigned int VAR_3)
{
 const unsigned int *VAR_4;
 unsigned int VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_4, &VAR_5);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = FUNC_0(VAR_0, VAR_4[VAR_6], VAR_2, VAR_3);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
