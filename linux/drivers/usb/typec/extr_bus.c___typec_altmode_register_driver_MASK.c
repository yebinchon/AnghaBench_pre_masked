
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; struct module* owner; } ;
struct typec_altmode_driver {TYPE_1__ driver; int probe; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

int FUNC_1(struct typec_altmode_driver *VAR_2,
        struct module *VAR_3)
{
 if (!VAR_2->probe)
  return -VAR_0;

 VAR_2->driver.owner = VAR_3;
 VAR_2->driver.bus = &VAR_1;

 return FUNC_0(&VAR_2->driver);
}
