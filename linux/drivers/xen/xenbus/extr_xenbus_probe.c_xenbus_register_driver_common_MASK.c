
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* mod_name; struct module* owner; int * bus; scalar_t__ name; } ;
struct xenbus_driver {TYPE_2__ driver; TYPE_1__* ids; scalar_t__ name; } ;
struct xen_bus_type {int bus; } ;
struct module {int dummy; } ;
struct TYPE_3__ {scalar_t__ devicetype; } ;


 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(struct xenbus_driver *VAR_0,
      struct xen_bus_type *VAR_1,
      struct module *VAR_2, const char *VAR_3)
{
 VAR_0->driver.name = VAR_0->name ? VAR_0->name : VAR_0->ids[0].devicetype;
 VAR_0->driver.bus = &VAR_1->bus;
 VAR_0->driver.owner = VAR_2;
 VAR_0->driver.mod_name = VAR_3;

 return FUNC_0(&VAR_0->driver);
}
