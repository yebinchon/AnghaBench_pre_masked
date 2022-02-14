
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int args_count; int * args; int np; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char const*,int ) ;

void FUNC_2(const char *VAR_0, const struct of_phandle_args *VAR_1)
{
 int VAR_2;
 FUNC_1("%s %pOF", VAR_0, VAR_1->np);
 for (VAR_2 = 0; VAR_2 < VAR_1->args_count; VAR_2++) {
  const char VAR_3 = VAR_2 ? ',' : ':';

  FUNC_0("%c%08x", VAR_3, VAR_1->args[VAR_2]);
 }
 FUNC_0("\n");
}
