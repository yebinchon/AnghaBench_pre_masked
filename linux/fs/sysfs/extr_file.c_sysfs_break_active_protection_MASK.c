
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int sd; } ;
struct kernfs_node {int dummy; } ;
struct attribute {int name; } ;


 int FUNC_0 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct kobject*) ;

struct kernfs_node *FUNC_3(struct kobject *VAR_0,
        const struct attribute *VAR_1)
{
 struct kernfs_node *VAR_2;

 FUNC_2(VAR_0);
 VAR_2 = FUNC_1(VAR_0->sd, VAR_1->name);
 if (VAR_2)
  FUNC_0(VAR_2);
 return VAR_2;
}
