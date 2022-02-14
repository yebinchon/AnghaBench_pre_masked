
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serdev_device {struct serdev_controller* ctrl; } ;
struct serdev_controller {TYPE_1__* ops; } ;
typedef enum serdev_parity { ____Placeholder_serdev_parity } serdev_parity ;
struct TYPE_2__ {int (* set_parity ) (struct serdev_controller*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct serdev_controller*,int) ;

int FUNC_1(struct serdev_device *VAR_1,
        enum serdev_parity VAR_2)
{
 struct serdev_controller *VAR_3 = VAR_1->ctrl;

 if (!VAR_3 || !VAR_3->ops->set_parity)
  return -VAR_0;

 return VAR_3->ops->set_parity(VAR_3, VAR_2);
}
