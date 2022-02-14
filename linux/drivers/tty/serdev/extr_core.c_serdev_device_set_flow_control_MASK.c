
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serdev_device {struct serdev_controller* ctrl; } ;
struct serdev_controller {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_flow_control ) (struct serdev_controller*,int) ;} ;


 int FUNC_0 (struct serdev_controller*,int) ;

void FUNC_1(struct serdev_device *VAR_0, bool VAR_1)
{
 struct serdev_controller *VAR_2 = VAR_0->ctrl;

 if (!VAR_2 || !VAR_2->ops->set_flow_control)
  return;

 VAR_2->ops->set_flow_control(VAR_2, VAR_1);
}
