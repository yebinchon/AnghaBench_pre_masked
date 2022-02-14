
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; } ;
struct kernfs_node {int dummy; } ;
struct attribute {int mode; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 struct kernfs_node* FUNC_0 (struct kernfs_node*,char const*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (struct kobject*,int *,int *) ;
 int FUNC_4 (struct kernfs_node*,struct attribute const*,int,int ,int ,int ,int *) ;

int FUNC_5(struct kobject *VAR_1,
  const struct attribute *VAR_2, const char *VAR_3)
{
 struct kernfs_node *VAR_4;
 kuid_t VAR_5;
 kgid_t VAR_6;
 int VAR_7;

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_1->sd, VAR_3);
 } else {
  VAR_4 = VAR_1->sd;
  FUNC_1(VAR_4);
 }

 if (!VAR_4)
  return -VAR_0;

 FUNC_3(VAR_1, &VAR_5, &VAR_6);
 VAR_7 = FUNC_4(VAR_4, VAR_2, 0,
           VAR_2->mode, VAR_5, VAR_6, ((void*)0));
 FUNC_2(VAR_4);

 return VAR_7;
}
