
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {scalar_t__ pm_dev; int wake_thread; } ;
struct input_polled_dev {struct lis3lv02d* private; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct input_polled_dev *VAR_0)
{
 struct lis3lv02d *VAR_1 = VAR_0->private;

 FUNC_0(&VAR_1->wake_thread, 0);
 if (VAR_1->pm_dev)
  FUNC_1(VAR_1->pm_dev);
}
