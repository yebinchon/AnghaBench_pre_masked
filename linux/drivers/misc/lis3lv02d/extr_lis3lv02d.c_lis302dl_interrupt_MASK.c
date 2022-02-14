
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {int wake_thread; int async_queue; int misc_wait; int count; int misc_opened; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct lis3lv02d *VAR_6 = VAR_5;

 if (!FUNC_3(0, &VAR_6->misc_opened))
  goto out;






 FUNC_0(&VAR_6->count);

 FUNC_4(&VAR_6->misc_wait);
 FUNC_2(&VAR_6->async_queue, VAR_3, VAR_2);
out:
 if (FUNC_1(&VAR_6->wake_thread))
  return VAR_1;
 return VAR_0;
}
