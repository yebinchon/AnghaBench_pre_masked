
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct audit_context {int type; TYPE_1__ module; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct audit_context* FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(char *VAR_2)
{
 struct audit_context *VAR_3 = FUNC_0();

 VAR_3->module.name = FUNC_2(VAR_2, VAR_1);
 if (!VAR_3->module.name)
  FUNC_1("out of memory in __audit_log_kern_module");
 VAR_3->type = VAR_0;
}
