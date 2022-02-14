
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct ltq_pinmux_info {unsigned int num_funcs; TYPE_1__* funcs; } ;
struct TYPE_2__ {char const* name; } ;


 struct ltq_pinmux_info* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_0,
      unsigned VAR_1)
{
 struct ltq_pinmux_info *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 >= VAR_2->num_funcs)
  return ((void*)0);

 return VAR_2->funcs[VAR_1].name;
}
