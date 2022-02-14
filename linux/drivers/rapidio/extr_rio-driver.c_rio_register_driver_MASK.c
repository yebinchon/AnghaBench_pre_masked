
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; int name; } ;
struct rio_driver {TYPE_1__ driver; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_1(struct rio_driver *VAR_1)
{

 VAR_1->driver.name = VAR_1->name;
 VAR_1->driver.bus = &VAR_0;


 return FUNC_0(&VAR_1->driver);
}
