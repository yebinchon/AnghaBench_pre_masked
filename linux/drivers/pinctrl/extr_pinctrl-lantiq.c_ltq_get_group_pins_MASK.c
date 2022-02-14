
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct ltq_pinmux_info {unsigned int num_grps; TYPE_1__* grps; } ;
struct TYPE_2__ {unsigned int* pins; unsigned int npins; } ;


 int VAR_0 ;
 struct ltq_pinmux_info* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_1,
     unsigned VAR_2,
     const unsigned **VAR_3,
     unsigned *VAR_4)
{
 struct ltq_pinmux_info *VAR_5 = FUNC_0(VAR_1);
 if (VAR_2 >= VAR_5->num_grps)
  return -VAR_0;
 *VAR_3 = VAR_5->grps[VAR_2].pins;
 *VAR_4 = VAR_5->grps[VAR_2].npins;
 return 0;
}
