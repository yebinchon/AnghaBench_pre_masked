
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_header {struct ctl_table* ctl_table; } ;
struct ctl_table {scalar_t__ procname; } ;


 int FUNC_0 (struct ctl_table_header*,struct ctl_table*) ;

__attribute__((used)) static void FUNC_1(struct ctl_table_header *VAR_0)
{
 struct ctl_table *VAR_1;
 for (VAR_1 = VAR_0->ctl_table; VAR_1->procname; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
