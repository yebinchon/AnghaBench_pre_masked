
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kernfs_node*) ;
 scalar_t__ FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

void FUNC_5(struct kobject *VAR_2)
{
 struct kernfs_node *VAR_3 = VAR_2->sd;
 FUNC_3(&VAR_1);
 VAR_2->sd = ((void*)0);
 FUNC_4(&VAR_1);

 if (VAR_3) {
  FUNC_0(FUNC_2(VAR_3) != VAR_0);
  FUNC_1(VAR_3);
 }
}
