
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table {struct ctl_table* child; scalar_t__ procname; } ;



__attribute__((used)) static int FUNC_0(struct ctl_table *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2 = 0;
 struct ctl_table *VAR_3;


 if (!VAR_0 || !VAR_0->procname)
  return 1;

 for (VAR_3 = VAR_0; VAR_3->procname; VAR_3++) {
  if (VAR_3->child)
   VAR_2 += FUNC_0(VAR_3->child);
  else
   VAR_1 = 1;
 }
 return VAR_2 + VAR_1;
}
