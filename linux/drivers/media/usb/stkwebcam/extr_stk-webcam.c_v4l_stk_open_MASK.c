
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_camera {int lock; int interface; scalar_t__ first_init; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stk_camera*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct stk_camera*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct file*) ;
 struct stk_camera* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2)
{
 struct stk_camera *VAR_3 = FUNC_6(VAR_2);
 int VAR_4;

 if (VAR_3 == ((void*)0) || !FUNC_0(VAR_3))
  return -VAR_0;

 if (FUNC_1(&VAR_3->lock))
  return -VAR_1;
 if (!VAR_3->first_init)
  FUNC_3(VAR_3, 0x0, 0x24);
 else
  VAR_3->first_init = 0;

 VAR_4 = FUNC_5(VAR_2);
 if (!VAR_4)
  FUNC_4(VAR_3->interface);
 FUNC_2(&VAR_3->lock);
 return VAR_4;
}
