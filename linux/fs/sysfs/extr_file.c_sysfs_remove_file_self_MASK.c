
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int dummy; } ;
struct attribute {int name; } ;


 scalar_t__ FUNC_0 (int) ;
 struct kernfs_node* FUNC_1 (struct kernfs_node*,int ) ;
 int FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (struct kernfs_node*) ;

bool FUNC_4(struct kobject *VAR_0, const struct attribute *VAR_1)
{
 struct kernfs_node *VAR_2 = VAR_0->sd;
 struct kernfs_node *VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_1->name);
 if (FUNC_0(!VAR_3))
  return 0;

 VAR_4 = FUNC_3(VAR_3);

 FUNC_2(VAR_3);
 return VAR_4;
}
