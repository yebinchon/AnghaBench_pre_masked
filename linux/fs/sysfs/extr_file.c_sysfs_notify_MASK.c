
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int dummy; } ;


 struct kernfs_node* FUNC_0 (struct kernfs_node*,char const*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (struct kernfs_node*) ;

void FUNC_4(struct kobject *VAR_0, const char *VAR_1, const char *VAR_2)
{
 struct kernfs_node *VAR_3 = VAR_0->sd, *VAR_4;

 if (VAR_3 && VAR_1)
  VAR_3 = FUNC_0(VAR_3, VAR_1);
 else
  FUNC_1(VAR_3);

 if (VAR_3 && VAR_2) {
  VAR_4 = FUNC_0(VAR_3, VAR_2);
  FUNC_3(VAR_3);
  VAR_3 = VAR_4;
 }

 if (VAR_3) {
  FUNC_2(VAR_3);
  FUNC_3(VAR_3);
 }
}
