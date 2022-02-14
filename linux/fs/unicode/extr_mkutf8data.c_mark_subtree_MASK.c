
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct node {int mark; scalar_t__ leftnode; scalar_t__ rightnode; struct node* right; struct node* left; TYPE_1__* parent; int index; } ;
struct TYPE_2__ {int index; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct node *VAR_1)
{
 int VAR_2;

 if (!VAR_1 || VAR_1->mark)
  return 0;
 VAR_1->mark = 1;
 VAR_1->index = VAR_1->parent->index;
 VAR_2 = 1;
 if (VAR_1->leftnode == VAR_0)
  VAR_2 += FUNC_0(VAR_1->left);
 if (VAR_1->rightnode == VAR_0)
  VAR_2 += FUNC_0(VAR_1->right);
 return VAR_2;
}
