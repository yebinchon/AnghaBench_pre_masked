
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulist_node {int list; int rb_node; } ;
struct ulist {scalar_t__ nnodes; int root; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ulist_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct ulist *VAR_0, struct ulist_node *VAR_1)
{
 FUNC_3(&VAR_1->rb_node, &VAR_0->root);
 FUNC_2(&VAR_1->list);
 FUNC_1(VAR_1);
 FUNC_0(VAR_0->nnodes == 0);
 VAR_0->nnodes--;
}
