
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 scalar_t__ FUNC_2 (int) ;
 struct kernfs_node* FUNC_3 (struct kernfs_node*,char const*,struct kernfs_node*) ;
 int FUNC_4 (struct kernfs_node*) ;
 int FUNC_5 (struct kernfs_node*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (struct kernfs_node*,char const*) ;

__attribute__((used)) static int FUNC_9(struct kernfs_node *VAR_4,
       struct kobject *VAR_5,
       const char *VAR_6, int VAR_7)
{
 struct kernfs_node *VAR_8, *VAR_9 = ((void*)0);

 if (FUNC_2(!VAR_6 || !VAR_4))
  return -VAR_1;






 FUNC_6(&VAR_3);
 if (VAR_5->sd) {
  VAR_9 = VAR_5->sd;
  FUNC_4(VAR_9);
 }
 FUNC_7(&VAR_3);

 if (!VAR_9)
  return -VAR_2;

 VAR_8 = FUNC_3(VAR_4, VAR_6, VAR_9);
 FUNC_5(VAR_9);

 if (!FUNC_0(VAR_8))
  return 0;

 if (VAR_7 && FUNC_1(VAR_8) == -VAR_0)
  FUNC_8(VAR_4, VAR_6);
 return FUNC_1(VAR_8);
}
