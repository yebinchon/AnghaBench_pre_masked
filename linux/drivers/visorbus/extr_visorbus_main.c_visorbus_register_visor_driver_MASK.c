
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int owner; int remove; int probe; int * bus; int name; } ;
struct visor_driver {TYPE_1__ driver; int owner; int name; int resume; int pause; int remove; int probe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_1(struct visor_driver *VAR_6)
{

 if (!VAR_2)
  return -VAR_1;
 if (!VAR_6->probe)
  return -VAR_0;
 if (!VAR_6->remove)
  return -VAR_0;
 if (!VAR_6->pause)
  return -VAR_0;
 if (!VAR_6->resume)
  return -VAR_0;

 VAR_6->driver.name = VAR_6->name;
 VAR_6->driver.bus = &VAR_3;
 VAR_6->driver.probe = VAR_4;
 VAR_6->driver.remove = VAR_5;
 VAR_6->driver.owner = VAR_6->owner;
 return FUNC_0(&VAR_6->driver);
}
