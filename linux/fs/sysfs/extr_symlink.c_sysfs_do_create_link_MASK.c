
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kernfs_node*,struct kobject*,char const*,int) ;
 struct kernfs_node* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct kobject *VAR_2, struct kobject *VAR_3,
    const char *VAR_4, int VAR_5)
{
 struct kernfs_node *VAR_6 = ((void*)0);

 if (!VAR_2)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2->sd;

 if (!VAR_6)
  return -VAR_0;

 return FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5);
}
