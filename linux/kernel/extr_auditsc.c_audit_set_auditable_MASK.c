
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_context {int prio; int current_state; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct audit_context *VAR_1)
{
 if (!VAR_1->prio) {
  VAR_1->prio = 1;
  VAR_1->current_state = VAR_0;
 }
}
