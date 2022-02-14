
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_2__ {char const* mod_name; struct module* owner; int name; int * bus; } ;
struct gbphy_driver {int name; TYPE_1__ driver; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct gbphy_driver *VAR_2,
        struct module *VAR_3, const char *VAR_4)
{
 int VAR_5;

 if (FUNC_1())
  return -VAR_0;

 VAR_2->driver.bus = &VAR_1;
 VAR_2->driver.name = VAR_2->name;
 VAR_2->driver.owner = VAR_3;
 VAR_2->driver.mod_name = VAR_4;

 VAR_5 = FUNC_0(&VAR_2->driver);
 if (VAR_5)
  return VAR_5;

 FUNC_2("registered new driver %s\n", VAR_2->name);
 return 0;
}
