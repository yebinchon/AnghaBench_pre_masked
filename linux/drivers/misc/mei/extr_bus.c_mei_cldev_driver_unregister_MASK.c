
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct mei_cl_driver {TYPE_1__ driver; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(struct mei_cl_driver *VAR_0)
{
 FUNC_0(&VAR_0->driver);

 FUNC_1("mei: driver [%s] unregistered\n", VAR_0->driver.name);
}
