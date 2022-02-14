
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct module* owner; int * bus; } ;
struct rpmsg_driver {TYPE_1__ drv; } ;
struct module {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_1(struct rpmsg_driver *VAR_1, struct module *VAR_2)
{
 VAR_1->drv.bus = &VAR_0;
 VAR_1->drv.owner = VAR_2;
 return FUNC_0(&VAR_1->drv);
}
