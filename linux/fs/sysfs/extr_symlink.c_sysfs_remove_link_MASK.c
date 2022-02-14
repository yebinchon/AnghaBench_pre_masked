
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int dummy; } ;


 int FUNC_0 (struct kernfs_node*,char const*) ;
 struct kernfs_node* VAR_0 ;

void FUNC_1(struct kobject *VAR_1, const char *VAR_2)
{
 struct kernfs_node *VAR_3 = ((void*)0);

 if (!VAR_1)
  VAR_3 = VAR_0;
 else
  VAR_3 = VAR_1->sd;

 FUNC_0(VAR_3, VAR_2);
}
