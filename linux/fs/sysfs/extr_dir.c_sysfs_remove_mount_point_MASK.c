
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int dummy; } ;


 int FUNC_0 (struct kernfs_node*,char const*,int *) ;

void FUNC_1(struct kobject *VAR_0, const char *VAR_1)
{
 struct kernfs_node *VAR_2 = VAR_0->sd;

 FUNC_0(VAR_2, VAR_1, ((void*)0));
}
