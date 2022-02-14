
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_driver {scalar_t__ int_class; } ;
struct ccw_device {TYPE_1__* private; struct ccw_driver* drv; } ;
struct TYPE_2__ {scalar_t__ int_class; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ccw_device *VAR_1)
{
 struct ccw_driver *VAR_2 = VAR_1->drv;



 if (VAR_2->int_class != 0)
  VAR_1->private->int_class = VAR_2->int_class;
 else
  VAR_1->private->int_class = VAR_0;
}
