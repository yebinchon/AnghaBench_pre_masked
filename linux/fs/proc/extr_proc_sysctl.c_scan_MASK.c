
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dir_context {unsigned long pos; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {int mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*,struct dir_context*,struct ctl_table_header*,struct ctl_table*) ;
 int FUNC_2 (struct file*,struct dir_context*,struct ctl_table_header*,struct ctl_table*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ctl_table_header *VAR_0, struct ctl_table *VAR_1,
  unsigned long *VAR_2, struct file *VAR_3,
  struct dir_context *VAR_4)
{
 bool VAR_5;

 if ((*VAR_2)++ < VAR_4->pos)
  return 1;

 if (FUNC_3(FUNC_0(VAR_1->mode)))
  VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_0, VAR_1);
 else
  VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_0, VAR_1);

 if (VAR_5)
  VAR_4->pos = *VAR_2;

 return VAR_5;
}
