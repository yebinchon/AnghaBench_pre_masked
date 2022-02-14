
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shutdown; int remove; int probe; struct module* owner; int * bus; } ;
struct sdw_driver {TYPE_1__ driver; scalar_t__ shutdown; scalar_t__ remove; int name; int probe; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2(struct sdw_driver *VAR_5, struct module *VAR_6)
{
 VAR_5->driver.bus = &VAR_1;

 if (!VAR_5->probe) {
  FUNC_1("driver %s didn't provide SDW probe routine\n",
         VAR_5->name);
  return -VAR_0;
 }

 VAR_5->driver.owner = VAR_6;
 VAR_5->driver.probe = VAR_2;

 if (VAR_5->remove)
  VAR_5->driver.remove = VAR_3;

 if (VAR_5->shutdown)
  VAR_5->driver.shutdown = VAR_4;

 return FUNC_0(&VAR_5->driver);
}
