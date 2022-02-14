
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serdev_device {struct serdev_controller* ctrl; } ;
struct serdev_controller {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_tiocm ) (struct serdev_controller*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct serdev_controller*,int,int) ;

int FUNC_1(struct serdev_device *VAR_1, int VAR_2, int VAR_3)
{
 struct serdev_controller *VAR_4 = VAR_1->ctrl;

 if (!VAR_4 || !VAR_4->ops->set_tiocm)
  return -VAR_0;

 return VAR_4->ops->set_tiocm(VAR_4, VAR_2, VAR_3);
}
