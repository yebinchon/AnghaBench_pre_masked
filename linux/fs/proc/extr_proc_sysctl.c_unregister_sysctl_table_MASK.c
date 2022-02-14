
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_header {struct ctl_table_header* ctl_table_arg; } ;
struct ctl_table {struct ctl_table* ctl_table_arg; } ;


 int FUNC_0 (struct ctl_table_header*) ;
 int FUNC_1 (struct ctl_table_header*) ;
 int FUNC_2 (struct ctl_table_header*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct ctl_table_header * VAR_1)
{
 int VAR_2;
 FUNC_3();

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = FUNC_0(VAR_1->ctl_table_arg);
 if (FUNC_6(VAR_2 > 1)) {
  struct ctl_table_header **VAR_3;
  int VAR_4;

  VAR_3 = (struct ctl_table_header **)(VAR_1 + 1);
  for (VAR_4 = VAR_2 -1; VAR_4 >= 0; VAR_4--) {
   struct ctl_table_header *VAR_5 = VAR_3[VAR_4];
   struct ctl_table *VAR_6 = VAR_5->ctl_table_arg;
   FUNC_7(VAR_5);
   FUNC_2(VAR_6);
  }
  FUNC_2(VAR_1);
  return;
 }

 FUNC_4(&VAR_0);
 FUNC_1(VAR_1);
 FUNC_5(&VAR_0);
}
