
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_pin_desc {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (struct pinctrl_dev*,struct pinctrl_pin_desc const*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
     const struct pinctrl_pin_desc *VAR_1,
     unsigned VAR_2)
{
 unsigned VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, &VAR_1[VAR_3]);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
