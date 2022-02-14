
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct ccw_device {TYPE_2__* drv; scalar_t__ online; TYPE_1__* private; } ;
struct TYPE_4__ {int (* prepare ) (struct ccw_device*) ;} ;
struct TYPE_3__ {int onoff; int todo_work; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ccw_device*) ;
 struct ccw_device* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct ccw_device *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_3(&VAR_2->private->todo_work))
  return -VAR_0;

 if (FUNC_0(&VAR_2->private->onoff))
  return -VAR_0;

 if (VAR_2->online && VAR_2->drv && VAR_2->drv->prepare)
  return VAR_2->drv->prepare(VAR_2);

 return 0;
}
