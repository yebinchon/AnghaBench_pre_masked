
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ccw_device_private {struct ccw_device* cdev; } ;
struct ccw_device {int ccwlock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*,int ) ;
 struct ccw_device_private* FUNC_2 (int ,struct timer_list*,int ) ;
 struct ccw_device_private* VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void
FUNC_5(struct timer_list *VAR_4)
{
 struct ccw_device_private *VAR_5 = FUNC_2(VAR_5, VAR_4, VAR_3);
 struct ccw_device *VAR_6 = VAR_5->cdev;

 FUNC_3(VAR_6->ccwlock);
 if (VAR_2)
  FUNC_0(VAR_6);
 FUNC_1(VAR_6, VAR_0);
 FUNC_4(VAR_6->ccwlock);
}
