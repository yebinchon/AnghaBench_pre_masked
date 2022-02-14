
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pinctrl_dev*,unsigned int const,unsigned long*,unsigned int) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned int const**,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1,
    unsigned VAR_2, unsigned long *VAR_3,
    unsigned VAR_4)
{
 const unsigned *VAR_5;
 unsigned VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, &VAR_5, &VAR_6);
 if (VAR_8)
  return VAR_8;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_0(VAR_1, VAR_5[VAR_7], VAR_3, VAR_4))
   return -VAR_0;
 }
 return 0;
}
