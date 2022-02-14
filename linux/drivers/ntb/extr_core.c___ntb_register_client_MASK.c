
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; struct module* owner; int * bus; } ;
struct ntb_client {TYPE_1__ drv; int ops; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ntb_client *VAR_2, struct module *VAR_3,
     const char *VAR_4)
{
 if (!VAR_2)
  return -VAR_0;
 if (!FUNC_2(&VAR_2->ops))
  return -VAR_0;

 FUNC_1(&VAR_2->drv, 0, sizeof(VAR_2->drv));
 VAR_2->drv.bus = &VAR_1;
 VAR_2->drv.name = VAR_4;
 VAR_2->drv.owner = VAR_3;

 return FUNC_0(&VAR_2->drv);
}
