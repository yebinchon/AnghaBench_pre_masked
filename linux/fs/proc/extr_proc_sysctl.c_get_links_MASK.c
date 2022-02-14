
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_root {int dummy; } ;
struct ctl_table_header {int nreg; } ;
struct ctl_table {char* procname; struct ctl_table_root* data; int mode; } ;
struct ctl_dir {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ctl_table* FUNC_2 (struct ctl_table_header**,struct ctl_dir*,char const*,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static bool FUNC_4(struct ctl_dir *VAR_0,
 struct ctl_table *VAR_1, struct ctl_table_root *VAR_2)
{
 struct ctl_table_header *VAR_3;
 struct ctl_table *VAR_4, *VAR_5;


 for (VAR_4 = VAR_1; VAR_4->procname; VAR_4++) {
  const char *VAR_6 = VAR_4->procname;
  VAR_5 = FUNC_2(&VAR_3, VAR_0, VAR_6, FUNC_3(VAR_6));
  if (!VAR_5)
   return 0;
  if (FUNC_0(VAR_5->mode) && FUNC_0(VAR_4->mode))
   continue;
  if (FUNC_1(VAR_5->mode) && (VAR_5->data == VAR_2))
   continue;
  return 0;
 }


 for (VAR_4 = VAR_1; VAR_4->procname; VAR_4++) {
  const char *VAR_7 = VAR_4->procname;
  VAR_5 = FUNC_2(&VAR_3, VAR_0, VAR_7, FUNC_3(VAR_7));
  VAR_3->nreg++;
 }
 return 1;
}
