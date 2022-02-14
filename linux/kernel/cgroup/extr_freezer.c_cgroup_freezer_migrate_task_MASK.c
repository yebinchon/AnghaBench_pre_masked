
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; scalar_t__ frozen; } ;
struct cgroup {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgroup*) ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (struct cgroup*) ;
 int FUNC_3 (struct cgroup*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct task_struct *VAR_3,
     struct cgroup *VAR_4, struct cgroup *VAR_5)
{
 FUNC_4(&VAR_2);




 if (VAR_3->flags & VAR_1)
  return;






 if (VAR_3->frozen) {
  FUNC_2(VAR_5);
  FUNC_0(VAR_4);
 }
 FUNC_3(VAR_5);
 FUNC_3(VAR_4);




 FUNC_1(VAR_3, FUNC_5(VAR_0, &VAR_5->flags));
}
