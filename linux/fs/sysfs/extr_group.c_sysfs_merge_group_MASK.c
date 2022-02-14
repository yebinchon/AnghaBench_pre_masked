
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int sd; } ;
struct kernfs_node {int dummy; } ;
struct attribute_group {struct attribute** attrs; int name; } ;
struct attribute {int name; int mode; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 struct kernfs_node* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*,int ) ;
 int FUNC_3 (struct kobject*,int *,int *) ;
 int FUNC_4 (struct kernfs_node*,struct attribute* const,int,int ,int ,int ,int *) ;

int FUNC_5(struct kobject *VAR_1,
         const struct attribute_group *VAR_2)
{
 struct kernfs_node *VAR_3;
 kuid_t VAR_4;
 kgid_t VAR_5;
 int VAR_6 = 0;
 struct attribute *const *VAR_7;
 int VAR_8;

 VAR_3 = FUNC_0(VAR_1->sd, VAR_2->name);
 if (!VAR_3)
  return -VAR_0;

 FUNC_3(VAR_1, &VAR_4, &VAR_5);

 for ((VAR_8 = 0, VAR_7 = VAR_2->attrs); *VAR_7 && !VAR_6; (++VAR_8, ++VAR_7))
  VAR_6 = FUNC_4(VAR_3, *VAR_7, 0,
            (*VAR_7)->mode, VAR_4, VAR_5, ((void*)0));
 if (VAR_6) {
  while (--VAR_8 >= 0)
   FUNC_2(VAR_3, (*--VAR_7)->name);
 }
 FUNC_1(VAR_3);

 return VAR_6;
}
