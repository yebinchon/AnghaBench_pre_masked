
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct btrfs_delayed_tree_ref {scalar_t__ root; scalar_t__ parent; TYPE_1__ node; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct btrfs_delayed_tree_ref *VAR_1,
     struct btrfs_delayed_tree_ref *VAR_2)
{
 if (VAR_1->node.type == VAR_0) {
  if (VAR_1->root < VAR_2->root)
   return -1;
  if (VAR_1->root > VAR_2->root)
   return 1;
 } else {
  if (VAR_1->parent < VAR_2->parent)
   return -1;
  if (VAR_1->parent > VAR_2->parent)
   return 1;
 }
 return 0;
}
