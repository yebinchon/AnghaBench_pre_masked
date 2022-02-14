
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* mod_name; int * bus; struct module* owner; int name; } ;
struct umc_driver {TYPE_1__ driver; int name; } ;
struct module {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_1(struct umc_driver *VAR_1, struct module *VAR_2,
     const char *VAR_3)
{
 VAR_1->driver.name = VAR_1->name;
 VAR_1->driver.owner = VAR_2;
 VAR_1->driver.mod_name = VAR_3;
 VAR_1->driver.bus = &VAR_0;

 return FUNC_0(&VAR_1->driver);
}
