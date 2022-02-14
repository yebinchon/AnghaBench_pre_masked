
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccwgroup_device {int dev; } ;
struct ccw_device {int ccwlock; int dev; } ;


 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccwgroup_device*) ;
 struct ccwgroup_device* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct ccw_device *VAR_0)
{
 struct ccwgroup_device *VAR_1;


 FUNC_0(VAR_0);

 FUNC_5(VAR_0->ccwlock);
 VAR_1 = FUNC_2(&VAR_0->dev);
 if (!VAR_1) {
  FUNC_6(VAR_0->ccwlock);
  return;
 }

 FUNC_3(&VAR_1->dev);
 FUNC_6(VAR_0->ccwlock);

 FUNC_1(VAR_1);

 FUNC_4(&VAR_1->dev);
}
