
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_header {int count; scalar_t__ nreg; struct ctl_dir* parent; } ;
struct ctl_dir {struct ctl_table_header header; } ;


 int FUNC_0 (struct ctl_table_header*,int ) ;
 int FUNC_1 (struct ctl_table_header*) ;
 int VAR_0 ;
 int FUNC_2 (struct ctl_table_header*) ;

__attribute__((used)) static void FUNC_3(struct ctl_table_header *VAR_1)
{
 struct ctl_dir *VAR_2 = VAR_1->parent;

 if (--VAR_1->nreg)
  return;

 if (VAR_2) {
  FUNC_1(VAR_1);
  FUNC_2(VAR_1);
 }

 if (!--VAR_1->count)
  FUNC_0(VAR_1, VAR_0);

 if (VAR_2)
  FUNC_3(&VAR_2->header);
}
