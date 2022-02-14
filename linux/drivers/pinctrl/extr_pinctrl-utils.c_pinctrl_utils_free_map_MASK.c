
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct pinctrl_map* configs; } ;
struct TYPE_4__ {TYPE_1__ configs; } ;
struct pinctrl_map {int type; TYPE_2__ data; } ;
struct pinctrl_dev {int dummy; } ;




 int FUNC_0 (struct pinctrl_map*) ;

void FUNC_1(struct pinctrl_dev *VAR_0,
       struct pinctrl_map *VAR_1, unsigned VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  switch (VAR_1[VAR_3].type) {
  case 129:
  case 128:
   FUNC_0(VAR_1[VAR_3].data.configs.configs);
   break;
  default:
   break;
  }
 }
 FUNC_0(VAR_1);
}
