
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int function; } ;
struct TYPE_4__ {TYPE_1__ mux; } ;
struct pinctrl_map {int name; TYPE_2__ data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;

int FUNC_1(const struct pinctrl_map *VAR_1, int VAR_2)
{
 if (!VAR_1->data.mux.function) {
  FUNC_0("failed to register map %s (%d): no function given\n",
         VAR_1->name, VAR_2);
  return -VAR_0;
 }

 return 0;
}
