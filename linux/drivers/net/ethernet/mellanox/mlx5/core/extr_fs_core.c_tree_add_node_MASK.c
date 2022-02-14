
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_node {struct fs_node* root; struct fs_node* parent; int refcount; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct fs_node *VAR_0, struct fs_node *VAR_1)
{
 if (VAR_1)
  FUNC_0(&VAR_1->refcount);
 VAR_0->parent = VAR_1;


 if (!VAR_1)
  VAR_0->root = VAR_0;
 else
  VAR_0->root = VAR_1->root;
}
