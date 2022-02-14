
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_header {int dummy; } ;
struct ctl_table {int dummy; } ;
struct ctl_dir {int dummy; } ;


 struct ctl_table* FUNC_0 (struct ctl_table_header**,struct ctl_dir*,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct ctl_table_header*) ;

__attribute__((used)) static struct ctl_table *FUNC_4(struct ctl_table_header **VAR_1,
          struct ctl_dir *VAR_2,
          const char *VAR_3, int VAR_4)
{
 struct ctl_table_header *VAR_5;
 struct ctl_table *VAR_6;

 FUNC_1(&VAR_0);
 VAR_6 = FUNC_0(&VAR_5, VAR_2, VAR_3, VAR_4);
 if (VAR_6 && FUNC_3(VAR_5))
  *VAR_1 = VAR_5;
 else
  VAR_6 = ((void*)0);
 FUNC_2(&VAR_0);
 return VAR_6;
}
