
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serdev_device {struct serdev_controller* ctrl; } ;
struct serdev_controller {TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned int (* set_baudrate ) (struct serdev_controller*,unsigned int) ;} ;


 unsigned int FUNC_0 (struct serdev_controller*,unsigned int) ;

unsigned int FUNC_1(struct serdev_device *VAR_0, unsigned int VAR_1)
{
 struct serdev_controller *VAR_2 = VAR_0->ctrl;

 if (!VAR_2 || !VAR_2->ops->set_baudrate)
  return 0;

 return VAR_2->ops->set_baudrate(VAR_2, VAR_1);

}
