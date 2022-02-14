
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct pinctrl_map* configs; } ;
struct TYPE_4__ {TYPE_1__ configs; } ;
struct pinctrl_map {scalar_t__ type; TYPE_2__ data; } ;
struct pinctrl_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pinctrl_map*) ;

__attribute__((used)) static void FUNC_1(struct pinctrl_dev *VAR_1,
        struct pinctrl_map *VAR_2,
        unsigned VAR_3)
{
 int VAR_4;


 for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4].type != VAR_0)
   continue;





  FUNC_0(VAR_2[VAR_4].data.configs.configs);
  break;
 }

 FUNC_0(VAR_2);
}
