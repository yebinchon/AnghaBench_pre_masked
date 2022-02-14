
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pinctrl_dev*,unsigned int const,unsigned long*) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned int const**,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1,
  unsigned int VAR_2, unsigned long *VAR_3)
{
 const unsigned int *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, &VAR_4, &VAR_6);
 if (VAR_8)
  return VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if (FUNC_0(VAR_1, VAR_4[VAR_5], VAR_3))
   return -VAR_0;


  if (VAR_5 && (VAR_7 != *VAR_3))
   return -VAR_0;

  VAR_7 = *VAR_3;
 }

 return 0;
}
