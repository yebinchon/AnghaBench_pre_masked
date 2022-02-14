
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (struct pinctrl_dev*,unsigned int,unsigned long*,int) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0, unsigned int VAR_1,
    unsigned long *VAR_2, unsigned VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_2[VAR_4], 1);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
