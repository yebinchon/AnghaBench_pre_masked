
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linux_binprm {int argc; } ;
struct TYPE_2__ {int argc; } ;
struct audit_context {TYPE_1__ execve; int type; } ;


 int VAR_0 ;
 struct audit_context* FUNC_0 () ;

void FUNC_1(struct linux_binprm *VAR_1)
{
 struct audit_context *VAR_2 = FUNC_0();

 VAR_2->type = VAR_0;
 VAR_2->execve.argc = VAR_1->argc;
}
