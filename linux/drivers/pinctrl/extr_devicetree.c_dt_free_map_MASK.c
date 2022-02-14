
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_ops {int (* dt_free_map ) (struct pinctrl_dev*,struct pinctrl_map*,unsigned int) ;} ;
struct pinctrl_map {int dummy; } ;
struct pinctrl_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {struct pinctrl_ops* pctlops; } ;


 int FUNC_0 (struct pinctrl_map*) ;
 int FUNC_1 (struct pinctrl_dev*,struct pinctrl_map*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct pinctrl_dev *VAR_0,
       struct pinctrl_map *VAR_1, unsigned VAR_2)
{
 if (VAR_0) {
  const struct pinctrl_ops *VAR_3 = VAR_0->desc->pctlops;
  if (VAR_3->dt_free_map)
   VAR_3->dt_free_map(VAR_0, VAR_1, VAR_2);
 } else {

  FUNC_0(VAR_1);
 }
}
