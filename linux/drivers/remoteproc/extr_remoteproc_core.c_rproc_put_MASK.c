
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* parent; } ;
struct rproc {TYPE_3__ dev; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int owner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(struct rproc *VAR_0)
{
 FUNC_0(VAR_0->dev.parent->driver->owner);
 FUNC_1(&VAR_0->dev);
}
