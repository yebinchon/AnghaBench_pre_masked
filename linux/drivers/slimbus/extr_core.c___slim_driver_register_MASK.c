
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct module* owner; int * bus; scalar_t__ of_match_table; } ;
struct slim_driver {TYPE_1__ driver; int probe; scalar_t__ id_table; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

int FUNC_1(struct slim_driver *VAR_2, struct module *VAR_3)
{

 if (!(VAR_2->driver.of_match_table || VAR_2->id_table) || !VAR_2->probe)
  return -VAR_0;

 VAR_2->driver.bus = &VAR_1;
 VAR_2->driver.owner = VAR_3;

 return FUNC_0(&VAR_2->driver);
}
