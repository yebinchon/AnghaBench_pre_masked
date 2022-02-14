
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int offset; int size; int bitnum; int nextbyte; struct node* parent; scalar_t__ index; scalar_t__ mark; scalar_t__ keymask; scalar_t__ keybits; void* rightnode; void* leftnode; int * right; int left; } ;


 void* VAR_0 ;
 struct node* FUNC_0 (int) ;

__attribute__((used)) static struct node *FUNC_1(struct node *VAR_1)
{
 struct node *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 VAR_2->left = *(VAR_2->right = ((void*)0));
 VAR_2->parent = VAR_1;
 VAR_2->leftnode = VAR_0;
 VAR_2->rightnode = VAR_0;
 VAR_2->keybits = 0;
 VAR_2->keymask = 0;
 VAR_2->mark = 0;
 VAR_2->index = 0;
 VAR_2->offset = -1;
 VAR_2->size = 4;

 if (VAR_2->parent) {
  VAR_3 = VAR_1->bitnum;
  if ((VAR_3 & 7) == 0) {
   VAR_2->bitnum = VAR_3 + 7 + 8;
   VAR_2->nextbyte = 1;
  } else {
   VAR_2->bitnum = VAR_3 - 1;
   VAR_2->nextbyte = 0;
  }
 } else {
  VAR_2->bitnum = 7;
  VAR_2->nextbyte = 0;
 }

 return VAR_2;
}
