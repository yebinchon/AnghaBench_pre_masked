
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {char* type; int maxage; scalar_t__ childnode; scalar_t__ (* leaf_mark ) (int) ;struct node* root; } ;
struct node {int bitnum; scalar_t__ leftnode; int left; int mark; scalar_t__ rightnode; int right; struct node* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_6(struct tree *VAR_3)
{
 struct node *VAR_4;
 struct node *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = 0;
 if (VAR_2 > 0)
  FUNC_1("Marking %s_%x\n", VAR_3->type, VAR_3->maxage);
 if (VAR_3->childnode == VAR_0)
  goto done;

 FUNC_0(VAR_3->childnode == VAR_1);
 VAR_4 = VAR_3->root;
 VAR_6 = VAR_7 = 0;
 while (VAR_4) {
  VAR_8 = 1 << VAR_4->bitnum;
  if ((VAR_6 & VAR_8) == 0) {
   VAR_6 |= VAR_8;
   if (VAR_4->leftnode == VAR_0) {
    FUNC_0(VAR_4->left);
    if (VAR_3->leaf_mark(VAR_4->left)) {
     VAR_5 = VAR_4;
     while (VAR_5 && !VAR_5->mark) {
      VAR_9++;
      VAR_5->mark = 1;
      VAR_5 = VAR_5->parent;
     }
    }
   } else if (VAR_4->left) {
    FUNC_0(VAR_4->leftnode == VAR_1);
    VAR_4 = VAR_4->left;
    continue;
   }
  }
  if ((VAR_7 & VAR_8) == 0) {
   VAR_7 |= VAR_8;
   if (VAR_4->rightnode == VAR_0) {
    FUNC_0(VAR_4->right);
    if (VAR_3->leaf_mark(VAR_4->right)) {
     VAR_5 = VAR_4;
     while (VAR_5 && !VAR_5->mark) {
      VAR_9++;
      VAR_5->mark = 1;
      VAR_5 = VAR_5->parent;
     }
    }
   } else if (VAR_4->right) {
    FUNC_0(VAR_4->rightnode == VAR_1);
    VAR_4 = VAR_4->right;
    continue;
   }
  }
  VAR_6 &= ~VAR_8;
  VAR_7 &= ~VAR_8;
  VAR_4 = VAR_4->parent;
 }



 FUNC_0(VAR_3->childnode == VAR_1);
 VAR_4 = VAR_3->root;
 VAR_6 = VAR_7 = 0;
 while (VAR_4) {
  VAR_8 = 1 << VAR_4->bitnum;
  if ((VAR_6 & VAR_8) == 0) {
   VAR_6 |= VAR_8;
   if (VAR_4->leftnode == VAR_0) {
    FUNC_0(VAR_4->left);
    if (VAR_3->leaf_mark(VAR_4->left)) {
     VAR_5 = VAR_4;
     while (VAR_5 && !VAR_5->mark) {
      VAR_9++;
      VAR_5->mark = 1;
      VAR_5 = VAR_5->parent;
     }
    }
   } else if (VAR_4->left) {
    FUNC_0(VAR_4->leftnode == VAR_1);
    VAR_4 = VAR_4->left;
    if (!VAR_4->mark && VAR_4->parent->mark) {
     VAR_9++;
     VAR_4->mark = 1;
    }
    continue;
   }
  }
  if ((VAR_7 & VAR_8) == 0) {
   VAR_7 |= VAR_8;
   if (VAR_4->rightnode == VAR_0) {
    FUNC_0(VAR_4->right);
    if (VAR_3->leaf_mark(VAR_4->right)) {
     VAR_5 = VAR_4;
     while (VAR_5 && !VAR_5->mark) {
      VAR_9++;
      VAR_5->mark = 1;
      VAR_5 = VAR_5->parent;
     }
    }
   } else if (VAR_4->right) {
    FUNC_0(VAR_4->rightnode == VAR_1);
    VAR_4 = VAR_4->right;
    if (!VAR_4->mark && VAR_4->parent->mark &&
        !VAR_4->parent->left) {
     VAR_9++;
     VAR_4->mark = 1;
    }
    continue;
   }
  }
  VAR_6 &= ~VAR_8;
  VAR_7 &= ~VAR_8;
  VAR_4 = VAR_4->parent;
 }
done:
 if (VAR_2 > 0)
  FUNC_1("Marked %d nodes\n", VAR_9);
}
