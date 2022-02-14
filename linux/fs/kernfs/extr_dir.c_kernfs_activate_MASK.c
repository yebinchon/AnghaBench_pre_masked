
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int flags; int active; int rb; scalar_t__ parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 int VAR_2 ;
 struct kernfs_node* FUNC_4 (struct kernfs_node*,struct kernfs_node*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct kernfs_node *VAR_3)
{
 struct kernfs_node *VAR_4;

 FUNC_5(&VAR_2);

 VAR_4 = ((void*)0);
 while ((VAR_4 = FUNC_4(VAR_4, VAR_3))) {
  if (!VAR_4 || (VAR_4->flags & VAR_0))
   continue;

  FUNC_1(VAR_4->parent && FUNC_0(&VAR_4->rb));
  FUNC_1(FUNC_2(&VAR_4->active) != VAR_1);

  FUNC_3(VAR_1, &VAR_4->active);
  VAR_4->flags |= VAR_0;
 }

 FUNC_6(&VAR_2);
}
