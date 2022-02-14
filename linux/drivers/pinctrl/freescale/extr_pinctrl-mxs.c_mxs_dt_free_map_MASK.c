
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_5__ {struct pinctrl_map* configs; } ;
struct TYPE_4__ {struct pinctrl_map* group; } ;
struct TYPE_6__ {TYPE_2__ configs; TYPE_1__ mux; } ;
struct pinctrl_map {scalar_t__ type; TYPE_3__ data; } ;
struct pinctrl_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pinctrl_map*) ;

__attribute__((used)) static void FUNC_1(struct pinctrl_dev *VAR_2,
       struct pinctrl_map *VAR_3, unsigned VAR_4)
{
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_3[VAR_5].type == VAR_1)
   FUNC_0(VAR_3[VAR_5].data.mux.group);
  if (VAR_3[VAR_5].type == VAR_0)
   FUNC_0(VAR_3[VAR_5].data.configs.configs);
 }

 FUNC_0(VAR_3);
}
