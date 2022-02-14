
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {struct node* root; } ;
struct node {int bitnum; scalar_t__ rightnode; scalar_t__ leftnode; struct node* left; struct node* right; scalar_t__ nextbyte; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void *FUNC_0(struct tree *VAR_2, const char *VAR_3)
{
 struct node *VAR_4;
 void *VAR_5 = ((void*)0);

 VAR_4 = VAR_2->root;
 while (!VAR_5 && VAR_4) {
  if (VAR_4->nextbyte)
   VAR_3++;
  if (*VAR_3 & (1 << (VAR_4->bitnum & 7))) {

   if (VAR_4->rightnode == VAR_1) {
    VAR_4 = VAR_4->right;
   } else if (VAR_4->rightnode == VAR_0) {
    VAR_5 = VAR_4->right;
   } else {
    VAR_4 = ((void*)0);
   }
  } else {

   if (VAR_4->leftnode == VAR_1) {
    VAR_4 = VAR_4->left;
   } else if (VAR_4->leftnode == VAR_0) {
    VAR_5 = VAR_4->left;
   } else {
    VAR_4 = ((void*)0);
   }
  }
 }

 return VAR_5;
}
