
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {struct kernfs_node* parent; } ;


 int FUNC_0 (struct kernfs_node*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct kernfs_node *FUNC_3(struct kernfs_node *VAR_1)
{
 struct kernfs_node *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0, VAR_3);
 VAR_2 = VAR_1->parent;
 FUNC_0(VAR_2);
 FUNC_2(&VAR_0, VAR_3);

 return VAR_2;
}
