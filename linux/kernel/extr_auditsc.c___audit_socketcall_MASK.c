
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nargs; int args; } ;
struct audit_context {TYPE_1__ socketcall; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct audit_context* FUNC_0 () ;
 int FUNC_1 (int ,unsigned long*,int) ;

int FUNC_2(int VAR_3, unsigned long *VAR_4)
{
 struct audit_context *VAR_5 = FUNC_0();

 if (VAR_3 <= 0 || VAR_3 > VAR_0 || !VAR_4)
  return -VAR_2;
 VAR_5->type = VAR_1;
 VAR_5->socketcall.nargs = VAR_3;
 FUNC_1(VAR_5->socketcall.args, VAR_4, VAR_3 * sizeof(unsigned long));
 return 0;
}
