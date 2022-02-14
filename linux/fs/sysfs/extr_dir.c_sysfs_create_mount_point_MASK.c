
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_2 (struct kernfs_node*,char const*) ;
 int FUNC_3 (struct kernfs_node*,char const*) ;

int FUNC_4(struct kobject *VAR_1, const char *VAR_2)
{
 struct kernfs_node *VAR_3, *VAR_4 = VAR_1->sd;

 VAR_3 = FUNC_2(VAR_4, VAR_2);
 if (FUNC_0(VAR_3)) {
  if (FUNC_1(VAR_3) == -VAR_0)
   FUNC_3(VAR_4, VAR_2);
  return FUNC_1(VAR_3);
 }

 return 0;
}
