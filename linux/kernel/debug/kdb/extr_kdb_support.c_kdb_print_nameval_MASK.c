
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kdb_symtab_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned long,int *,int) ;
 scalar_t__ FUNC_2 (unsigned long,int *) ;

void FUNC_3(const char *VAR_3, unsigned long VAR_4)
{
 kdb_symtab_t VAR_5;
 FUNC_0("  %-11.11s ", VAR_3);
 if (FUNC_2(VAR_4, &VAR_5))
  FUNC_1(VAR_4, &VAR_5,
     VAR_2|VAR_1|VAR_0);
 else
  FUNC_0("0x%lx\n", VAR_4);
}
