
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct mxs_pinctrl_data {TYPE_2__* soc; } ;
struct TYPE_4__ {TYPE_1__* groups; } ;
struct TYPE_3__ {unsigned long config; } ;


 struct mxs_pinctrl_data* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
     unsigned VAR_1, unsigned long *VAR_2)
{
 struct mxs_pinctrl_data *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->soc->groups[VAR_1].config;

 return 0;
}
