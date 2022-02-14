
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct TYPE_3__ {struct rb_node* rb_node; } ;
struct TYPE_4__ {TYPE_1__ children; } ;
struct kernfs_node {scalar_t__ hash; void const* ns; int rb; TYPE_2__ dir; struct kernfs_node* parent; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 struct rb_node* FUNC_2 (int *) ;
 struct kernfs_node* FUNC_3 (struct rb_node*) ;

__attribute__((used)) static struct kernfs_node *FUNC_4(const void *VAR_1,
 struct kernfs_node *VAR_2, loff_t VAR_3, struct kernfs_node *VAR_4)
{
 if (VAR_4) {
  int VAR_5 = FUNC_0(VAR_4) &&
   VAR_4->parent == VAR_2 && VAR_3 == VAR_4->hash;
  FUNC_1(VAR_4);
  if (!VAR_5)
   VAR_4 = ((void*)0);
 }
 if (!VAR_4 && (VAR_3 > 1) && (VAR_3 < VAR_0)) {
  struct rb_node *VAR_6 = VAR_2->dir.children.rb_node;
  while (VAR_6) {
   VAR_4 = FUNC_3(VAR_6);

   if (VAR_3 < VAR_4->hash)
    VAR_6 = VAR_6->rb_left;
   else if (VAR_3 > VAR_4->hash)
    VAR_6 = VAR_6->rb_right;
   else
    break;
  }
 }

 while (VAR_4 && (!FUNC_0(VAR_4) || VAR_4->ns != VAR_1)) {
  struct rb_node *VAR_7 = FUNC_2(&VAR_4->rb);
  if (!VAR_7)
   VAR_4 = ((void*)0);
  else
   VAR_4 = FUNC_3(VAR_7);
 }
 return VAR_4;
}
