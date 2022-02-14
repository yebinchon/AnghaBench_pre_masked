
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auditd_connection {int pid; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct auditd_connection* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static pid_t FUNC_4(void)
{
 pid_t VAR_1;
 const struct auditd_connection *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2 || !VAR_2->pid)
  VAR_1 = 0;
 else
  VAR_1 = FUNC_0(VAR_2->pid);
 FUNC_3();

 return VAR_1;
}
