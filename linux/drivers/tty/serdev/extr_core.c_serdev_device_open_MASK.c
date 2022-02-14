
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serdev_device {struct serdev_controller* ctrl; } ;
struct serdev_controller {TYPE_1__* ops; int dev; } ;
struct TYPE_2__ {int (* open ) (struct serdev_controller*) ;int (* close ) (struct serdev_controller*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct serdev_controller*) ;
 int FUNC_3 (struct serdev_controller*) ;

int FUNC_4(struct serdev_device *VAR_1)
{
 struct serdev_controller *VAR_2 = VAR_1->ctrl;
 int VAR_3;

 if (!VAR_2 || !VAR_2->ops->open)
  return -VAR_0;

 VAR_3 = VAR_2->ops->open(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(&VAR_2->dev);
 if (VAR_3 < 0) {
  FUNC_1(&VAR_2->dev);
  goto err_close;
 }

 return 0;

err_close:
 if (VAR_2->ops->close)
  VAR_2->ops->close(VAR_2);

 return VAR_3;
}
