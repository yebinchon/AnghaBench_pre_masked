
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int sd; } ;
struct kernfs_node {int dummy; } ;
struct attribute_group {struct attribute** attrs; int name; } ;
struct attribute {int name; } ;


 struct kernfs_node* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*,int ) ;

void FUNC_3(struct kobject *VAR_0,
         const struct attribute_group *VAR_1)
{
 struct kernfs_node *VAR_2;
 struct attribute *const *VAR_3;

 VAR_2 = FUNC_0(VAR_0->sd, VAR_1->name);
 if (VAR_2) {
  for (VAR_3 = VAR_1->attrs; *VAR_3; ++VAR_3)
   FUNC_2(VAR_2, (*VAR_3)->name);
  FUNC_1(VAR_2);
 }
}
