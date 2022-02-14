
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sym_start; } ;
typedef TYPE_1__ kdb_symtab_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

int FUNC_4(const char *VAR_1, kdb_symtab_t *VAR_2)
{
 if (FUNC_0(VAR_0))
  FUNC_2("kdbgetsymval: symname=%s, symtab=%px\n", VAR_1,
      VAR_2);
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->sym_start = FUNC_1(VAR_1);
 if (VAR_2->sym_start) {
  if (FUNC_0(VAR_0))
   FUNC_2("kdbgetsymval: returns 1, "
       "symtab->sym_start=0x%lx\n",
       VAR_2->sym_start);
  return 1;
 }
 if (FUNC_0(VAR_0))
  FUNC_2("kdbgetsymval: returns 0\n");
 return 0;
}
