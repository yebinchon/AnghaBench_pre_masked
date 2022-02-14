
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct completion* vfork_done; } ;
struct completion {int dummy; } ;


 int FUNC_0 (struct completion*) ;
 scalar_t__ FUNC_1 (struct completion*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_0)
{
 struct completion *VAR_1;

 FUNC_2(VAR_0);
 VAR_1 = VAR_0->vfork_done;
 if (FUNC_1(VAR_1)) {
  VAR_0->vfork_done = ((void*)0);
  FUNC_0(VAR_1);
 }
 FUNC_3(VAR_0);
}
