
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rb_node {int dummy; } ;
struct TYPE_8__ {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct kernfs_node {TYPE_2__* parent; TYPE_3__ rb; } ;
struct TYPE_9__ {struct rb_node* rb_node; } ;
struct TYPE_6__ {int subdirs; TYPE_5__ children; } ;
struct TYPE_7__ {TYPE_1__ dir; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kernfs_node*,struct kernfs_node*) ;
 scalar_t__ FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,struct rb_node*,struct rb_node**) ;
 struct kernfs_node* FUNC_4 (struct rb_node*) ;

__attribute__((used)) static int FUNC_5(struct kernfs_node *VAR_2)
{
 struct rb_node **VAR_3 = &VAR_2->parent->dir.children.rb_node;
 struct rb_node *VAR_4 = ((void*)0);

 while (*VAR_3) {
  struct kernfs_node *VAR_5;
  int VAR_6;

  VAR_5 = FUNC_4(*VAR_3);
  VAR_4 = *VAR_3;
  VAR_6 = FUNC_0(VAR_2, VAR_5);
  if (VAR_6 < 0)
   VAR_3 = &VAR_5->rb.rb_left;
  else if (VAR_6 > 0)
   VAR_3 = &VAR_5->rb.rb_right;
  else
   return -VAR_0;
 }


 FUNC_3(&VAR_2->rb, VAR_4, VAR_3);
 FUNC_2(&VAR_2->rb, &VAR_2->parent->dir.children);


 if (FUNC_1(VAR_2) == VAR_1)
  VAR_2->parent->dir.subdirs++;

 return 0;
}
