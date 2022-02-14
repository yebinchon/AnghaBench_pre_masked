
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct nmk_pinctrl {TYPE_1__* soc; } ;
struct TYPE_4__ {int number; char const* name; } ;
struct TYPE_3__ {int npins; TYPE_2__* pins; } ;


 struct nmk_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (char*,char*,int*) ;

__attribute__((used)) static const char *FUNC_2(struct pinctrl_dev *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;
 struct nmk_pinctrl *VAR_4 = FUNC_0(VAR_0);

 if (FUNC_1((char *)VAR_1, "GPIO%d", &VAR_3) == 1)
  for (VAR_2 = 0; VAR_2 < VAR_4->soc->npins; VAR_2++)
   if (VAR_4->soc->pins[VAR_2].number == VAR_3)
    return VAR_4->soc->pins[VAR_2].name;
 return ((void*)0);
}
