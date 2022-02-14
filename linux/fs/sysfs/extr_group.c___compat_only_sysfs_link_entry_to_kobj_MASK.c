
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_3 (struct kernfs_node*,char const*,struct kernfs_node*) ;
 struct kernfs_node* FUNC_4 (struct kernfs_node*,char const*) ;
 int FUNC_5 (struct kernfs_node*) ;
 int FUNC_6 (struct kernfs_node*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (struct kernfs_node*,char const*) ;

int FUNC_10(struct kobject *VAR_3,
          struct kobject *VAR_4,
          const char *VAR_5)
{
 struct kernfs_node *VAR_6;
 struct kernfs_node *VAR_7;
 struct kernfs_node *VAR_8;






 FUNC_7(&VAR_2);
 VAR_6 = VAR_4->sd;
 if (VAR_6)
  FUNC_5(VAR_6);
 FUNC_8(&VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_4->sd, VAR_5);
 if (!VAR_7) {
  FUNC_6(VAR_6);
  return -VAR_1;
 }

 VAR_8 = FUNC_3(VAR_3->sd, VAR_5, VAR_7);
 if (FUNC_0(VAR_8) && FUNC_1(VAR_8) == -VAR_0)
  FUNC_9(VAR_3->sd, VAR_5);

 FUNC_6(VAR_7);
 FUNC_6(VAR_6);
 return FUNC_2(VAR_8);
}
