
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ctl_table_header {struct ctl_dir* parent; struct ctl_table* ctl_table; } ;
struct ctl_table {scalar_t__ procname; } ;
struct TYPE_3__ {int nreg; } ;
struct ctl_dir {TYPE_1__ header; int root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctl_dir*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ctl_table_header*) ;
 int FUNC_4 (struct ctl_table_header*,struct ctl_table*) ;
 int FUNC_5 (struct ctl_table_header*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct ctl_table_header*) ;
 int FUNC_8 (struct ctl_dir*) ;
 struct ctl_table* VAR_2 ;

__attribute__((used)) static int FUNC_9(struct ctl_dir *VAR_3, struct ctl_table_header *VAR_4)
{
 struct ctl_table *VAR_5;
 int VAR_6;


 if (FUNC_6(&VAR_3->header))
  return -VAR_1;


 if (VAR_4->ctl_table == VAR_2) {
  if (!FUNC_0(&VAR_3->root))
   return -VAR_0;
  FUNC_8(VAR_3);
 }

 VAR_3->header.nreg++;
 VAR_4->parent = VAR_3;
 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6)
  goto fail_links;
 for (VAR_5 = VAR_4->ctl_table; VAR_5->procname; VAR_5++) {
  VAR_6 = FUNC_4(VAR_4, VAR_5);
  if (VAR_6)
   goto fail;
 }
 return 0;
fail:
 FUNC_3(VAR_4);
 FUNC_7(VAR_4);
fail_links:
 if (VAR_4->ctl_table == VAR_2)
  FUNC_1(VAR_3);
 VAR_4->parent = ((void*)0);
 FUNC_2(&VAR_3->header);
 return VAR_6;
}
