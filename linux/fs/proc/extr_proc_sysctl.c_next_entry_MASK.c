
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_header {struct ctl_node* node; struct ctl_table* ctl_table; } ;
struct ctl_table {int dummy; } ;
struct ctl_node {struct ctl_table_header* header; int node; } ;


 struct ctl_node* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct ctl_table_header*) ;

__attribute__((used)) static void FUNC_5(struct ctl_table_header **VAR_1, struct ctl_table **VAR_2)
{
 struct ctl_table_header *VAR_3 = *VAR_1;
 struct ctl_table *VAR_4 = *VAR_2;
 struct ctl_node *VAR_5 = &VAR_3->node[VAR_4 - VAR_3->ctl_table];

 FUNC_2(&VAR_0);
 FUNC_4(VAR_3);

 VAR_5 = FUNC_0(FUNC_1(&VAR_5->node));
 FUNC_3(&VAR_0);
 VAR_3 = ((void*)0);
 if (VAR_5) {
  VAR_3 = VAR_5->header;
  VAR_4 = &VAR_3->ctl_table[VAR_5 - VAR_3->node];
 }
 *VAR_1 = VAR_3;
 *VAR_2 = VAR_4;
}
