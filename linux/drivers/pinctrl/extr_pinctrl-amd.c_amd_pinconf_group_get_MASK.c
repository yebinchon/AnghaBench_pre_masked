
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pinctrl_dev*,unsigned int,unsigned int const**,unsigned int*) ;
 scalar_t__ FUNC_1 (struct pinctrl_dev*,unsigned int const,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1,
    unsigned int VAR_2,
    unsigned long *VAR_3)
{
 const unsigned *VAR_4;
 unsigned VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (FUNC_1(VAR_1, VAR_4[0], VAR_3))
   return -VAR_0;

 return 0;
}
