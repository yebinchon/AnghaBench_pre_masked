
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccw_device {int dev; TYPE_2__* private; } ;
typedef enum cdev_todo { ____Placeholder_cdev_todo } cdev_todo ;
struct TYPE_3__ {int devno; int ssid; } ;
struct TYPE_4__ {int todo; int todo_work; TYPE_1__ dev_id; } ;


 int FUNC_0 (int,char*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct ccw_device *VAR_1, enum cdev_todo VAR_2)
{
 FUNC_0(4, "cdev_todo: sched cdev=0.%x.%04x todo=%d\n",
        VAR_1->private->dev_id.ssid, VAR_1->private->dev_id.devno,
        VAR_2);
 if (VAR_1->private->todo >= VAR_2)
  return;
 VAR_1->private->todo = VAR_2;

 if (!FUNC_1(&VAR_1->dev))
  return;
 if (!FUNC_3(VAR_0, &VAR_1->private->todo_work)) {

  FUNC_2(&VAR_1->dev);
 }
}
