
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct rc_dev {TYPE_1__* raw; int minor; } ;
struct TYPE_2__ {int list; struct task_struct* thread; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct task_struct* FUNC_2 (int ,TYPE_1__*,char*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct rc_dev *VAR_3)
{
 struct task_struct *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_3->raw, "rc%u", VAR_3->minor);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->raw->thread = VAR_4;

 FUNC_4(&VAR_2);
 FUNC_3(&VAR_3->raw->list, &VAR_0);
 FUNC_5(&VAR_2);

 return 0;
}
