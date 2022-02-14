
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct intel_pinctrl {TYPE_2__* soc; } ;
struct TYPE_4__ {TYPE_1__* groups; } ;
struct TYPE_3__ {char const* name; } ;


 struct intel_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_0,
          unsigned int VAR_1)
{
 struct intel_pinctrl *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->soc->groups[VAR_1].name;
}
