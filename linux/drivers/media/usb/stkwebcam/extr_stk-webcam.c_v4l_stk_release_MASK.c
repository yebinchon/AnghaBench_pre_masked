
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_camera {int lock; int interface; struct file* owner; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct stk_camera*,int,int) ;
 int FUNC_3 (struct stk_camera*) ;
 int FUNC_4 (struct stk_camera*) ;
 int FUNC_5 (struct stk_camera*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct file*) ;
 struct stk_camera* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_0)
{
 struct stk_camera *VAR_1 = FUNC_8(VAR_0);

 FUNC_0(&VAR_1->lock);
 if (VAR_1->owner == VAR_0) {
  FUNC_4(VAR_1);
  FUNC_3(VAR_1);
  FUNC_2(VAR_1, 0x0, 0x49);
  FUNC_5(VAR_1);
  VAR_1->owner = ((void*)0);
 }

 FUNC_6(VAR_1->interface);
 FUNC_1(&VAR_1->lock);
 return FUNC_7(VAR_0);
}
