
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct ltq_pinmux_info {TYPE_1__* grps; } ;
struct TYPE_2__ {int npins; int * pins; } ;


 struct ltq_pinmux_info* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pinctrl_dev*,int ,unsigned long*,unsigned int) ;

int FUNC_2(struct pinctrl_dev *VAR_0,
   unsigned VAR_1,
   unsigned long *VAR_2,
   unsigned VAR_3)
{
 struct ltq_pinmux_info *VAR_4 = FUNC_0(VAR_0);
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->grps[VAR_1].npins && !VAR_6; VAR_5++)
  VAR_6 = FUNC_1(VAR_0,
    VAR_4->grps[VAR_1].pins[VAR_5],
    VAR_2,
    VAR_3);

 return VAR_6;
}
