
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int sd; } ;
struct kernfs_node {int dummy; } ;


 struct kernfs_node* FUNC_0 (int ,char const*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*,char const*) ;

void FUNC_3(struct kobject *VAR_0, const char *VAR_1,
      const char *VAR_2)
{
 struct kernfs_node *VAR_3;

 VAR_3 = FUNC_0(VAR_0->sd, VAR_1);
 if (VAR_3) {
  FUNC_2(VAR_3, VAR_2);
  FUNC_1(VAR_3);
 }
}
