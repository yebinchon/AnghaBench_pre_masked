
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; int name; } ;
struct sdio_driver {TYPE_1__ drv; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_1(struct sdio_driver *VAR_1)
{
 VAR_1->drv.name = VAR_1->name;
 VAR_1->drv.bus = &VAR_0;
 return FUNC_0(&VAR_1->drv);
}
