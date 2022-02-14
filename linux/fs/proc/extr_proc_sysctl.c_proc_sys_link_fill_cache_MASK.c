
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dir_context {int dummy; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {int dummy; } ;


 scalar_t__ FUNC_0 (struct ctl_table_header*) ;
 int FUNC_1 (struct file*,struct dir_context*,struct ctl_table_header*,struct ctl_table*) ;
 scalar_t__ FUNC_2 (struct ctl_table_header**,struct ctl_table**) ;
 int FUNC_3 (struct ctl_table_header*) ;
 struct ctl_table_header* FUNC_4 (struct ctl_table_header*) ;

__attribute__((used)) static bool FUNC_5(struct file *VAR_0,
        struct dir_context *VAR_1,
        struct ctl_table_header *VAR_2,
        struct ctl_table *VAR_3)
{
 bool VAR_4 = 1;

 VAR_2 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_2))
  return 0;


 if (FUNC_2(&VAR_2, &VAR_3))
  goto out;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
out:
 FUNC_3(VAR_2);
 return VAR_4;
}
