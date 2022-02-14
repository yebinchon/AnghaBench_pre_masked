
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_root {int dummy; } ;
struct TYPE_2__ {struct kernfs_root* root; } ;
struct kernfs_node {TYPE_1__ dir; struct kernfs_node* parent; } ;



__attribute__((used)) static inline struct kernfs_root *FUNC_0(struct kernfs_node *VAR_0)
{

 if (VAR_0->parent)
  VAR_0 = VAR_0->parent;
 return VAR_0->dir.root;
}
