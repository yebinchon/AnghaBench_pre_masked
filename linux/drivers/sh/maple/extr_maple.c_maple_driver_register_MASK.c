
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; } ;
struct maple_driver {TYPE_1__ drv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

int FUNC_1(struct maple_driver *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 VAR_2->drv.bus = &VAR_1;

 return FUNC_0(&VAR_2->drv);
}
