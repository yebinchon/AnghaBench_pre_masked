
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int shutdown; int remove; int probe; int * bus; struct module* owner; } ;
struct siox_driver {TYPE_1__ driver; scalar_t__ shutdown; scalar_t__ remove; scalar_t__ probe; int get_data; int set_data; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct siox_driver *VAR_7, struct module *VAR_8)
{
 int VAR_9;

 if (FUNC_2(!VAR_6))
  return -VAR_1;

 if (!VAR_7->set_data && !VAR_7->get_data) {
  FUNC_1("Driver %s doesn't provide needed callbacks\n",
         VAR_7->driver.name);
  return -VAR_0;
 }

 VAR_7->driver.owner = VAR_8;
 VAR_7->driver.bus = &VAR_2;

 if (VAR_7->probe)
  VAR_7->driver.probe = VAR_3;
 if (VAR_7->remove)
  VAR_7->driver.remove = VAR_4;
 if (VAR_7->shutdown)
  VAR_7->driver.shutdown = VAR_5;

 VAR_9 = FUNC_0(&VAR_7->driver);
 if (VAR_9)
  FUNC_1("Failed to register siox driver %s (%d)\n",
         VAR_7->driver.name, VAR_9);

 return VAR_9;
}
