
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_set {int dummy; } ;
struct ctl_table_root {int dummy; } ;
struct ctl_table_header {int count; int nreg; int inodes; struct ctl_node* node; int * parent; struct ctl_table_set* set; struct ctl_table_root* root; int * unregistering; scalar_t__ used; struct ctl_table* ctl_table_arg; struct ctl_table* ctl_table; } ;
struct ctl_table {scalar_t__ procname; } ;
struct ctl_node {struct ctl_table_header* header; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ctl_table_header *VAR_0,
 struct ctl_table_root *VAR_1, struct ctl_table_set *VAR_2,
 struct ctl_node *VAR_3, struct ctl_table *VAR_4)
{
 VAR_0->ctl_table = VAR_4;
 VAR_0->ctl_table_arg = VAR_4;
 VAR_0->used = 0;
 VAR_0->count = 1;
 VAR_0->nreg = 1;
 VAR_0->unregistering = ((void*)0);
 VAR_0->root = VAR_1;
 VAR_0->set = VAR_2;
 VAR_0->parent = ((void*)0);
 VAR_0->node = VAR_3;
 FUNC_0(&VAR_0->inodes);
 if (VAR_3) {
  struct ctl_table *VAR_5;
  for (VAR_5 = VAR_4; VAR_5->procname; VAR_5++, VAR_3++)
   VAR_3->header = VAR_0;
 }
}
