
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_context {int* fds; } ;


 struct audit_context* FUNC_0 () ;

void FUNC_1(int VAR_0, int VAR_1)
{
 struct audit_context *VAR_2 = FUNC_0();
 VAR_2->fds[0] = VAR_0;
 VAR_2->fds[1] = VAR_1;
}
