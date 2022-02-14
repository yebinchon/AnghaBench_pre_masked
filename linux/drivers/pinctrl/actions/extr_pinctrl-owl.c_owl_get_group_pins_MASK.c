
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct owl_pinctrl {TYPE_2__* soc; } ;
struct TYPE_4__ {TYPE_1__* groups; } ;
struct TYPE_3__ {unsigned int* pads; unsigned int npads; } ;


 struct owl_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
    unsigned int VAR_1,
    const unsigned int **VAR_2,
    unsigned int *VAR_3)
{
 struct owl_pinctrl *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = VAR_4->soc->groups[VAR_1].pads;
 *VAR_3 = VAR_4->soc->groups[VAR_1].npads;

 return 0;
}
