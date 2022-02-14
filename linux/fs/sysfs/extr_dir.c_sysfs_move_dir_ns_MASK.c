
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int name; } ;


 int FUNC_0 (struct kernfs_node*,struct kernfs_node*,int ,void const*) ;
 struct kernfs_node* VAR_0 ;

int FUNC_1(struct kobject *VAR_1, struct kobject *VAR_2,
        const void *VAR_3)
{
 struct kernfs_node *VAR_4 = VAR_1->sd;
 struct kernfs_node *VAR_5;

 VAR_5 = VAR_2 && VAR_2->sd ?
  VAR_2->sd : VAR_0;

 return FUNC_0(VAR_4, VAR_5, VAR_4->name, VAR_3);
}
