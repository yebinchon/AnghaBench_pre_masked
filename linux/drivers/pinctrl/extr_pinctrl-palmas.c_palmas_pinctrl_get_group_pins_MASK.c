
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct palmas_pctrl_chip_info {TYPE_1__* pin_groups; } ;
struct TYPE_2__ {unsigned int* pins; unsigned int npins; } ;


 struct palmas_pctrl_chip_info* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
  unsigned VAR_1, const unsigned **VAR_2, unsigned *VAR_3)
{
 struct palmas_pctrl_chip_info *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = VAR_4->pin_groups[VAR_1].pins;
 *VAR_3 = VAR_4->pin_groups[VAR_1].npins;
 return 0;
}
