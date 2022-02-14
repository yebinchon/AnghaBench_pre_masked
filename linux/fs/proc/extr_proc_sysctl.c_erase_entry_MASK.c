
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rb_node {int dummy; } ;
struct ctl_table_header {TYPE_2__* parent; struct ctl_table* ctl_table; TYPE_1__* node; } ;
struct ctl_table {int dummy; } ;
struct TYPE_4__ {int root; } ;
struct TYPE_3__ {struct rb_node node; } ;


 int FUNC_0 (struct rb_node*,int *) ;

__attribute__((used)) static void FUNC_1(struct ctl_table_header *VAR_0, struct ctl_table *VAR_1)
{
 struct rb_node *VAR_2 = &VAR_0->node[VAR_1 - VAR_0->ctl_table].node;

 FUNC_0(VAR_2, &VAR_0->parent->root);
}
