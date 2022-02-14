
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int sd; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 struct kernfs_node* FUNC_0 (int ,char const*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*,struct kobject*,char const*) ;

int FUNC_3(struct kobject *VAR_1, const char *VAR_2,
       struct kobject *VAR_3, const char *VAR_4)
{
 struct kernfs_node *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_1->sd, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_4);
 FUNC_1(VAR_5);

 return VAR_6;
}
