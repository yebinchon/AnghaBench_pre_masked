
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct task_struct* real_parent; } ;
struct pid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct pid*) ;
 scalar_t__ FUNC_1 (struct pid*) ;
 struct pid* FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (struct pid*,struct task_struct*) ;

__attribute__((used)) static void
FUNC_5(struct task_struct *VAR_3, struct task_struct *VAR_4)
{
 struct pid *VAR_5 = FUNC_2(VAR_3);
 struct task_struct *VAR_6 = VAR_3;

 if (!VAR_4)



  VAR_4 = VAR_3->real_parent;
 else



  VAR_6 = ((void*)0);

 if (FUNC_2(VAR_4) != VAR_5 &&
     FUNC_3(VAR_4) == FUNC_3(VAR_3) &&
     FUNC_4(VAR_5, VAR_6) &&
     FUNC_1(VAR_5)) {
  FUNC_0(VAR_2, VAR_0, VAR_5);
  FUNC_0(VAR_1, VAR_0, VAR_5);
 }
}
