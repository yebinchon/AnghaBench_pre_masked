
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb10x_pinctrl {TYPE_1__* pinfuncs; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {char* group; } ;


 struct tb10x_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
    unsigned VAR_1, const char * const **VAR_2,
    unsigned * const VAR_3)
{
 struct tb10x_pinctrl *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = &VAR_4->pinfuncs[VAR_1].group;
 *VAR_3 = 1;

 return 0;
}
