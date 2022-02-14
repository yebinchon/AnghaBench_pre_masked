
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct kernfs_node {void const* ns; int rb; } ;
typedef int ino_t ;


 int FUNC_0 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_1 (void const*,struct kernfs_node*,int ,struct kernfs_node*) ;
 struct rb_node* FUNC_2 (int *) ;
 struct kernfs_node* FUNC_3 (struct rb_node*) ;

__attribute__((used)) static struct kernfs_node *FUNC_4(const void *VAR_0,
 struct kernfs_node *VAR_1, ino_t VAR_2, struct kernfs_node *VAR_3)
{
 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_3) {
  do {
   struct rb_node *VAR_4 = FUNC_2(&VAR_3->rb);
   if (!VAR_4)
    VAR_3 = ((void*)0);
   else
    VAR_3 = FUNC_3(VAR_4);
  } while (VAR_3 && (!FUNC_0(VAR_3) || VAR_3->ns != VAR_0));
 }
 return VAR_3;
}
