
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct audit_context {struct list_head killed_trees; int in_syscall; } ;


 struct audit_context* FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

struct list_head *FUNC_2(void)
{
 struct audit_context *VAR_0 = FUNC_0();
 if (FUNC_1(!VAR_0 || !VAR_0->in_syscall))
  return ((void*)0);
 return &VAR_0->killed_trees;
}
