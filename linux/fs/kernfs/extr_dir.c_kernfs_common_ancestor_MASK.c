
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_root {int kn; } ;
struct kernfs_node {struct kernfs_node* parent; } ;


 size_t FUNC_0 (int ,struct kernfs_node*) ;
 struct kernfs_root* FUNC_1 (struct kernfs_node*) ;

__attribute__((used)) static struct kernfs_node *FUNC_2(struct kernfs_node *VAR_0,
        struct kernfs_node *VAR_1)
{
 size_t VAR_2, VAR_3;
 struct kernfs_root *VAR_4 = FUNC_1(VAR_0), *VAR_5 = FUNC_1(VAR_1);

 if (VAR_4 != VAR_5)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_4->kn, VAR_0);
 VAR_3 = FUNC_0(VAR_5->kn, VAR_1);

 while (VAR_2 > VAR_3) {
  VAR_0 = VAR_0->parent;
  VAR_2--;
 }
 while (VAR_3 > VAR_2) {
  VAR_1 = VAR_1->parent;
  VAR_3--;
 }


 while (VAR_1 != VAR_0) {
  VAR_1 = VAR_1->parent;
  VAR_0 = VAR_0->parent;
 }

 return VAR_0;
}
