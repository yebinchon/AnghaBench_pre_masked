
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {scalar_t__ whoami; int wake_thread; scalar_t__ idev; scalar_t__ pdata; scalar_t__ pm_dev; } ;
struct input_polled_dev {struct lis3lv02d* private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct input_polled_dev*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct input_polled_dev *VAR_1)
{
 struct lis3lv02d *VAR_2 = VAR_1->private;

 if (VAR_2->pm_dev)
  FUNC_2(VAR_2->pm_dev);

 if (VAR_2->pdata && VAR_2->whoami == VAR_0 && VAR_2->idev)
  FUNC_0(&VAR_2->wake_thread, 1);




 FUNC_1(VAR_1);
}
