
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int dummy; } ;
struct attribute {int name; } ;


 int FUNC_0 (struct kernfs_node*,int ,void const*) ;

void FUNC_1(struct kobject *VAR_0, const struct attribute *VAR_1,
     const void *VAR_2)
{
 struct kernfs_node *VAR_3 = VAR_0->sd;

 FUNC_0(VAR_3, VAR_1->name, VAR_2);
}
