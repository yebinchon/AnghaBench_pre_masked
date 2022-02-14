
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct auditd_connection {scalar_t__ pid; } ;


 int VAR_0 ;
 struct auditd_connection* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct task_struct*) ;

int FUNC_4(struct task_struct *VAR_1)
{
 int VAR_2;
 struct auditd_connection *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_0);
 VAR_2 = (VAR_3 && VAR_3->pid == FUNC_3(VAR_1) ? 1 : 0);
 FUNC_2();

 return VAR_2;
}
