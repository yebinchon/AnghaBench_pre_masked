
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {char* type; int maxage; scalar_t__ childnode; int (* leaf_equal ) (void*,void*) ;struct node* root; } ;
struct node {scalar_t__ leftnode; scalar_t__ rightnode; int keymask; int bitnum; struct node* parent; struct node* right; struct node* left; int keybits; scalar_t__ nextbyte; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct node*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (void*,void*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_4(struct tree *VAR_3)
{
 struct node *VAR_4;
 struct node *VAR_5;
 struct node *VAR_6;
 struct node *VAR_7;
 void *VAR_8;
 void *VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 if (VAR_2 > 0)
  FUNC_2("Pruning %s_%x\n", VAR_3->type, VAR_3->maxage);

 VAR_13 = 0;
 if (VAR_3->childnode == VAR_0)
  return;
 if (!VAR_3->root)
  return;

 VAR_10 = VAR_11 = 0;
 VAR_4 = VAR_3->root;
 while (VAR_4) {
  if (VAR_4->nextbyte)
   goto advance;
  if (VAR_4->leftnode == VAR_0)
   goto advance;
  if (VAR_4->rightnode == VAR_0)
   goto advance;
  if (!VAR_4->left)
   goto advance;
  if (!VAR_4->right)
   goto advance;
  VAR_5 = VAR_4->left;
  VAR_6 = VAR_4->right;
  if (VAR_5->keymask == 0)
   goto advance;
  if (VAR_6->keymask == 0)
   goto advance;
  if (VAR_5->keymask != VAR_6->keymask)
   goto advance;
  if (VAR_5->keybits != VAR_6->keybits)
   goto advance;
  VAR_8 = ((void*)0);
  while (!VAR_8) {
   FUNC_0(VAR_5->left || VAR_5->right);
   if (VAR_5->leftnode == VAR_0)
    VAR_8 = VAR_5->left;
   else if (VAR_5->rightnode == VAR_0)
    VAR_8 = VAR_5->right;
   else if (VAR_5->left)
    VAR_5 = VAR_5->left;
   else if (VAR_5->right)
    VAR_5 = VAR_5->right;
   else
    FUNC_0(0);
  }
  VAR_9 = ((void*)0);
  while (!VAR_9) {
   FUNC_0(VAR_6->left || VAR_6->right);
   if (VAR_6->leftnode == VAR_0)
    VAR_9 = VAR_6->left;
   else if (VAR_6->rightnode == VAR_0)
    VAR_9 = VAR_6->right;
   else if (VAR_6->left)
    VAR_6 = VAR_6->left;
   else if (VAR_6->right)
    VAR_6 = VAR_6->right;
   else
    FUNC_0(0);
  }
  if (! VAR_3->leaf_equal(VAR_8, VAR_9))
   goto advance;




  VAR_7 = VAR_4->parent;
  VAR_5 = VAR_4->left;
  VAR_6 = VAR_4->right;
  if (VAR_7->left == VAR_4)
   VAR_7->left = VAR_5;
  else if (VAR_7->right == VAR_4)
   VAR_7->right = VAR_5;
  else
   FUNC_0(0);
  VAR_5->parent = VAR_7;
  VAR_5->keymask |= (1 << VAR_4->bitnum);
  VAR_4->left = ((void*)0);
  while (VAR_4) {
   VAR_12 = 1 << VAR_4->bitnum;
   VAR_10 &= ~VAR_12;
   VAR_11 &= ~VAR_12;
   if (VAR_4->leftnode == VAR_1 && VAR_4->left) {
    VAR_5 = VAR_4->left;
    FUNC_1(VAR_4);
    VAR_13++;
    VAR_4 = VAR_5;
   } else if (VAR_4->rightnode == VAR_1 && VAR_4->right) {
    VAR_6 = VAR_4->right;
    FUNC_1(VAR_4);
    VAR_13++;
    VAR_4 = VAR_6;
   } else {
    VAR_4 = ((void*)0);
   }
  }

  VAR_4 = VAR_7;

  VAR_12 = 1 << VAR_4->bitnum;
  VAR_10 &= ~VAR_12;
  VAR_11 &= ~VAR_12;
  for (;;) {
   if (VAR_4->left && VAR_4->right)
    break;
   if (VAR_4->left) {
    VAR_5 = VAR_4->left;
    VAR_4->keymask |= VAR_5->keymask;
    VAR_4->keybits |= VAR_5->keybits;
   }
   if (VAR_4->right) {
    VAR_6 = VAR_4->right;
    VAR_4->keymask |= VAR_6->keymask;
    VAR_4->keybits |= VAR_6->keybits;
   }
   VAR_4->keymask |= (1 << VAR_4->bitnum);
   VAR_4 = VAR_4->parent;

   VAR_12 = 1 << VAR_4->bitnum;
   VAR_10 &= ~VAR_12;
   VAR_11 &= ~VAR_12;
  }
 advance:
  VAR_12 = 1 << VAR_4->bitnum;
  if ((VAR_10 & VAR_12) == 0 &&
      VAR_4->leftnode == VAR_1 &&
      VAR_4->left) {
   VAR_10 |= VAR_12;
   VAR_4 = VAR_4->left;
  } else if ((VAR_11 & VAR_12) == 0 &&
      VAR_4->rightnode == VAR_1 &&
      VAR_4->right) {
   VAR_11 |= VAR_12;
   VAR_4 = VAR_4->right;
  } else {
   VAR_10 &= ~VAR_12;
   VAR_11 &= ~VAR_12;
   VAR_4 = VAR_4->parent;
  }
 }
 if (VAR_2 > 0)
  FUNC_2("Pruned %d nodes\n", VAR_13);
}
