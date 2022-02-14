
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serdev_device {struct serdev_controller* ctrl; } ;
struct serdev_controller {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_tiocm ) (struct serdev_controller*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct serdev_controller*) ;

int FUNC_1(struct serdev_device *VAR_1)
{
 struct serdev_controller *VAR_2 = VAR_1->ctrl;

 if (!VAR_2 || !VAR_2->ops->get_tiocm)
  return -VAR_0;

 return VAR_2->ops->get_tiocm(VAR_2);
}
