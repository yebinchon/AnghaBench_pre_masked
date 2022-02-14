
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_header {struct ctl_node* node; struct ctl_table* ctl_table; } ;
struct ctl_table {int dummy; } ;
struct ctl_node {struct ctl_table_header* header; } ;
struct ctl_dir {int root; } ;


 struct ctl_node* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct ctl_dir *VAR_1,
 struct ctl_table_header **VAR_2, struct ctl_table **VAR_3)
{
 struct ctl_table_header *VAR_4 = ((void*)0);
 struct ctl_table *VAR_5 = ((void*)0);
 struct ctl_node *VAR_6;

 FUNC_2(&VAR_0);
 VAR_6 = FUNC_0(FUNC_1(&VAR_1->root));
 FUNC_3(&VAR_0);
 if (VAR_6) {
  VAR_4 = VAR_6->header;
  VAR_5 = &VAR_4->ctl_table[VAR_6 - VAR_4->node];
 }
 *VAR_2 = VAR_4;
 *VAR_3 = VAR_5;
}
