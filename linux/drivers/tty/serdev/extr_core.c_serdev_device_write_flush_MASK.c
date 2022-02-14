
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serdev_device {struct serdev_controller* ctrl; } ;
struct serdev_controller {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_flush ) (struct serdev_controller*) ;} ;


 int FUNC_0 (struct serdev_controller*) ;

void FUNC_1(struct serdev_device *VAR_0)
{
 struct serdev_controller *VAR_1 = VAR_0->ctrl;

 if (!VAR_1 || !VAR_1->ops->write_flush)
  return;

 VAR_1->ops->write_flush(VAR_1);
}
