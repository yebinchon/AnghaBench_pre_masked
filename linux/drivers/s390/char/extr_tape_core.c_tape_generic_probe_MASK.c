
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_device {int cdev_id; struct ccw_device* cdev; } ;
struct TYPE_2__ {int kobj; } ;
struct ccw_device {int handler; TYPE_1__ dev; } ;
struct ccw_dev_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tape_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct ccw_device*,struct ccw_dev_id*) ;
 int FUNC_2 (struct ccw_device*,int) ;
 int FUNC_3 (TYPE_1__*,struct tape_device*) ;
 int FUNC_4 (struct ccw_dev_id*) ;
 int FUNC_5 (int *,int *) ;
 struct tape_device* FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (struct tape_device*) ;

int
FUNC_8(struct ccw_device *VAR_5)
{
 struct tape_device *VAR_6;
 int VAR_7;
 struct ccw_dev_id VAR_8;

 VAR_6 = FUNC_6();
 if (FUNC_0(VAR_6))
  return -VAR_2;
 FUNC_2(VAR_5, VAR_1 |
         VAR_0);
 VAR_7 = FUNC_5(&VAR_5->dev.kobj, &VAR_4);
 if (VAR_7) {
  FUNC_7(VAR_6);
  return VAR_7;
 }
 FUNC_3(&VAR_5->dev, VAR_6);
 VAR_5->handler = VAR_3;
 VAR_6->cdev = VAR_5;
 FUNC_1(VAR_5, &VAR_8);
 VAR_6->cdev_id = FUNC_4(&VAR_8);
 return VAR_7;
}
