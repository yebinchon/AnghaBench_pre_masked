
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct ltq_pinmux_info {TYPE_1__* funcs; } ;
struct TYPE_2__ {char** groups; unsigned int num_groups; } ;


 struct ltq_pinmux_info* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
    unsigned VAR_1,
    const char * const **VAR_2,
    unsigned * const VAR_3)
{
 struct ltq_pinmux_info *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = VAR_4->funcs[VAR_1].groups;
 *VAR_3 = VAR_4->funcs[VAR_1].num_groups;

 return 0;
}
